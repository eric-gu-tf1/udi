<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function udi_features_events_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_ticket_price
  $groups['event-group_ticket_price'] = array(
    'group_type' => 'standard',
    'type_name' => 'event',
    'group_name' => 'group_ticket_price',
    'label' => 'Ticket Price',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => 'Ticket pricing options for the event.',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '2',
    'fields' => array(),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Ticket Price');

  return $groups;
}
