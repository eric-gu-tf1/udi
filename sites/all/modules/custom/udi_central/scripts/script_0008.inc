<?php

/**
 * Install contribute modules
 *
 */
function udi_central_update_6008() {
  $ret = array();
  
  $modules = array(
    'autocomplete_widgets',
    'imagecache_ui',
    'views_ui',
    'custom_breadcrumbs',
    'custom_breadcrumbs_views',
    'custom_breadcrumbs_panels',
    'custom_breadcrumbs_paths',
    'udi_imagecache_presets',
    'udi_slideshow',
    'google_plusone',
    'tweetbutton',
    'emfield',
    'emvideo',
    'media_youtube',
    'media_vimeo',
    'lightbox2',
    'install_profile_api',
    'jquery_ui_dialog',
    'drupalwiki_imageselect_element',
    'wysiwyg_imageupload',
    // Features
    'features',    
    'udi_features_content_type',
    'udi_features_views_pages',
    'udi_features_files_package',
    'udi_features_events',
    'udi_features_homepage_blocks',
    'udi_features_news_central',
    'udi_features_publications',    
    'udi_features_slideshow_content_type',
    'udi_features_roles_and_permission',
    'udi_events',
    'udi_events_order',
  );
  
  udi_central_install_modules($ret, $modules);
  
  return $ret;
}
