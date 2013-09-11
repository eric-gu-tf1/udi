<?php

/**
 * Installs term Fraser Vallery to Region vocab.
 *
 */
function udi_central_update_6018() {
  $ret = array();

  $sql = "SELECT vid FROM {vocabulary} WHERE name LIKE '%s'";
  $vocab = db_fetch_object(db_query($sql, 'Region'));

  $term = array(
    'vid' => $vocab->vid,
    'name' => "Fraser Valley",
    'description' => "Fraser Valley",
    'weight' => 3,
  );

  if (taxonomy_save_term($term) == SAVED_NEW) {
    $ret[] = array(
      'success' => TRUE,
      'query' => 'Added "Fraser Vallery" term to "Region" vocabulary.',
    );
  }

  return $ret;
}
