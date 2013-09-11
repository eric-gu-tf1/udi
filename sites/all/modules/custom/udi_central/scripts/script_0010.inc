<?php

/**
 * Assign new path alias to nodes
 *
 */
function udi_central_update_6010() {
  $ret = array();
 
  $cached_node = variable_get('udi_node_placeholders', array());
 
  $aliases[] = array('src' => 'node/63', 'dst' => 'about');
  $aliases[] = array('src' => 'node/66', 'dst' => 'about/code-of-ethics');
  $aliases[] = array('src' => 'node/2396', 'dst' => 'policy/policy-agenda');
  $aliases[] = array('src' => 'node/90', 'dst' => 'membership/join');
  
  if (!empty($cached_node)) {
    $aliases[] = array('src' => 'node/'.$cached_node['policy']['nid'], 'dst' => 'policy');
    $aliases[] = array('src' => 'node/'.$cached_node['policy_committees']['nid'], 'dst' => 'policy/committees');
    $aliases[] = array('src' => 'node/'.$cached_node['membership']['nid'], 'dst' => 'membership');
  }
  
  foreach ($aliases as $alias) {
    $sql = "UPDATE {url_alias} SET dst = '%s' WHERE src = '%s'";    
    if (db_query($sql, $alias['dst'], $alias['src']) !== FALSE) {
      $ret[] = array(
        'success' => TRUE,
        'query' => sprintf("Path alias for '%s' updated to '%s' sucessfully.", $alias['src'], $alias['dst'])
      );
    }
    else {
      $ret[] = array(
        'success' => FALSE,
        'query' => sprintf("Path alias for '%s' failed to update '%s'.", $alias['src'], $alias['dst'])
      );
    }
  }
  
  return $ret;
}
