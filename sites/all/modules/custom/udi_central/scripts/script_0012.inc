<?php

/**
 * Build 2nd Level Sub-Navigation Menu
 *
 */
function udi_central_update_6012() {
  $ret = array();
  module_load_include('inc', 'udi_central');
  
  //
  // Create About Sub menu
  //
  if (!udi_central_menu_is_exist('udi-sub-about')) {
	udi_central_install_menu('udi-sub-about', 'UDI About Sub-Nav', 'UDI About Sub-Navigation Menu');
  }
  
  $about = array(
	'board' => array(
      'link_title' => "Board of Directors",
      'link_path' => udi_central_get_node_path('about/board', TRUE),
      'enabled' => true,
      'expanded' => false,
      'weight' => 0,
    ),
    'ethnics' => array(
      'link_title' => "Code of Ethics",
      'link_path' => udi_central_get_node_path('about/code-of-ethics'),
      'enabled' => true,
      'expanded' => false,
      'weight' => 1,
    ),
    'sponsors' => array(
      'link_title' => "Sponsors",
      'link_path' => udi_central_get_node_path('about/sponsors', TRUE),
      'enabled' => true,
      'expanded' => false,
      'weight' => 2,
    ),
    'staff' => array(
      'link_title' => "Staff Directory",
      'link_path' => udi_central_get_node_path('about/staff', TRUE),
      'enabled' => true,
      'expanded' => false,
      'weight' => 3,
    ),
    'contact' => array(
      'link_title' => "Contact Us",
      'link_path' => udi_central_get_node_path('about/contact', TRUE),
      'enabled' => true,
      'expanded' => false,
      'weight' => 4,
    )
  );
  udi_central_install_menu_parent_item('udi-sub-about', $about, 'udi_sub_about_block');
  $ret[] = array(
    'success' => TRUE,
    'query' => 'About Section Sub-Navigation menu has been created.'
  );
  
  //
  // Create Policy Sub Menu
  //
  if (!udi_central_menu_is_exist('udi-sub-policy')) {
	udi_central_install_menu('udi-sub-policy', 'UDI Policy Sub-Nav', 'UDI Policy Sub-Navigation Menu');
  }

  $policy = array(
	'agenda' => array(
      'link_title' => "Policy Agenda",
      'link_path' => udi_central_get_node_path('policy/policy-agenda'),
      'enabled' => true,
      'expanded' => false,
      'weight' => 0
    ),
    'publications' => array(
      'link_title' => "Publications",
      'link_path' => udi_central_get_node_path('policy/publications', TRUE),
      'enabled' => true,
      'expanded' => false,
      'weight' => 1
    ),
    'committees' => array(
      'link_title' => "Committees",
      'link_path' => udi_central_get_node_path('policy/committees'),
      'enabled' => true,
      'expanded' => false,
      'weight' => 2
    )
  );
  udi_central_install_menu_parent_item('udi-sub-policy', $policy, 'udi_sub_policy_block');
  $ret[] = array(
    'success' => TRUE,
    'query' => 'Policy Section Sub-Navigation menu has been created.'
  );
  
  //
  // Create News Central Sub Menu
  //
  if (!udi_central_menu_is_exist('udi-sub-news')) {
	udi_central_install_menu('udi-sub-news', 'UDI News Central Sub-Nav', 'UDI News Central Sub-Navigation Menu');
  }

  $news = array(
	'news' => array(
      'link_title' => "News",
      'link_path' => udi_central_get_node_path('news-central/news', TRUE),
      'enabled' => true,
      'expanded' => false,
      'weight' => 0
    ),
    'media' => array(
      'link_title' => "Media Releases",
      'link_path' => udi_central_get_node_path('news-central/media-releases', TRUE),
      'enabled' => true,
      'expanded' => false,
      'weight' => 1
    )
  );
  udi_central_install_menu_parent_item('udi-sub-news', $news, 'udi_sub_news_block');
  $ret[] = array(
    'success' => TRUE,
    'query' => 'News Central Section Sub-Navigation menu has been created.'
  );
  
  //
  // Create Events Sub Menu
  //
  if (!udi_central_menu_is_exist('udi-sub-events')) {
	udi_central_install_menu('udi-sub-events', 'UDI Events Sub-Nav', 'UDI Events Sub-Navigation Menu');
  }

  $events = array(
	'udi' => array(
      'link_title' => "UDI Events",
      'link_path' => udi_central_get_node_path('events/udi', TRUE),
      'enabled' => true,
      'expanded' => false,
      'weight' => 0
    ),
    'industry' => array(
      'link_title' => "Industry Events",
      'link_path' => udi_central_get_node_path('events/industry', TRUE),
      'enabled' => true,
      'expanded' => false,
      'weight' => 1
    )
  );
  udi_central_install_menu_parent_item('udi-sub-events', $events, 'udi_sub_events_block');
  $ret[] = array(
    'success' => TRUE,
    'query' => 'Events Section Sub-Navigation menu has been created.'
  );
  
  //
  // Create Membership Sub Menu
  //
  if (!udi_central_menu_is_exist('udi-sub-membership')) {
	udi_central_install_menu('udi-sub-membership', 'UDI Membership Sub-Nav', 'UDI Membership Sub-Navigation Menu');
  }

  $member = array(
	'directory' => array(
      'link_title' => "Directory",
      'link_path' => udi_central_get_node_path('membership/directory', TRUE),
      'enabled' => true,
      'expanded' => false,
      'weight' => 0
    ),
    'industry' => array(
      'link_title' => "Join UDI",
      'link_path' => udi_central_get_node_path('membership/join'),
      'enabled' => true,
      'expanded' => false,
      'weight' => 1
    )
  );
  udi_central_install_menu_parent_item('udi-sub-membership', $member, 'udi_sub_membership_block');
  $ret[] = array(
    'success' => TRUE,
    'query' => 'Membership Section Sub-Navigation menu has been created.'
  );
  
  return $ret;
}
