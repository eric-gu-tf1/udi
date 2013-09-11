<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function udi_features_news_central_imagecache_default_presets() {
  $items = array(
    'news_image' => array(
      'presetname' => 'news_image',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '157px',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function udi_features_news_central_node_info() {
  $items = array(
    'news_item' => array(
      'name' => t('News Central (News)'),
      'module' => 'features',
      'description' => t('Represents a news article that would appear on the News Central News page. Generic news articles would be filed as News Central (News). Any UDI specific news article would use News Central (Media Release) instead.'),
      'has_title' => '1',
      'title_label' => t('Headline'),
      'has_body' => '1',
      'body_label' => t('Article'),
      'min_word_count' => '10',
      'help' => '',
    ),
    'press_release' => array(
      'name' => t('News Central (Media Release)'),
      'module' => 'features',
      'description' => t('Represents an UDI specific news article that would appear on the News Central Media Releases page. Any generic news articles would be filed as News Central (News) instead.'),
      'has_title' => '1',
      'title_label' => t('Headline'),
      'has_body' => '1',
      'body_label' => t('Article'),
      'min_word_count' => '10',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function udi_features_news_central_views_api() {
  return array(
    'api' => '2',
  );
}
