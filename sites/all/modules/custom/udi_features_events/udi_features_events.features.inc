<?php

/**
 * Implementation of hook_node_info().
 */
function udi_features_events_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event (UDI)'),
      'module' => 'features',
      'description' => t('A UDI event such as a breakfast, luncheon, etc.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'industry_event' => array(
      'name' => t('Event (Industry)'),
      'module' => 'features',
      'description' => t('Represent an event, external to UDI, especially designed for the Industry that would appear on the Industry Events page. This type of event does not have ticket purchasing option available. For all UDI specific events use Event (UDI) instead.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => t('Provide a description of the event.'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_uc_product_default_classes().
 */
function udi_features_events_uc_product_default_classes() {
  $items = array(
    'event_price_corporate' => array(
      'name' => t('Ticket Price (Corporate)'),
      'module' => 'uc_product',
      'description' => t('Represents an event ticket price (corporate) to be associated with an event. Only Event (UDI) will have ticket purchasing option.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'event_price_member' => array(
      'name' => t('Ticket Price (Member)'),
      'module' => 'uc_product',
      'description' => t('Represents an event ticket price (member) to be associated with an event. Only Event (UDI) will have ticket purchasing option.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'event_price_non_member' => array(
      'name' => t('Ticket Price (Non-Member)'),
      'module' => 'uc_product',
      'description' => t('Represents an event ticket price (non-member) to be associated with an event. Only Event (UDI) will have ticket purchasing option.'),
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
function udi_features_events_views_api() {
  return array(
    'api' => '2',
  );
}
