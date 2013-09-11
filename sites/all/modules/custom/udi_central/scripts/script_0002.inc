<?php

/**
 * Remove taxonomies
 *
 */
function udi_central_update_6002() {
  $ret = array();
  $vocabs = array(
    'Chapters',
    'Companies',
    'Image Tags',
    'Municipality',
  );
  
  udi_central_uninstall_taxonomies($ret, $vocabs);
  
  return $ret;
}

