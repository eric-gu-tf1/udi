<?php

/**
 * Installs Awards for Excellence page and menu item.
 *
 */
function udi_central_update_6017() {
  module_load_include('module', 'node');
  $ret = array();

  //
  // Install a placeholder node for events/awards
  //
  $cache_node = variable_get('udi_node_placeholders', array());
  $attr = array('path' => "events/awards", 'vid' => $cache_node['events_awards']['vid'], 'status' => '0');
  $node = udi_central_install_node($ret, 'Awards for Excellence', $attr, $cache_node['events_awards']['nid']);
  $cache_node['events_awards']['nid'] = intval($node->nid);
  $cache_node['events_awards']['vid'] = intval($node->vid);
  variable_set('udi_node_placeholders', $cache_node);

  //
  // Add Awards for Excellence menu item to Main Level 2 - Events menu
  //
  $cache_main = variable_get('menu_udi_main', array());
  $cache_sub_events = variable_get('menu_udi_sub_events', array());

  $events_awards = array(
    'awards' => array(
      'menu_name' => 'menu-udi-main',
      'link_title' => "Awards for Excellence",
      'link_path' => udi_central_get_node_path('events/awards', FALSE),
      'enabled' => true,
      'expanded' => false,
      'weight' => 2,
    )
  );

  foreach ($events_awards as $key => $item) {
    $item['mlid'] = $cache_sub_events[$key]['mlid'] ? $cache_sub_events[$key]['mlid'] : 0;
    $item['plid'] = $cache_main['events']['mlid'] ? $cache_main['events']['mlid'] : 0;
    menu_link_save($item);
    $cache_sub_events[$key]['mlid'] = $item['mlid'];
    $cache_sub_events[$key]['plid'] = $item['plid'];
  }

  variable_set('menu_udi_sub_events', $cache_sub_events);

  $ret[] = array(
    'success' => TRUE,
    'query' => 'Events Awards for Excellence of sub level of Main Navigation menu has been created.'
  );

  //
  // Menu items for the Level 2 - Events Submenu
  //
  $events_awards = array(
    'awards' => array(
      'link_title' => "Awards for Excellence",
      'link_path' => udi_central_get_node_path('events/awards', FALSE),
      'enabled' => TRUE,
      'expanded' => FALSE,
      'weight' => 2
    ),
  );

  udi_central_install_menu_parent_item('udi-sub-events', $events_awards, 'udi_sub_events_block');

  $ret[] = array(
    'success' => TRUE,
    'query' => 'Awards for Excellence Events Section Sub-Navigation menu has been created.'
  );


  //
  // Update Events Filter block visibility
  //
  $sql = "
    UPDATE {blocks}
    SET pages = '%s'
    WHERE theme = '%s' AND delta = '%s' AND module = '%s'
  ";

  $params = array('pages' => 'events
events/udi
events/industry');

  db_query($sql, $params['pages'], 'udi_biz', 'events-filter', 'udi_features_events');

  $ret[] = array(
    'success' => TRUE,
    'query' => "Events filter block page visibility updated."
  );

  //
  // Update Events Filter block visibility
  //
    $sql = "
    UPDATE {blocks}
    SET pages = '%s'
    WHERE theme = '%s' AND delta = '%s' AND module = '%s'
  ";

  $params = array('pages' => 'events
events/udi
events/industry');

  db_query($sql, $params['pages'], 'udi_biz', 'events-region-filter', 'udi_features_events');

  $ret[] = array(
    'success' => TRUE,
    'query' => "Events Region filter block page visibility updated."
  );

  return $ret;
}
