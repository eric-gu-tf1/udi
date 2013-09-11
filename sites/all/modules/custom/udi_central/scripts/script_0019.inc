<?php

/**
 * Update UDI Blog menu item to UDI Sponsors
 *
 */
function udi_central_update_6019() {
  $ret = array();

  $sql = "SELECT mlid,plid, link_path, link_title FROM {menu_links} WHERE menu_name = '%s' AND link_path = '%s'";
  $result = db_query($sql, 'menu-udi-main', 'blog');

  while ($row = db_fetch_object($result)) {
    if ($row->plid == '0') {
      $sql = "UPDATE {menu_links} SET link_path = '%s', link_title = '%s' WHERE mlid = %d";
      db_query($sql, 'about/sponsors', 'UDI Sponsors', $row->mlid);
    }
    else if ($row->plid != '0') {
      $sql = "UPDATE {menu_links} SET link_path = '%s', link_title = '%s' WHERE mlid = %d";
      db_query($sql, 'about/sponsors', 'Sponsors', $row->mlid);
    }
  }

  $ret[] = array(
    'success' => TRUE,
    'query' => 'Updated UDI Blog menu item into UDI Sponsors',
  );

  return $ret;
}
