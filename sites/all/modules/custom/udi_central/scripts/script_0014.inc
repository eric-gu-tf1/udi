<?php

/**
 * Setting site configuration variables
 *
 */
function udi_central_update_6014() {
  // Update theme
  $sql = "UPDATE {system} SET status = %d WHERE type = '%s' AND name = '%s'";
  db_query($sql, 0, 'theme', 'udi');
  db_query($sql, 0, 'theme', 'zen');
  db_query($sql, 1, 'theme', 'udi_biz');
  variable_set('theme_default', 'udi_biz');

  // Admin Menu
  variable_set('admin_menu_tweak_modules', 1);
  variable_set('admin_menu_margin_top', 1);

  // Advanced Blog
  variable_set('advanced_blog_avatar', 1);
  variable_set('advanced_blog_avatar_height', "20");
  variable_set('advanced_blog_avatar_width', "20");
  variable_set('advanced_blog_case', "0");
  variable_set('advanced_blog_maxdisp', "10");
  variable_set('advanced_blog_on_blog_only', 0);
  variable_set('advanced_blog_order', "0");
  variable_set('advanced_blog_shownum', 1);
  
  // Custom Breadcrumb
  variable_set('custom_breadcrumbs_adjust_module_weights', 0);
  variable_set('custom_breadcrumbs_append_bid_class', 0);
  variable_set('custom_breadcrumbs_even_odd_class', 0);
  variable_set('custom_breadcrumbs_exclude_list', "admin/user/user,user,cart, cart/*");
  variable_set('custom_breadcrumbs_force_active_trail', 0);
  variable_set('custom_breadcrumbs_home_id', 0);
  variable_set('custom_breadcrumbs_menu_list', array('menu-udi-main' => 'menu-udi-main'));
  variable_set('custom_breadcrumbs_none_span', 0);
  variable_set('custom_breadcrumbs_parts_class', 0);
  variable_set('custom_breadcrumbs_paths_allow_wildcards', 1);
  variable_set('custom_breadcrumbs_set_global_home_breadcrumb', 1);
  variable_set('custom_breadcrumbs_set_menu_breadcrumb', 1);
  variable_set('custom_breadcrumbs_type_class', 0);
  variable_set('custom_breadcrumbs_use_exclude_list', 1);
  variable_set('custom_breadcrumbs_use_php_in_titles', 0);
  variable_set('custom_breadcrumb_home', "Home");
  
  // Date API
  variable_set('date_first_day', "0");
  variable_set('date_popup_css_file', "sites/all/modules/contrib/date/date_popup/themes/datepicker.css");
  variable_set('date_popup_timepicker', "default");
  
  // Facebook Social
  $node = array('blog' => 'blog', 'industry_event' => 'industry_event', 'event' => 'event', 'annual_report' => 0, 'properties' => 0, 'career_application' => 0, 'career_posting' => 0, 'chapter' => 0, 'committee' => 0, 'company' => 0, 'event_okanagan' => 0, 'event_vancouver' => 0, 'event_victoria' => 0, 'file_package' => 0, 'forecast' => 0, 'image' => 0, 'municipal_document' => 0, 'media_release' => 0, 'news' => 0, 'simplenews' => 0, 'page' => 0, 'panel' => 0, 'policy_document' => 0, 'poll' => 0, 'presentation' => 0, 'product' => 0, 'slideshow_home' => 0, 'slideshow_section' => 0, 'submissions' => 0, 'event_price_corporate' => 0, 'event_price_member' => 0, 'event_price_non_member' => 0, 'udi_letters' => 0, 'webform' => 0);
  variable_set('fb_social_like_color', "light");
  variable_set('fb_social_like_display_teasers', 1);
  variable_set('fb_social_like_font', "verdana");
  variable_set('fb_social_like_layout_style', "button_count");
  variable_set('fb_social_like_location', "0");
  variable_set('fb_social_like_node_types', $node);
  variable_set('fb_social_like_opengraph_tags', 1);
  variable_set('fb_social_like_send_button', 0);
  variable_set('fb_social_like_show_faces', 0);
  variable_set('fb_social_like_verb', "like");
  variable_set('fb_social_like_width', "80");
  
  // Input Filters
  variable_set('filter_default_format', "1");
  
  // Google +1
  $node = array('blog' => 'blog', 'industry_event' => 'industry_event', 'event' => 'event', 'annual_report' => 0, 'properties' => 0, 'career_application' => 0, 'career_posting' => 0, 'chapter' => 0, 'committee' => 0, 'company' => 0, 'event_okanagan' => 0, 'event_vancouver' => 0, 'event_victoria' => 0, 'file_package' => 0, 'forecast' => 0, 'image' => 0, 'municipal_document' => 0, 'media_release' => 0, 'news' => 0, 'simplenews' => 0, 'page' => 0, 'panel' => 0, 'policy_document' => 0, 'poll' => 0, 'presentation' => 0, 'product' => 0, 'slideshow_home' => 0, 'slideshow_section' => 0, 'submissions' => 0, 'event_price_corporate' => 0, 'event_price_member' => 0, 'event_price_non_member' => 0, 'udi_letters' => 0, 'webform' => 0);
  variable_set('google_plusone_advanced_settings', array('lang' => '', 'scope' => 'page_bottom_docwrite', 'parsetags' => 'onload'));
  variable_set('google_plusone_button_settings', array('count' => '0', 'size' => 'medium', 'css' => 'margin: 0 1em 1em 1em;float:right', 'syntax' => 'HTML5'));
  variable_set('google_plusone_node_location', array('link' => 'link', 'full' => 0, 'teaser' => 0));
  variable_set('google_plusone_node_types', $node);
  variable_set('google_plusone_weight', "-10");
  
  // Nice Menu
  variable_set('nice_menus_menu_1', "menu-udi-main:0");
  variable_set('nice_menus_name_1', "UDI Main Navigation");
  variable_set('nice_menus_type_1', "down");
  variable_set('nice_menus_number', "20");
  
  // Tweet Button
  $node = array('blog' => 'blog', 'industry_event' => 'industry_event', 'event' => 'event', 'annual_report' => 0, 'properties' => 0, 'career_application' => 0, 'career_posting' => 0, 'chapter' => 0, 'committee' => 0, 'company' => 0, 'event_okanagan' => 0, 'event_vancouver' => 0, 'event_victoria' => 0, 'file_package' => 0, 'forecast' => 0, 'image' => 0, 'municipal_document' => 0, 'media_release' => 0, 'news' => 0, 'simplenews' => 0, 'page' => 0, 'panel' => 0, 'policy_document' => 0, 'poll' => 0, 'presentation' => 0, 'product' => 0, 'slideshow_home' => 0, 'slideshow_section' => 0, 'submissions' => 0, 'event_price_corporate' => 0, 'event_price_member' => 0, 'event_price_non_member' => 0, 'udi_letters' => 0, 'webform' => 0);
  variable_set('tweetbutton_account', "");
  variable_set('tweetbutton_button', "horizontal");
  variable_set('tweetbutton_language', "en");
  variable_set('tweetbutton_node_location', array('full' => 'full', 'teaser' => 'teaser', 'links' => 'links'));
  variable_set('tweetbutton_node_types', $node);
  variable_set('tweetbutton_node_weight', "-5");
  variable_set('tweetbutton_rel_account_description', "");
  variable_set('tweetbutton_rel_account_name', "");
  variable_set('tweetbutton_tweet_text', "");
  
  // User
  variable_set('user_pictures', "1");
  variable_set('user_register', 0);
  variable_set('user_signatures', "0");
  
  // Global Site Configuration
  variable_set('site_404', "udi-home");
  variable_set('site_403', "");
  variable_set('site_footer', "");
  variable_set('site_frontpage', "udi-home");
  variable_set('site_name', "URBAN DEVELOPMENT INSTITUTE");
  
  return array(array(
    'success' => TRUE,
    'query' => 'Site configuration completed.',
  ));
}