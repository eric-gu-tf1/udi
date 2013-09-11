<?php

/**
 * API function to get a vocabulary.
 *
 * @param string $name
 *  The name of the taxonomy term
 * 
 * @return The taxonomy term object
 */
function udi_central_taxonomy_get_vocabulary($name) {
  $sql = "SELECT * FROM {vocabulary} WHERE name = '%s'";
  $result = db_query($sql, $name);
  return db_fetch_object($result);
}

/**
 * API function to set an array of vids (key = vid, val = vid if set 0 if not set)
 * Used in views to set taxonomy fields.
 *
 * @param string $taxonomy_name
 *  The name of the vocabulary
 *
 * @return $default_vids
 *  An array of vids
 */
function udi_central_taxonomy_set_vids_array($taxonomy_name) {
  $vocabularies = taxonomy_get_vocabularies();

  foreach ($vocabularies as $key => $val) {
    if (strcmp($val->name, $taxonomy_name) == 0) {
      $default_vids[$key] = $key;
    } else {
      $default_vids[$key] = 0;
    }
  }

  return $default_vids;
}

/**
 * Helper function to get the TIDs for each taxonomy term.
 * Can specify if user needs only the tids from a child term.
 *
 * @param int $vid
 *  The id of the vocabulary to be fetched
 * @param $rank
 *  The hierarchy level of the desired child terms. 1 is base parent term.
 *  ie. if rank = 2, function will return an array of only the tids of the first child
 * @param bool $use_name_as_key
 *  If true, will set the keys to the term names
 *  
 * @return $result
 *  An array of taxonomy terms with $key and $val set to the tid of the parent term or desired child term.
 */
function udi_central_taxonomy_get_taxonomy_tids($vid, $rank, $use_name_as_key = FALSE) {

  if ($rank == 1) {
    $taxonomies = taxonomy_get_tree($vid,0,-1, 1);
    foreach ($taxonomies as $key => $val) {
      if ($use_name_as_key) {
        $result[strtolower($val->name)] = $val->tid;
      } else {
        $result[$val->tid] = $val->tid;
      }

    }
  } else {
    $taxonomies = taxonomy_get_tree($vid,0,-1, $rank);

    for ($i=$rank; $i > 1; $i--) {
      if ($rank == $i) {
        foreach ($taxonomies as $key => $val) {
          if ($val->parents[0] == 0) {
            $result_tids[] = $val->tid;
          }
        }
      }

      foreach ($taxonomies as $tkey => $tval) {
        if (is_array($result_tids)) {
          foreach ($result_tids as $key => $val) {
            if ($tval->parents[0] == $val) {
              //$current_tids[] = $tval->tid;
              if ($use_name_as_key) {
                $current_tids[strtolower($tval->name)] = $tval->tid;
              } else {
                $current_tids[$tval->tid] = $tval->tid;
              }
            }
          }
        }
      }

      $result_tids = $current_tids;
      unset($current_tids);

      if (is_array($result_tids)) {
        $index = $i -1;
        if ($index == 1) {
          foreach ($result_tids as $key => $val) {
            //$result[$val] =  $val;
            if ($use_name_as_key) {
              $result[$key] = $val;
            } else {
              $result[$val] = $val;
            }
          }
        }
      } else {
        drupal_set_message('Invalid Rank Value specified in central_get_taxonomy_tids second argument', 'error');
        return null;
      }

    }
  }
  return $result;

}

/**
 * Retrieves a term id associated with a vocabulary
 * 
 * @param int $vid
 *  Vocabulary id where the term is associated with
 * @param string $term
 *  Term name
 * @return
 *  Term id associated with the given term within a vocabulary
 */
function udi_central_taxonomy_get_tid_by_name($vid, $term) {
  $sql = "SELECT tid FROM {term_data} WHERE vid = %d AND name = '%s'";
  return db_result(db_query($sql, $vid, $term));
}

/**
 * Set the node types for a given vocabulary
 *
 * @param int $vid
 *  The vocabulary id
 * @param string $type
 *  The node type to be added
 * 
 * @return void
 */ 
function udi_central_taxonomy_set_vocabulary_node_types($vid, $type) {
  $sql = "INSERT INTO {vocabulary_node_types} (vid, type) VALUES (%d, '%s')";
  db_query($sql, $vid, $type);
}

/**
 * Import a taxonomy file from taxonomy export
 *
 * @param string $file
 *  The path to the file to be read in
 *
 * @return void
 */
function udi_central_taxonomy_import_from_export($file) {
  $taxonomy_export = array();
  ob_start();
  include $file;
  ob_end_clean();

  $macro = '$taxonomy_export = '. var_export($taxonomy_export, 1) .';';
  @eval('<?php return ' . $macro . ';');
  if (!isset($taxonomy_export) || !$taxonomy_export || !isset($taxonomy_export['vocabulary'])) {
    drupal_set_message(t("Error parsing import data."), 'error');
    return;
  }
  $vocabulary = (array) $taxonomy_export['vocabulary'];
  if ($vocabulary && $vocabulary['name']) {
    // Clobber the VID, currently "updating" existing vocabularies is
    // unsupported, new vocabularies will always be created.
    $vocabulary['vid'] = NULL;
    taxonomy_save_vocabulary($vocabulary);

    drupal_set_message(t("Vocabulary '%name' imported successfully.", array('%name' => $vocabulary['name'])));
  }

  if ($taxonomy_export['terms']) {
    // Parent map keeps track of existing TID hierarchy, allowing it to
    // be recreated.
    $parent_tid_map = array();

    // Pass #1, create all the terms
    foreach ($taxonomy_export['terms'] as $key => $term) {
      $term_ref =& $taxonomy_export['terms'][$key];
      $parent_tid_map[$term->tid] = $key;

      $term_array = (array) $term;
      $term_array['tid'] = udi_central_taxonomy_get_tid_by_name($vocabulary['vid'], $term['name']);
      $term_array['vid'] = $vocabulary['vid'];
      $term_array['parent'] = array(0 => 0);
      taxonomy_save_term($term_array);

      // Update the original $taxonomy_export structure with the new TID,
      // VID, and parent attributes.
      $term_ref->tid = $term_array['tid'];
      $term_ref->vid = $term_array['vid'];

      // taxonomy_get_tree() returns the hierarchy in a "parents" attribute
      // while taxonomy_save_term() requires a "parent" attribute ...
      $term_ref->parent = $taxonomy_export['terms'][$key]->parents;
    }

    // Pass #2, rebuild the term hierarchy
    foreach ($taxonomy_export['terms'] as $key => $term) {
      if ($term->parent[0] == 0) {
        continue;
      }

      foreach ($term->parent as $pkey => $ptid) {
        // The parent TIDs are still relative to the old imported TIDs, use
        // the $parent_tid_map created earlier to lookup the new TID for this
        // parent.
        $term->parent[$pkey] = $taxonomy_export['terms'][$parent_tid_map[$ptid]]->tid;
      }

      $term_array = (array) $term;
      taxonomy_save_term($term_array);
    }

    drupal_set_message(t("%num terms imported successfully.", array('%num' => count($parent_tid_map))));
  }
}

/**
 * FAPI callback: Displays a form allowing the admin to choose which
 * vocabulary to export. (Taken from taxonomy_export)
 **/
function udi_central_taxonomy_export_export($form_state) {
  $form = array(
    '#redirect' => FALSE
  );

  $vocabularies = taxonomy_get_vocabularies();
  $options = array();
  foreach ($vocabularies as $vid => $vocabulary) {
    $options[$vid] = $vocabulary->name;
  }

  if ($form_state['storage']['taxonomy_export']) {
    $form['back'] = array(
      '#value' => l(t('<< Back, export more vocabularies'), 'admin/content/taxonomy/export'),
    );
    $form['taxonomy_export'] = array(
      '#type' => 'textarea',
      '#title' => t('Export data'),
      '#cols' => 80,
      '#rows' => 30,
      '#default_value' => $form_state['storage']['taxonomy_export'],
      '#attributes' => array('readonly' => 'readonly'),
    );
  }
  else {
    $form['vid'] = array(
      '#type' => 'radios',
      '#title' => t('Vocabulary to export'),
      '#default_value' => $form_state['values']['vid'] ? $form_state['values']['vid'] : key($options),
      '#options' => $options,
    );
    $form['include_terms'] = array(
      '#type' => 'checkbox',
      '#title' => t('Include Terms?'),
      '#default_value' => $form_state['values']['include_terms'] ? $form_state['values']['include_terms'] : FALSE,
      '#description' => t('By default only the vocabulary definition is exported, not the term data also.  <em>Warning, if you have a lot of terms this may generate a large export!</em>')
    );
    $form['as_file'] = array(
      '#type' => 'checkbox',
      '#title' => t('Save export as file?'),
      '#default_value' => $form_state['values']['as_file'] ? $form_state['values']['as_file'] : FALSE,
      '#description' => t('By default, exports are displayed in a text area for copying to the clipboard.')
    );
    $form['export'] = array(
      '#type' => 'submit',
      '#value' => t('Export'),
    );
  }

  return $form;
}

/**
 * FAPI submit handler for taxonomy_export_export().
 * (Taken from taxonomy_export)
 **/
function udi_central_taxonomy_export_export_submit($form, &$form_state) {
  $export = array();

  $vocabulary = taxonomy_vocabulary_load($form_state['values']['vid']);
  $munged_vocabulary_name = strtolower(preg_replace('/[^A-Za-z0-9-]/', '_', $vocabulary->name));

  if ($form_state['values']['include_terms']) {
    $terms = taxonomy_get_tree($vocabulary->vid);
  }

  $export  = "<?php\n";
  $export .= "// Generated by taxonomy_export " . TAXONOMY_EXPORT_VERSION . "\n\n";
  $export .= '$taxonomy_export = ';
  $export .= strtr(var_export(array('vocabulary' => $vocabulary, 'terms' => $terms,), 1), array('stdClass::__set_state' => '(object) '));
  $export .= ";\n";

  if ($form_state['values']['as_file']) {
    // Set headers to make this a file attachment download
    drupal_set_header('Content-type: text/plain');
    drupal_set_header('Content-Disposition: attachment; filename="' . $munged_vocabulary_name . '.taxonomy_export.inc"');

    // Print the export, and immediately exit
    echo $export;
    module_invoke_all('exit');
    exit;
  }
  else {
    $form_state['storage']['taxonomy_export'] = $export;
  }
}