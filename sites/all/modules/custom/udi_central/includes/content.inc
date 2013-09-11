<?php
/**
 * API function to update CCK fields on a content type.
 * A CCK exported file needs to include <?php tag.
 *
 * @param string $content_type
 * 	The name of the content type to be updated
 * @param string $file
 * 	The path to the exported code
 *
 * @return void
 */
function udi_central_content_field_update($content_type, $file) {
  module_load_include('inc', 'content', 'includes/content.admin');
  module_load_include('inc', 'content', 'includes/content.crud');
  $content = array();

  ob_start();
  include $file;
  ob_end_clean();

  $macro = '$content = '. var_export($content, 1) .';';
  $content = NULL;
  // Convert the import formatted text back into a $content array.
  // Return if errors generated or not an array.
  // Use '@' to suppress errors about undefined constants in the macro.
  @eval($macro);
  $imported_type = $content['type'];
  $type_form_state = array('values' => $imported_type);
  $type = (object) $imported_type;
  module_load_include('inc', 'node', 'content_types');
  drupal_execute('node_type_form', $type_form_state, $type);
  if (is_array($content['fields'])) {
    foreach($content['fields'] as $field) {
      $field['type_name'] = $content_type;
      $form_state = array();
      $form_state['values'] = $field;
      $form_state['values']['type_name'] = $content_type;
      $prev = content_field_instance_read(array('field_name' => $field['field_name'], 'type_name' => $field['type_name']));
      if ($prev) {
        content_field_instance_update($field);
      } else {
        content_field_instance_create($field);
      }
    }	
  }

  // sets the weight of default fields
  variable_set('content_extra_weights_profile', $content['extra']);
}

/**
 * API function to remove a CCK filed from a content type
 *
 * @param string $content_type
 * 	The name of the content type to remove the field from
 * @param string $field_name
 * 	The internal CCK field name of the field to be removed
 *
 * @return void
 */
function udi_central_content_field_remove($content_type, $field_name) {
  module_load_include('inc', 'content', 'includes/content.admin');
  $form_state = array();
  $form_state['values']['type_name'] = $content_type;
  $form_state['values']['field_name'] = $field_name;
  $form_state['values']['confirm'] = TRUE;
  content_field_remove_form_submit('_content_admin_field_remove', $form_state);
}
