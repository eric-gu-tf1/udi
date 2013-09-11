<?php

/**
 * Implementation of hook_node_info().
 */
function udi_features_publications_node_info() {
  $items = array(
    'annual_report' => array(
      'name' => t('Annual Report'),
      'module' => 'features',
      'description' => t('Represents an Annual Report content-type to be displayed on UDI Publications.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Abstract'),
      'min_word_count' => '0',
      'help' => t('Provide an abstract on the publication.'),
    ),
    'forecast' => array(
      'name' => t('Industry Forecast'),
      'module' => 'features',
      'description' => t('Represents an Industry Forecast content-type to be displayed on UDI Publications.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Abstract'),
      'min_word_count' => '0',
      'help' => t('Provide an abstract for this publication.'),
    ),
    'municipal_document' => array(
      'name' => t('Municipal Document'),
      'module' => 'features',
      'description' => t('Represents a Municipal Document content-type to be displayed on UDI Publications.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Abstract'),
      'min_word_count' => '0',
      'help' => t('Provide an abstract for this publication.'),
    ),
    'policy_document' => array(
      'name' => t('Policy Document'),
      'module' => 'features',
      'description' => t('Represents a Policy Document content-type to be displayed on UDI Publications.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Abstract'),
      'min_word_count' => '0',
      'help' => t('Provide an abstract for this publication.'),
    ),
    'submissions' => array(
      'name' => t('Submissions'),
      'module' => 'features',
      'description' => t('Represents an UDI Government Submission content-type to be displayed UDI Publications.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Abstract'),
      'min_word_count' => '0',
      'help' => t('Provide an abstract for this publication.'),
    ),
    'udi_letters' => array(
      'name' => t('UDI Letters'),
      'module' => 'features',
      'description' => t('Represents an UDI Letter (i.e. letter to municipalities) content-type to be displayed on UDI Publications.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Abstract'),
      'min_word_count' => '0',
      'help' => t('Provide an abstract for this publication.'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function udi_features_publications_views_api() {
  return array(
    'api' => '2',
  );
}
