<?php

/**
 * Build 2nd Level Sub-Navigation Menu
 *
 */
function udi_central_update_6013() {
  $ret = array();
  module_load_include('inc', 'udi_central');
  
  //
  // Create About Sub menu
  //
  if (!udi_central_menu_is_exist('udi-footer')) {
	udi_central_install_menu('udi-footer', 'UDI Footer Navigation', 'UDI Footer Navigation Menu');
  }
  
  $footer = array(
	'member' => array(
      'link_title' => "Membership",
      'link_path' => udi_central_get_node_path('membership'),
      'enabled' => true,
      'expanded' => false,
      'weight' => 0,
    ),
    'privacy' => array(
      'link_title' => "Privacy Policy",
      'link_path' => udi_central_get_node_path('privacy-policy'),
      'enabled' => true,
      'expanded' => false,
      'weight' => 1,
    ),
    'business' => array(
      'link_title' => "Business Opportunities",
      'link_path' => udi_central_get_node_path('opportunities', TRUE),
      'enabled' => true,
      'expanded' => false,
      'weight' => 2,
    ),
    'contact' => array(
      'link_title' => "Contact Us",
      'link_path' => udi_central_get_node_path('about/contact', TRUE),
      'enabled' => true,
      'expanded' => false,
      'weight' => 3,
    )
  );
  udi_central_install_menu_parent_item('udi-footer', $footer, 'udi_footer_block');
  $ret[] = array(
    'success' => TRUE,
    'query' => 'Footer Navigation menu has been created.'
  );
  
  return $ret;
}
