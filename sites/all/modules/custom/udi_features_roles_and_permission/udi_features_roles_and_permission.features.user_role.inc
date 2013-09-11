<?php

/**
 * Implementation of hook_user_default_roles().
 */
function udi_features_roles_and_permission_user_default_roles() {
  $roles = array();

  // Exported role: admin
  $roles['admin'] = array(
    'name' => 'admin',
  );

  // Exported role: anonymous user
  $roles['anonymous user'] = array(
    'name' => 'anonymous user',
  );

  // Exported role: authenticated user
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
  );

  // Exported role: board of directors
  $roles['board of directors'] = array(
    'name' => 'board of directors',
  );

  // Exported role: staff
  $roles['staff'] = array(
    'name' => 'staff',
  );

  return $roles;
}
