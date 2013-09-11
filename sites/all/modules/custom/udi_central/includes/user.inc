<?php

/**
 * Get a role based on name
 *
 * @param string $name
 * 	The name of the role
 * @return
 * 	The rid of the role if found, else false
 */ 
function udi_central_user_get_role_id($role) {
  $sql = "SELECT rid FROM  {role} WHERE name = '%s'";
  return db_result(db_query($sql, $role));
}

/**
 * API function to add an array of permission strings to a role given by the $rid
 *
 * @param int $rid
 * 	The role id
 * @param array $permissions
 * 	The permissions to be added to the role
 * @return
 * 	An array of the count of permissions
 */
function udi_central_user_add_permissions_to_role($rid, $permissions) {
  if (!$rid) {
    return array(
      'success' => FALSE,
      'query' => t("Admin role couldn't be created, hence permissions were not created.")
    );
  }

  // Get existing permissions for this role
  $row = db_fetch_object(db_query('SELECT pid, perm FROM {permission} WHERE rid = %d', $rid));
  $existing_perm_array = $row->perm ? explode(', ', $row->perm) : array();

  // Get the union of new and existing permissions, remove any empty
  // entries that may exist.
  $perm_array = array_diff(array_unique(array_merge($existing_perm_array, $permissions)), array(''));

  if ($row->pid) {
    db_query(
      "UPDATE {permission} SET perm = '%s' WHERE pid = %d",
      implode(', ', $perm_array),
      $row->pid
    );
  }
  else {
    db_query(
      "INSERT INTO {permission} (rid, perm) VALUES (%d, '%s')",
      $rid,
      implode(', ', $perm_array)
    );
  }

  return array(
    'success' => TRUE,
    'query' => t(
      "Adding !count permissions to role #!rid",
      array('!count' => count($permissions), '!rid' => $rid)
    ),
  );
}

/**
 * API function to add a role
 * 	- if a role with the same existed, just return it; else add a new role
 *
 * @param array $roles
 * 	array of role strings
 * 	
 * @return
 * 	An associative array of key (role name) value (role id) pair
 */
function udi_central_user_add_user_roles($roles = array()) {
  $set = array();

  if (is_array($roles) && !empty($roles)) {
    foreach($roles as $role) {
      $rid = db_result(db_query("SELECT rid FROM {role} WHERE name = '%s'", $role));

      if (is_numeric($rid)) {
        $set[strtolower(str_replace(' ', '_', $role))] = $rid;
      }
      else {
        db_query("INSERT INTO {role} (name) VALUES ('%s')", $role);
        $new_rid = db_result(db_query("SELECT rid FROM {role} WHERE name = '%s'", $role));
        $set[strtolower(str_replace(' ', '_', $role))] = $new_rid;
      }
    }

    return $set;
  }

  return FALSE;
}
/**
 * API function to replace a roles permissions given by the $rid.
 * WARNING - ALL PERMISSIONS WILL BE OVERWRITTEN
 *
 * @param int $rid
 * 	The rid of the role
 * @param array $permissions
 * 	The new permissions to replace
 * 	
 * @return
 * 	An array of the count of permissions added
 */
function udi_central_user_replace_permissions_to_role($rid, $permissions) {
  if (!$rid) {
    return array(
      'success' => FALSE,
      'query' => t("Admin role couldn't be created, hence permissions were not created.")
    );
  }

  // Get existing permissions for this role
  $row = db_fetch_object(db_query('SELECT pid, perm FROM {permission} WHERE rid = %d', $rid));
  //$existing_perm_array = $row->perm ? explode(', ', $row->perm) : array();

  // Get the union of new and existing permissions, remove any empty
  // entries that may exist.
  //$perm_array = array_diff(array_unique(array_merge($existing_perm_array, $permissions)), array(''));
  $perm_array = $permissions;

  if ($row->pid) {
    db_query(
      "UPDATE {permission} SET perm = '%s' WHERE pid = %d",
      implode(', ', $perm_array),
      $row->pid
    );
  }
  else {
    db_query(
      "INSERT INTO {permission} (rid, perm) VALUES (%d, '%s')",
      $rid,
      implode(', ', $perm_array)
    );
  }

  return array(
    'success' => TRUE,
    'query' => t(
      "Setting !count permissions to role #!rid",
      array('!count' => count($permissions), '!rid' => $rid)
    ),
  );
}
