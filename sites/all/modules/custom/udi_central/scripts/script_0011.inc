<?php

/**
 * Build Main Navigation Menu
 *
 */
function udi_central_update_6011() {
  $ret = array();
  module_load_include('inc', 'udi_central');
  
  // Create a menu
  if (!udi_central_menu_is_exist('udi-main')) {
	udi_central_install_menu('udi-main', 'UDI Main Navigation', 'Main Navigation');
  }
  
  // Menu items for the Level 1
  $cache_main = variable_get('menu_udi_main', array());  
  $main = array(
	'about' => array(
      'menu_name' => 'menu-udi-main',
      'link_title' => "About UDI",
      'link_path' => udi_central_get_node_path('about'),
      'enabled' => true,
      'expanded' => true,
      'weight' => 0,
      'mlid' => $cache_main['about']['mlid'] ? $cache_main['about']['mlid'] : 0
    ),
    'policy' => array(
      'menu_name' => 'menu-udi-main',
      'link_title' => "Policy",
      'link_path' => udi_central_get_node_path('policy'),
      'enabled' => true,
      'expanded' => true,
      'weight' => 1,
      'mlid' => $cache_main['policy']['mlid'] ? $cache_main['policy']['mlid'] : 0
    ),
    'news_central' => array(
      'menu_name' => 'menu-udi-main',
      'link_title' => "News Central",
      'link_path' => udi_central_get_node_path('news-central', TRUE),
      'enabled' => true,
      'expanded' => true,
      'weight' => 2,
      'mlid' => $cache_main['news_central']['mlid'] ? $cache_main['news_central']['mlid'] : 0
    ),
    'events' => array(
      'menu_name' => 'menu-udi-main',
      'link_title' => "Events",
      'link_path' => udi_central_get_node_path('events', TRUE),
      'enabled' => true,
      'expanded' => true,
      'weight' => 3,
      'mlid' => $cache_main['events']['mlid'] ? $cache_main['events']['mlid'] : 0
    ),
    'careers' => array(
      'menu_name' => 'menu-udi-main',
      'link_title' => "Careers",
      'link_path' => udi_central_get_node_path('careers', TRUE),
      'enabled' => true,
      'expanded' => false,
      'weight' => 4,
      'mlid' => $cache_main['careers']['mlid'] ? $cache_main['careers']['mlid'] : 0
    ),
    'membership' => array(
      'menu_name' => 'menu-udi-main',
      'link_title' => "Membership",
      'link_path' => udi_central_get_node_path('membership'),
      'enabled' => true,
      'expanded' => true,
      'weight' => 5,
      'mlid' => $cache_main['membership']['mlid'] ? $cache_main['membership']['mlid'] : 0
    ),
    'blog' => array(
      'menu_name' => 'menu-udi-main',
      'link_title' => "UDI Blog",
      'link_path' => udi_central_get_node_path('blog', TRUE),
      'enabled' => true,
      'expanded' => false,
      'weight' => 6,
      'mlid' => $cache_main['blog']['mlid'] ? $cache_main['blog']['mlid'] : 0
    )
  );
  
  foreach ($main as $key => $item) {
    menu_link_save($item);
    $cache_main[$key]['mlid'] = $item['mlid']; 
    $cache_main[$key]['plid'] = $item['plid'];
  }
  variable_set('menu_udi_main', $cache_main);
  $ret[] = array(
    'success' => TRUE,
    'query' => 'Top level of Main Navigation menu has been created.'
  );
  
  //
  // Menu items for the Level 2 - About menu
  //
  $cache_sub_about = variable_get('menu_udi_sub_about', array());
  $about = array(
    'board' => array(
      'menu_name' => 'menu-udi-main',
      'link_title' => "Board of Directors",
      'link_path' => udi_central_get_node_path('about/board', TRUE),
      'enabled' => true,
      'expanded' => false,
      'weight' => 0
    ),
    'ethnics' => array(
      'menu_name' => 'menu-udi-main',
      'link_title' => "Code of Ethics",
      'link_path' => udi_central_get_node_path('about/code-of-ethics'),
      'enabled' => true,
      'expanded' => false,
      'weight' => 1
    ),
    'sponsors' => array(
      'menu_name' => 'menu-udi-main',
      'link_title' => "Sponsors",
      'link_path' => udi_central_get_node_path('about/sponsors', TRUE),
      'enabled' => true,
      'expanded' => false,
      'weight' => 2
    ),
    'staff' => array(
      'menu_name' => 'menu-udi-main',
      'link_title' => "Staff Directory",
      'link_path' => udi_central_get_node_path('about/staff', TRUE),
      'enabled' => true,
      'expanded' => false,
      'weight' => 3
    ),
    'contact' => array(
      'menu_name' => 'menu-udi-main',
      'link_title' => "Contact Us",
      'link_path' => udi_central_get_node_path('about/contact', TRUE),
      'enabled' => true,
      'expanded' => false,
      'weight' => 4
    )
  );
  
  foreach ($about as $key => $item) {
    $item['mlid'] = $cache_sub_about[$key]['mlid'] ? $cache_sub_about[$key]['mlid'] : 0;
    $item['plid'] = $cache_main['about']['mlid'] ? $cache_main['about']['mlid'] : 0;
    menu_link_save($item);
    $cache_sub_about[$key]['mlid'] = $item['mlid'];
    $cache_sub_about[$key]['plid'] = $item['plid'];
  }  
  variable_set('menu_udi_sub_about', $cache_sub_about);
  $ret[] = array(
    'success' => TRUE,
    'query' => 'About UDI sub level of Main Navigation menu has been created.'
  );
  
  //
  // Menu items for the Level 2 - Policy menu
  //
  $cache_sub_policy = variable_get('menu_udi_sub_policy', array());
  $policy = array(
    'agenda' => array(
      'menu_name' => 'menu-udi-main',
      'link_title' => "Policy Agenda",
      'link_path' => udi_central_get_node_path('policy/policy-agenda'),
      'enabled' => true,
      'expanded' => false,
      'weight' => 0
    ),
    'publications' => array(
      'menu_name' => 'menu-udi-main',
      'link_title' => "Publications",
      'link_path' => udi_central_get_node_path('policy/publications', TRUE),
      'enabled' => true,
      'expanded' => false,
      'weight' => 1
    ),
    'committees' => array(
      'menu_name' => 'menu-udi-main',
      'link_title' => "Committees",
      'link_path' => udi_central_get_node_path('policy/committees'),
      'enabled' => true,
      'expanded' => false,
      'weight' => 2
    )
  );
  
  foreach ($policy as $key => $item) {
    $item['mlid'] = $cache_sub_policy[$key]['mlid'] ? $cache_sub_policy[$key]['mlid'] : 0;
    $item['plid'] = $cache_main['policy']['mlid'] ? $cache_main['policy']['mlid'] : 0;
    menu_link_save($item);
    $cache_sub_policy[$key]['mlid'] = $item['mlid'];
    $cache_sub_policy[$key]['plid'] = $item['plid'];
  }
  variable_set('menu_udi_sub_policy', $cache_sub_policy);
  $ret[] = array(
    'success' => TRUE,
    'query' => 'Policy sub level of Main Navigation menu has been created.'
  );
  
  //
  // Menu items for the Level 2 - News Central menu
  //
  $cache_sub_news_central = variable_get('menu_udi_sub_news_central', array());
  $news_central = array(
    'news' => array(
      'menu_name' => 'menu-udi-main',
      'link_title' => "News",
      'link_path' => udi_central_get_node_path('news-central/news', TRUE),
      'enabled' => true,
      'expanded' => false,
      'weight' => 0
    ),
    'media_releases' => array(
      'menu_name' => 'menu-udi-main',
      'link_title' => "Media Releases",
      'link_path' => udi_central_get_node_path('news-central/media-releases', TRUE),
      'enabled' => true,
      'expanded' => false,
      'weight' => 1
    )
  );
  
  foreach ($news_central as $key => $item) {
    $item['mlid'] = $cache_sub_news_central[$key]['mlid'] ? $cache_sub_news_central[$key]['mlid'] : 0;
    $item['plid'] = $cache_main['news_central']['mlid'] ? $cache_main['news_central']['mlid'] : 0;
    menu_link_save($item);
    $cache_sub_news_central[$key]['mlid'] = $item['mlid'];
    $cache_sub_news_central[$key]['plid'] = $item['plid'];
  }
  variable_set('menu_udi_sub_news_central', $cache_sub_news_central);
  $ret[] = array(
    'success' => TRUE,
    'query' => 'News Central sub level of Main Navigation menu has been created.'
  );
  
  //
  // Menu items for the Level 2 - Events menu
  //
  $cache_sub_events = variable_get('menu_udi_sub_events', array());
  $events = array(
    'udi' => array(
      'menu_name' => 'menu-udi-main',
      'link_title' => "UDI Events",
      'link_path' => udi_central_get_node_path('events/udi', TRUE),
      'enabled' => true,
      'expanded' => false,
      'weight' => 0  
    ),
    'industry' => array(
      'menu_name' => 'menu-udi-main',
      'link_title' => "Industry Events",
      'link_path' => udi_central_get_node_path('events/industry', TRUE),
      'enabled' => true,
      'expanded' => false,
      'weight' => 1
    )
  );
  
  foreach ($events as $key => $item) {
    $item['mlid'] = $cache_sub_events[$key]['mlid'] ? $cache_sub_events[$key]['mlid'] : 0;
    $item['plid'] = $cache_main['events']['mlid'] ? $cache_main['events']['mlid'] : 0;
    menu_link_save($item);
    $cache_sub_events[$key]['mlid'] = $item['mlid'];
    $cache_sub_events[$key]['plid'] = $item['plid'];
  }
  variable_set('menu_udi_sub_events', $cache_sub_events);
  $ret[] = array(
    'success' => TRUE,
    'query' => 'Events sub level of Main Navigation menu has been created.'
  );
  
  //
  // Menu items for the Level 2 - Membership menu
  //
  $cache_sub_membership = variable_get('menu_udi_sub_membership', array());
  $membership = array(
    'directory' => array(
      'menu_name' => 'menu-udi-main',
      'link_title' => "Directory",
      'link_path' => udi_central_get_node_path('membership/directory', TRUE),
      'enabled' => true,
      'expanded' => false,
      'weight' => 0
    ),
    'join' => array(
      'menu_name' => 'menu-udi-main',
      'link_title' => "Join UDI",
      'link_path' => udi_central_get_node_path('membership/join'),
      'enabled' => true,
      'expanded' => false,
      'weight' => 1
    )
  );
  
  foreach ($membership as $key => $item) {
    $item['mlid'] = $cache_sub_membership[$key]['mlid'] ? $cache_sub_membership[$key]['mlid'] : 0;
    $item['plid'] = $cache_main['membership']['mlid'] ? $cache_main['membership']['mlid'] : 0;
    menu_link_save($item);
    $cache_sub_membership[$key]['mlid'] = $item['mlid'];
    $cache_sub_membership[$key]['plid'] = $item['plid'];
  }
  variable_set('menu_udi_sub_membership', $cache_sub_membership);
  $ret[] = array(
    'success' => TRUE,
    'query' => 'Membership sub level of Main Navigation menu has been created.'
  );
  
  return $ret;
}
