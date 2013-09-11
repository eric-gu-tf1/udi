<?php

/**
 * Implementation of hook_node_info().
 */
function udi_features_files_package_node_info() {
  $items = array(
    'file_package' => array(
      'name' => t('File Package'),
      'module' => 'features',
      'description' => t('Represents a file package that is displayed on the Board of Directors Dashboard and Staff Dashboard.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function udi_features_files_package_views_api() {
  return array(
    'api' => '2',
  );
}
