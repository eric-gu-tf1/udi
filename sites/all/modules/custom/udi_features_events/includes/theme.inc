<?php

function udi_features_events_preprocess_views_view_unformatted__udi_events__page(&$vars) {
  $strtime = strtotime($vars['title']);  
  $vars['calicon'] = udi_features_events_preprocess_calicon($strtime);
  $vars['title'] = date('F j, Y', $strtime);
}

function udi_features_events_preprocess_views_view_unformatted__udi_events_udi__page(&$vars) {
  $strtime = strtotime($vars['title']);  
  $vars['calicon'] = udi_features_events_preprocess_calicon($strtime);
  $vars['title'] = date('F j, Y', $strtime);
}

function udi_features_events_preprocess_views_view_unformatted__udi_events_industry__page(&$vars) {
  $strtime = strtotime($vars['title']);  
  $vars['calicon'] = udi_features_events_preprocess_calicon($strtime);
  $vars['title'] = date('F j, Y', $strtime);
}

function udi_features_events_preprocess_views_view_field__udi_events__page__field_time_value(&$vars) {
  $date = date_make_date($vars['row']->node_data_field_time_field_time_value, date_get_timezone('date'));
  $datetime_from = $vars['row']->node_data_field_time_field_time_value;
  $timezone = isset($date) ? $date->getOffset() : 0;
  $strtime = (int)strtotime($datetime_from) + (int)$timezone;
  
  $vars['output'] = date('Y-m-d', $strtime);
}

function udi_features_events_preprocess_views_view_field__udi_events_udi__page__field_time_value(&$vars) {
  $date = date_make_date($vars['row']->node_data_field_time_field_time_value, date_get_timezone('date'));
  $datetime_from = $vars['row']->node_data_field_time_field_time_value;
  $timezone = isset($date) ? $date->getOffset() : 0;
  $strtime = (int)strtotime($datetime_from) + (int)$timezone;
  
  $vars['output'] = date('Y-m-d', $strtime);
}

function udi_features_events_preprocess_views_view_field__udi_events_industry__page__field_time_value(&$vars) {
  $date = date_make_date($vars['row']->node_data_field_time_field_time_value, date_get_timezone('date'));
  $datetime_from = $vars['row']->node_data_field_time_field_time_value;
  $timezone = isset($date) ? $date->getOffset() : 0;
  $strtime = (int)strtotime($datetime_from) + (int)$timezone;
  
  $vars['output'] = date('Y-m-d', $strtime);
}

function udi_features_events_preprocess_calicon($time) {
  $calicon = new stdClass();
  $calicon->day = date('j', $time);
  $calicon->month = date('M', $time);
  return $calicon;
}