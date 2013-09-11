<?php

/**
 * Set Block placement
 *
 */
function udi_central_update_6015() {
  $ret = array();
  
  // Update blocks in DB
  block_flush_caches();
  
  // Disable ALL blocks in UDI BIZ Theme
  db_query("UPDATE {blocks} SET status = %d WHERE theme = '%s'", 0, "udi_biz");
  
  // Set Region CONTENT_BOTTOM
  $param = array('status' => 1, 'weight' => -48, 'region' => 'content_bottom', 'visibility' => 1, 'pages' => '<front>');
  udi_central_update_block($ret, 'udi_biz', 'views', 'udi_homepage_blocks-block_1', $param);
  udi_central_update_block($ret, 'udi_biz', 'views', 'udi_homepage_blocks-block_2', $param);
  udi_central_update_block($ret, 'udi_biz', 'views', 'udi_homepage_blocks-block_3', $param);
  udi_central_update_block($ret, 'udi_biz', 'views', 'udi_homepage_blocks-block_4', $param);
  
  // Set Region CONTENT_TOP
  $param = array('status' => 1, 'weight' => -48, 'region' => 'content_top', 'visibility' => 1, 'pages' => '<front>', 'title' => "<none>");
  udi_central_update_block($ret, 'udi_biz', 'udi_slideshow', 'home', $param);
 
  $param = array('status' => 1, 'weight' => -48, 'region' => 'content_top', 'visibility' => 0, 'title' => "<none>");
  udi_central_update_block($ret, 'udi_biz', 'udi_slideshow', 'section', $param);

  $param = array('status' => 1, 'weight' => 0, 'region' => 'content_top', 'visibility' => 1, 'title' => "<none>", 'pages' => 'events
events/*');
  udi_central_update_block($ret, 'udi_biz', 'udi_features_events', 'events-region-filter', $param);

  // Set Region FOOTER
  $param = array('status' => 1, 'weight' => 0, 'region' => 'footer_block', 'visibility' => 0, 'title' => "<none>");
  udi_central_update_block($ret, 'udi_biz', 'menu', 'menu-udi-footer', $param);

  // Set Region Navigation
  $param = array('status' => 1, 'weight' => 0, 'region' => 'navigation', 'visibility' => 0, 'title' => "<none>");
  udi_central_update_block($ret, 'udi_biz', 'nice_menus', 1, $param);
  
  // Set Region RIGHT
  $param = array('status' => 1, 'weight' => -48, 'region' => 'right', 'visibility' => 1, 'title' => "<none>", 'pages' => 'about
about/*
about/*/*');
  udi_central_update_block($ret, 'udi_biz', 'menu', 'menu-udi-sub-about', $param);
  
  $param = array('status' => 1, 'weight' => -47, 'region' => 'right', 'visibility' => 1, 'title' => "<none>", 'pages' => 'events
events/*
events/*/*');
  udi_central_update_block($ret, 'udi_biz', 'menu', 'menu-udi-sub-events', $param);
  
  $param = array('status' => 1, 'weight' => -46, 'region' => 'right', 'visibility' => 1, 'title' => "<none>", 'pages' => 'news-central
news-central/*
news-central/*/*');
  udi_central_update_block($ret, 'udi_biz', 'menu', 'menu-udi-sub-news', $param);  
  
  $param = array('status' => 1, 'weight' => -45, 'region' => 'right', 'visibility' => 1, 'title' => "<none>", 'pages' => 'policy
policy/*
policy/*/*');
  udi_central_update_block($ret, 'udi_biz', 'menu', 'menu-udi-sub-policy', $param);
  
  $param = array('status' => 1, 'weight' => -44, 'region' => 'right', 'visibility' => 1, 'title' => "<none>", 'pages' => 'membership
membership/*
membership/*/*');
  udi_central_update_block($ret, 'udi_biz', 'menu', 'menu-udi-sub-membership', $param);
  
  $param = array('status' => 1, 'weight' => -43, 'region' => 'right', 'visibility' => 1, 'title' => "<none>", 'pages' => 'news-central
news-central/*');
  udi_central_update_block($ret, 'udi_biz', 'udi_features_news_central', 'news-central-filter', $param);
  
  $param = array('status' => 1, 'weight' => -42, 'region' => 'right', 'visibility' => 1, 'title' => "<none>", 'pages' => 'events
events/*');
  udi_central_update_block($ret, 'udi_biz', 'udi_features_events', 'events-filter', $param);
  
  $param = array('status' => 1, 'weight' => -41, 'region' => 'right', 'visibility' => 1, 'title' => "<none>", 'pages' => 'policy/publications');
  udi_central_update_block($ret, 'udi_biz', 'udi_features_publications', 'publications-filter', $param);
  
  $param = array('status' => 1, 'weight' => -40, 'region' => 'right', 'visibility' => 1, 'title' => "<none>", 'pages' => 'about/board
about/staff');
  udi_central_update_block($ret, 'udi_biz', 'udi_features_homepage_blocks', 'board-director-login', $param);
  
  return $ret;
}

function udi_central_update_block(&$ret, $theme, $module, $delta, $params = array()) {
  $sql = "
    UPDATE {blocks}
    SET status = %d, weight = %d, region = '%s', visibility = %d, pages = '%s', title = '%s', custom = %d, throttle = %d
    WHERE theme = '%s' AND delta = '%s' AND module = '%s'
  ";
  
  $params['status'] = isset($params['status']) ? $params['status'] : 1;
  $params['weight'] = isset($params['weight']) ? $params['weight'] : 0;
  $params['visibility'] = isset($params['visibility']) ? $params['visibility'] : 0;
  $params['region'] = isset($params['region']) ? $params['region'] : "";
  $params['pages'] = isset($params['pages']) ? $params['pages'] : "";
  $params['title'] = isset($params['title']) ? $params['title'] : "";
  $params['custom'] = isset($params['custom']) ? $params['custom'] : 0;
  $params['throttle'] = isset($params['throttle']) ? $params['throttle'] : 0;
  
  db_query($sql, $params['status'], $params['weight'], $params['region'], $params['visibility'], $params['pages'], $params['title'], $params['custom'], $params['throttle'], $theme, $delta, $module);
  $ret[] = array(
    'success' => db_affected_rows() > 0 ? TRUE : FALSE,
    'query' => sprintf("Update Block <strong>%s</strong> for Theme <em>%s</em>.", $delta, $theme)
  );
}