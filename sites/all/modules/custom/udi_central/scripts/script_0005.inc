<?php

/**
 * Remove all Views stored in database
 *
 */
function udi_central_update_6005() {
  $ret = array();
  
  db_query("DELETE vv, vd FROM {views_view} AS vv INNER JOIN {views_display} AS vd ON vv.vid = vd.vid");
  if ($rows = db_affected_rows() > 0) {
    $ret[] = array(
      'success' => TRUE,
      'query' => sprintf("Number of rows in Views table affected: %d", $rows)
    );
  }
  else {
    $ret[] = array(
      'success' => FALSE,
      'query' => "Failed to delete Views entries from database."
    );
  }
  
  return $ret;
}