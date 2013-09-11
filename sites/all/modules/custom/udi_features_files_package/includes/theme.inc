<?php

function udi_features_files_package_preprocess_views_view_unformatted__udi_dashboard__page($vars) {
  $strtime = strtotime($vars['title']);
  $calicon = new stdClass();
  $calicon->month = date('M', $strtime);
  $calicon->year = date('Y', $strtime);
  $vars['calicon'] = $calicon;
  $vars['title'] = date('M - Y', $strtime);
}
