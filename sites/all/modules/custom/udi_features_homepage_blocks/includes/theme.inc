<?php

function udi_features_homepage_blocks_preprocess_views_view_field__udi_homepage_blocks__block_3__field_time_value(&$vars) {
  $date = date_make_date($vars['row']->node_data_field_time_field_time_value, date_get_timezone('date'));
  $datetime_from = $vars['row']->node_data_field_time_field_time_value;
  $timezone = isset($date) ? $date->getOffset() : 0;
  $strtime = (int)strtotime($datetime_from) + (int)$timezone;

  $calicon = new stdClass();
  $calicon->day = format_date($strtime, 'custom', 'j');
  $calicon->month = format_date($strtime, 'custom', 'M');
  $vars['output'] = $calicon;
}

function udi_features_homepage_blocks_preprocess_views_view_unformatted__udi_homepage_blocks(&$vars) {
  // Add 'see more' links to Publication and News block only
  if ($vars['view']->current_display == 'block_1') {
    if (!empty($vars['view']->display[$vars['view']->current_display]->display_options['use_more'])) {
      $vars['morelink'] = l($vars['view']->display[$vars['view']->current_display]->display_options['use_more_text'], 'policy/publications');
    }
  }

  // Add 'see more' links to News and News block only
  if ($vars['view']->current_display == 'block_2') {
    if (!empty($vars['view']->display[$vars['view']->current_display]->display_options['use_more'])) {
      $vars['morelink'] = l($vars['view']->display[$vars['view']->current_display]->display_options['use_more_text'], 'news-central/news');
    }
  }
}
