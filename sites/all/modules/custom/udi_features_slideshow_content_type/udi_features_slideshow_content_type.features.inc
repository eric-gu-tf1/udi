<?php

/**
 * Implementation of hook_node_info().
 */
function udi_features_slideshow_content_type_node_info() {
  $items = array(
    'slideshow_home' => array(
      'name' => t('Slideshow Homepage Image'),
      'module' => 'features',
      'description' => t('Individual image for the slideshow on the homepage.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Caption'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'slideshow_section' => array(
      'name' => t('Slideshow Section Image'),
      'module' => 'features',
      'description' => t('Individual image for the slideshow appearing within a section.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Caption'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
