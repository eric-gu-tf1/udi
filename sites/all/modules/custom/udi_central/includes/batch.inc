<?php
/**
 * @file
 *  Handles all batch funtionality
 */

/**
 * Executes the batch processing for cck importing
 */
function udi_central_batch_execute_cck_import_batch($ccks = array()) {
  $operations = array();
  foreach ($ccks as $internal_name => $cck) {
    $operations[] = array('udi_central_batch_cck_import_process_operation', array($internal_name, $cck));
  }
  $batch = array(
    'operations'       => $operations,
    'finished'         => 'udi_central_batch_execute_cck_import_finished',
    'title'            => t('Processing CCK content types'),
    'init_message'     => t('CCK import is starting.'),
    'progress_message' => t('Processed @current out of @total.'),
    'error_message'    => t('CCK import has encountered an error.'),
    'file'             => drupal_get_path('module', 'udi_central') . '/includes/batch.inc',
  );
  batch_set($batch);
  batch_process('admin/content/types');
}

/**
 * Finished function for batch completion
 */
function udi_central_batch_execute_cck_import_finished($success, $results, $operations) {
  if ($success) {
    foreach ($results as $result) {
      drupal_set_message($result);
    }
  }
  else {
    // An error occurred.
    // $operations contains the operations that remained unprocessed.
    $error_operation = reset($operations);
    $message = t('An error occurred while processing %error_operation with arguments: @arguments', array('%error_operation' => $error_operation[0], '@arguments' => print_r($error_operation[1], TRUE)));
    drupal_set_message($message);
  }
}
/**
 * The processing of CCK content types
 */
function udi_central_batch_cck_import_process_operation($internal_name, $cck_info, &$context) {
	module_load_include('inc', 'install_profile_api', 'contrib/content_copy');
	module_load_include('inc', 'udi_central', 'includes/content');
	$node_types = $node_types = node_get_types('names');
	if (!isset($context['sandbox']['progress'])) {
    $context['sandbox']['progress'] = 0;
    $context['sandbox']['current_node'] = 0;
    $context['sandbox']['max'] = 1;
  }
  if (array_key_exists($internal_name, $node_types)) {
    udi_central_content_field_update($internal_name, $cck_info['filepath']);
    $context['results'][] = t('Updated %type node type', array('%type' => $internal_name));
  }
  else {
    install_content_copy_import_from_file($cck_info['filepath']);
    $context['results'][] = t('Created %type node type', array('%type' => $internal_name));
  }
  /**
   * We do the remove last since some users like to keep the original export
   * of the CCK file which is fine, but it's recommended that you remove the
   * fields from the export so that the removed fields are added and removed.
   */
  if (!empty($cck_info['remove'])) {
    foreach ($cck_info['remove'] as $field_name) {
      udi_central_content_field_remove($internal_name, $field_name);
      $context['results'][] = t('Removed %field from %type', array('%field' => $field_name, '%type' => $internal_name));
    }
  }
  // Update our progress information.
  $context['sandbox']['progress']++;
  $context['sandbox']['current_node'] = $internal_name;
  $context['message'] = t('Now processing %node', array('%node' => $internal_name));
  // Inform the batch engine that we are not finished,
  // and provide an estimation of the completion level we reached.
  if ($context['sandbox']['progress'] != $context['sandbox']['max']) {
    $context['finished'] = $context['sandbox']['progress'] / $context['sandbox']['max'];
  }
}
