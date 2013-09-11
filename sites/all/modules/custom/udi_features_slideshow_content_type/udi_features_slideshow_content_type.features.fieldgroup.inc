<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function udi_features_slideshow_content_type_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_slideshow_learn
  $groups['slideshow_home-group_slideshow_learn'] = array(
    'group_type' => 'standard',
    'type_name' => 'slideshow_home',
    'group_name' => 'group_slideshow_learn',
    'label' => 'Read More',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => 'Link the Learn More button to an internal or external page. Use <em>Learn more (Internal)</em> to find internal UDI pages only. For external pages, use External. <strong>Do Not</strong> use both. Internal will take precedence over External. If you cannot find a page using Internal, please use External instead.',
      ),
      'display' => array(
        'description' => '',
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
    'weight' => '0',
    'fields' => array(
      '0' => 'field_slideshow_learn_noderef',
      '1' => 'field_slideshow_learn_link',
    ),
  );

  // Exported group: group_slideshow_page
  $groups['slideshow_section-group_slideshow_page'] = array(
    'group_type' => 'standard',
    'type_name' => 'slideshow_section',
    'group_name' => 'group_slideshow_page',
    'label' => 'Pages',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => 'Associate the image to a page. Assign the path of the page where the image will be displayed on.',
      ),
      'display' => array(
        'description' => '',
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
        'email_plain' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'email_html' => array(
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
    'weight' => '-4',
    'fields' => array(
      '0' => 'field_slideshow_sect_page_url',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages');
  t('Read More');

  return $groups;
}
