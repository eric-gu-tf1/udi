<?php
/**
 * Exports location settings for a given content type
 */ 
function udi_central_location_export_form(&$form_state) {
  include_once('./'. drupal_get_path('module', 'content') .'/includes/content.admin.inc');
  include_once('./'. drupal_get_path('module', 'node') .'/content_types.inc');

  $form = array();
  //drupal_set_message($form_state['storage']['step']);
  $step = isset($form_state['storage']['step']) ? $form_state['storage']['step'] + 1 : 1;
  $form['#step'] = $step;

  switch($step) {
    case 1:
      $options  = content_copy_types();
      $form['content_types'] = array(
          '#type' => 'radios',
          '#title' => t('Content Type'),
          '#description' => t('Select a content type you want to export Location settings for.'),
          '#options' => $options
      );

      $form['submit'] = array(
          '#type' => 'submit',
          '#value' => t('Export')
      );
      break;
    case 2:
      $var = variable_get('location_settings_node_'.$form_state['values']['content_types'], array());
      if(count($var)) {
        $data = "\$data['location_settings']  = ". var_export((array) $var, TRUE) .";";
      }
      else {
        $data = t('Location for !type_name has not been set yet.', array('!type_name' => $form_state['values']['content_types']));
      }
      $form['export_code'] = array(
        '#type' => 'textarea',
        '#title' => t('Export data'),
        '#value' => $data,
        '#rows' => 40
      );
      break;
  }

  $form['step'] = array(
  '#type' => 'value',
  '#value' => $step,
);

  return $form;
}

/**
 * Submit handler for location export
 */ 
function udi_central_location_export_form_submit($form, &$form_state) {
  //$form_state['rebuild'] = TRUE;
  $form_state['storage']['step'] = $form_state['values']['step'];
}
/**
 * API function to update Location settings for a content type
 *
 * @param string $type_name
 * 	The name of the content type
 * @param string $file
 * 	The file path of the exported location code
 * 	
 */
function udi_central_location_node_type_update($type_name, $file) {
  $var = implode("\n", file($file));
  $data = NULL;
  // Convert the import formatted text back into a $content array.
  // Return if errors generated or not an array.
  // Use '@' to suppress errors about undefined constants in the macro.
  @eval($var);

  variable_set('location_settings_node_'. $type_name, $data['location_settings']);
  variable_set('location_maxnum_'. $type_name, $data['location_settings']['multiple']['max']);
  variable_set('location_defaultnum_'. $type_name, $data['location_settings']['multiple']['add']);

  return TRUE;
}

/**
 * API function to update Location settings for a Location type cck field
 *
 * @param string $field_name
 * 	The name of the field
 * @param string $file
 * 	The filepath of the exported location code
 */
function udi_central_location_cck_field_update($field_name, $file) {
  $var = implode("\n", file($file));
  $data = NULL;
  // Convert the import formatted text back into a $content array.
  // Return if errors generated or not an array.
  // Use '@' to suppress errors about undefined constants in the macro.
  @eval($var);

  db_query("UPDATE FROM {".content_field_tablename()."} SET global_settings = '%s' WHERE field_name = '%s'", serialize($data), $field_name);

  variable_set('location_settings_node_'. $type_name, $data);
  variable_set('location_maxnum_'. $type_name, $data['multiple']['max']);
  variable_getriable_set('location_defaultnum_'. $type_name, $data['multiple']['add']);

  return TRUE;
}
