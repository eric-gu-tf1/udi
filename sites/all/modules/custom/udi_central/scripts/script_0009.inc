<?php

/**
 * Install placeholder node(s) for the all Navigation menus
 *
 */
function udi_central_update_6009() {
  module_load_include('module', 'node');
  
  $ret = array();
  $cache_node = variable_get('udi_node_placeholders', array());
  
  $attr = array('path' => "policy", 'vid' => $cache_node['policy']['vid']);
  $node = udi_central_install_node($ret, 'Policy', $attr, $cache_node['policy']['nid']);
  $cache_node['policy']['nid'] = $node->nid;
  $cache_node['policy']['vid'] = $node->vid;
  
  $attr = array('path' => "policy/committees", 'vid' => $cache_node['policy_committees']['vid']);
  $node = udi_central_install_node($ret, 'Committees', $attr, $cache_node['policy_committees']['nid']);
  $cache_node['policy_committees']['nid'] = $node->nid;
  $cache_node['policy_committees']['vid'] = $node->vid;
  
  $attr = array('path' => "membership", 'vid' => $cache_node['membership']['vid']);
  $node = udi_central_install_node($ret, 'Membership', $attr, $cache_node['membership']['nid']);
  $cache_node['membership']['nid'] = $node->nid;
  $cache_node['membership']['vid'] = $node->vid;
  
  variable_set('udi_node_placeholders', $cache_node);
  return $ret;
}
