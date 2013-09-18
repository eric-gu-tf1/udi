<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function udi_features_content_type_imagecache_default_presets() {
  $items = array(
    'news_image_thumbnail' => array(
      'presetname' => 'news_image_thumbnail',
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
function udi_features_content_type_node_info() {
  $items = array(
    'career_application' => array(
      'name' => t('Career Application'),
      'module' => 'features',
      'description' => t('Apply for a position.'),
      'has_title' => '1',
      'title_label' => t('Applicant Name'),
      'has_body' => '1',
      'body_label' => t('Cover Letter'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'career_posting' => array(
      'name' => t('Career Posting'),
      'module' => 'features',
      'description' => t('A career posting for the careers section.'),
      'has_title' => '1',
      'title_label' => t('Position'),
      'has_body' => '1',
      'body_label' => t('Confidential Comment Box'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'chapter' => array(
      'name' => t('Chapter'),
      'module' => 'features',
      'description' => t('A UDI Chapter'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Address'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'committee' => array(
      'name' => t('Committee'),
      'module' => 'features',
      'description' => t('Create a new committee.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'company' => array(
      'name' => t('Company'),
      'module' => 'features',
      'description' => t('Represent an UDI Member that would appear on the Members Directory page. If the Member is a marked as sponsor, it will be on the Sponsors page. If the Member has been promoted to patron sponsor, it will appear in the Patron Sponsor on the homepage.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Additional Information'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'gallery' => array(
      'name' => t('Photo Gallery'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'image' => array(
      'name' => t('Image'),
      'module' => 'features',
      'description' => t('Add image content.'),
      'has_title' => '1',
      'title_label' => t('Image Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'module' => 'features',
      'description' => t('A <em>page</em> is a simple method for creating and displaying information that rarely changes, such as an "About us" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site\'s initial home page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'presentation' => array(
      'name' => t('Presentation'),
      'module' => 'features',
      'description' => t('Presentation files.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Text'),
      'min_word_count' => '0',
      'help' => t('Please supply the URL for the embedded presentation below.'),
    ),
    'properties' => array(
      'name' => t('Business Opportunity'),
      'module' => 'features',
      'description' => t('Represents a Business Opportunity (formerly Properties) that is displayed on the Business Opportunities page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'simplenews' => array(
      'name' => t('Newsletter issue'),
      'module' => 'features',
      'description' => t('A newsletter issue to be sent to subscribed email addresses.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'module' => 'features',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
