<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function transition_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: create movement_news content
  $permissions['create movement_news content'] = array(
    'name' => 'create movement_news content',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'developer',
      '2' => 'group admin',
      '3' => 'site administrator',
      '4' => 'site editor',
    ),
  );

  // Exported permission: create network_news content
  $permissions['create network_news content'] = array(
    'name' => 'create network_news content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: delete any movement_news content
  $permissions['delete any movement_news content'] = array(
    'name' => 'delete any movement_news content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: delete any network_news content
  $permissions['delete any network_news content'] = array(
    'name' => 'delete any network_news content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: delete own movement_news content
  $permissions['delete own movement_news content'] = array(
    'name' => 'delete own movement_news content',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'developer',
      '2' => 'group admin',
      '3' => 'site administrator',
      '4' => 'site editor',
    ),
  );

  // Exported permission: delete own network_news content
  $permissions['delete own network_news content'] = array(
    'name' => 'delete own network_news content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: edit any movement_news content
  $permissions['edit any movement_news content'] = array(
    'name' => 'edit any movement_news content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: edit any network_news content
  $permissions['edit any network_news content'] = array(
    'name' => 'edit any network_news content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: edit own movement_news content
  $permissions['edit own movement_news content'] = array(
    'name' => 'edit own movement_news content',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'developer',
      '2' => 'group admin',
      '3' => 'site administrator',
      '4' => 'site editor',
    ),
  );

  // Exported permission: edit own network_news content
  $permissions['edit own network_news content'] = array(
    'name' => 'edit own network_news content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  return $permissions;
}
