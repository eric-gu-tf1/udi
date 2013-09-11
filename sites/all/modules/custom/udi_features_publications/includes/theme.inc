<?php

function udi_features_publications_preprocess_views_view_field__publications__page__field_publication_date_value(&$vars) {
  // Format date
  $datetime = $vars['row']->node_data_field_publication_date_field_publication_date_value;
  $date = date('F j, Y', strtotime($datetime));
  
  // Get type name
  $type = db_result(db_query("SELECT n.name FROM {node_type} n WHERE n.type = '%s'", $vars['row']->node_type));
  
  $vars['output'] = sprintf("%s - %s", $date, $type);
}
