<?php

/**
 * Remove all Page Manager pages stored in database
 *
 */
function udi_central_update_6004() {
  $ret = array();
  
  db_query("DELETE pp, ph FROM {page_manager_pages} AS pp INNER JOIN {page_manager_handlers} AS ph ON pp.pid = ph.did");
  if ($rows = db_affected_rows() > 0) {
    $ret[] = array(
      'success' => TRUE,
      'query' => sprintf("Number of rows in Page Manager table affected: %d", $rows)
    );
  }
  else {
    $ret[] = array(
      'success' => FALSE,
      'query' => "Failed to delete Page Manager entries from database."
    );
  }
  
  return $ret; 
}