<?php

/**
 * Clear all caches
 *
 */
function udi_central_update_6016() {
  $ret = array();
  
  // Clear all cache
  drupal_flush_all_caches();
  $ret[] = array(
    'success' => TRUE,
    'query' => "Cleared all caches."
  );
  
  return $ret;
}