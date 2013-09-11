<?php

/**
 * Create a node object with attributes specified in params array
 * NOTE: this function is used during installation only
 *
 * @param string $content_type
 * @param array $params
 * 
 * @return TRUE when success otherwise FALSE
 */
function udi_central_node_add($content_type, $params = array()) {
  if (!empty($content_type) && !empty($params)) {
    $node = new stdClass();
    $node->type = $content_type;
    $node->title = $params['title'];
    $node->uid = !empty($params['uid']) ? $params['uid'] : 1;		// always use the site Admin id if no uid specified
    $node->body = !empty($params['body']) ? $params['body'] : "";
    $node->path = !empty($params['path']) ? $params['path'] : "";
    $node->status = !empty($params['status']) ? $params['status'] : 1;	// always published unless otherwise specified
    node_save_action($node);
    return TRUE;
  }

  return FALSE;
}

/**
 * Helper function to create a content type
 * Note that this function does not add any CCK fields with it.
 *
 * @param string $file_path
 * 	The file path of the CCK content type
 *
 * @return void
 */
function udi_central_node_content_type_copy($file_path) {
  module_load_include('inc', 'node', 'content_types');

  // The import will be populate into the $content variable.
  $content = array();

  ob_start();
  include $file_path;
  ob_end_clean();

  $form_state = array();
  $form = node_type_form($form_state);

  module_invoke_all('form_alter', $form, $form_state, 'node_type_form');

  $macro = '$content = '. var_export($content, 1) .';';
  $content = NULL;
  // Convert the import formatted text back into a $content array.
  // Return if errors generated or not an array.
  // Use '@' to suppress errors about undefined constants in the macro.
  @eval($macro);
  $form_state['values'] = $content['type'];

  // Call the submit function directly.
  // Using drupal_execute() leads to problems with the form_state when called
  // again within this submit function.
  node_type_form_submit($form, $form_state);
}
