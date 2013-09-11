<?php

/**
 * Pathauto configuration
 *
 */
function udi_central_update_6007() {
  $ret = array();
  
  // Blog
  variable_set('pathauto_blog_pattern', 'blog/[user-raw]');
  variable_set('pathauto_node_blog_pattern', 'blog/[blog-title]');
  
  // Careers
  variable_set('pathauto_node_career_posting_pattern', 'careers/[title-raw]');  
  variable_set('pathauto_node_career_application_pattern', 'careers/applications/[title-raw]');
  
  // Events
  variable_set('pathauto_node_event_pattern', 'events/udi/[title-raw]');
  variable_set('pathauto_node_event_okanagan_pattern', 'events/udi/[title-raw]');
  variable_set('pathauto_node_event_vancouver_pattern', 'events/udi/[title-raw]');  
  variable_set('pathauto_node_event_victoria_pattern', 'events/udi/[title-raw]');
  variable_set('pathauto_node_industry_event_pattern', 'events/industry/[title-raw]');
  
  // Publications
  variable_set('pathauto_node_annual_report_pattern', 'policy/publications/annual-reports/[title-raw]');
  variable_set('pathauto_node_forecast_pattern', 'policy/publications/forecasts/[title-raw]');
  variable_set('pathauto_node_municipal_document_pattern', 'policy/publications/municipals/[title-raw]');
  variable_set('pathauto_node_policy_document_pattern', 'policy/publications/policies/[title-raw]');
  variable_set('pathauto_node_presentation_pattern', 'policy/publications/presentations/[title-raw]');
  variable_set('pathauto_node_submissions_pattern', 'policy/publications/submissions/[title-raw]');
  variable_set('pathauto_node_udi_letters_pattern', 'policy/publications/udi-letters/[title-raw]');
  
  // News
  variable_set('pathauto_node_news_item_pattern', 'news-central/news/[title-raw]');
  variable_set('pathauto_node_press_release_pattern', 'news-central/media-releases/[title-raw]');
  
  // Other
  variable_set('pathauto_node_pattern', '');
  variable_set('pathauto_node_page_pattern', '');
  variable_set('pathauto_node_poll_pattern', '');
  variable_set('pathauto_node_webform_pattern', '');
  variable_set('pathauto_node_properties_pattern', 'opportunities/[title-raw]');
  variable_set('pathauto_node_company_pattern', '');
  variable_set('pathauto_node_committee_pattern', 'policy/committees/[title-raw]');
  variable_set('pathauto_node_chapter_pattern', '');
  variable_set('pathauto_node_file_package_pattern', 'dashboard/[title-raw]');

  $ret[] = array('success' => TRUE, 'query' => 'Pathauto configuration completed.');
  
  return $ret;
}
