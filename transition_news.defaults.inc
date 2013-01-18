<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _transition_news_content_default_fields() {
  $fields = array();

  // Exported field: field_themes
  $fields[] = array(
    'field_name' => 'field_themes',
    'type_name' => 'movement_news',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'topic' => 'topic',
      'blog' => 0,
      'forum' => 0,
      'page_group' => 0,
      'imported_event' => 0,
      'initiative_group' => 0,
      'initiative_profile' => 0,
      'initiative_event' => 0,
      'movement_news' => 0,
      'simplenews' => 0,
      'page' => 0,
      'panel' => 0,
      'project_profile' => 0,
      'event' => 0,
      'network_news' => 0,
      'profile' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Themes',
      'weight' => '-3',
      'description' => 'The <em>Themes</em> related to this <em>Movement News Story</em>.',
      'type' => 'nodereference_buttons',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_themes
  $fields[] = array(
    'field_name' => 'field_themes',
    'type_name' => 'network_news',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'topic' => 'topic',
      'blog' => 0,
      'forum' => 0,
      'page_group' => 0,
      'imported_event' => 0,
      'initiative_group' => 0,
      'initiative_profile' => 0,
      'initiative_event' => 0,
      'movement_news' => 0,
      'simplenews' => 0,
      'page' => 0,
      'panel' => 0,
      'project_profile' => 0,
      'event' => 0,
      'network_news' => 0,
      'profile' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Themes',
      'weight' => '-2',
      'description' => 'The <em>Themes</em> related to this <em>News Story</em>.',
      'type' => 'nodereference_buttons',
      'module' => 'nodereference',
    ),
  );

  // Translatables
  array(
    t('Source'),
    t('Themes'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _transition_news_context_default_contexts() {
  $items = array();

  $items[] = array(
  'namespace' => 'transition_network',
  'attribute' => 'page',
  'value' => 'news',
  'description' => 'A news page',
  'node' => array(
    '0' => 'network_news',
  ),
  'menu' => 'news',
  'theme_section' => array(
    'class' => 'news-page',
  ),
  'block' => array(
    'views_news-block_1' => array(
      'module' => 'views',
      'delta' => 'news-block_1',
      'weight' => -51,
      'region' => 'right',
      'status' => '0',
      'label' => 'news: Promoted News by Date list block',
      'type' => 'context_ui',
    ),
    'comment_0' => array(
      'module' => 'comment',
      'delta' => '0',
      'weight' => -50,
      'region' => 'right',
      'status' => '0',
      'label' => 'Recent comments',
      'type' => 'context_ui',
    ),
  ),
);
  $items[] = array(
  'namespace' => 'transition_network',
  'attribute' => 'section',
  'value' => 'news',
  'description' => 'The News section of the site',
  'node' => array(
    '0' => 'network_news',
  ),
  'path' => array(
    'news' => 'news',
    'news/*' => 'news/*',
  ),
  'menu_trail' => array(
    'news' => 'news',
  ),
  'views' => array(
    '0' => 'news',
  ),
  'menu' => 'news',
  'theme_section' => array(
    'title' => 'News',
    'class' => 'news-section',
  ),
  'block' => array(
    'views_news-block_1' => array(
      'module' => 'views',
      'delta' => 'news-block_1',
      'weight' => -51,
      'region' => 'right',
      'status' => '0',
      'label' => 'news: Promoted News by Date list block',
      'type' => 'context_ui',
    ),
    'comment_0' => array(
      'module' => 'comment',
      'delta' => '0',
      'weight' => -50,
      'region' => 'right',
      'status' => '0',
      'label' => 'Recent comments',
      'type' => 'context_ui',
    ),
  ),
);
  return $items;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _transition_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: create movement_news content
  $permissions[] = array(
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
  $permissions[] = array(
    'name' => 'create network_news content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: delete any movement_news content
  $permissions[] = array(
    'name' => 'delete any movement_news content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: delete any network_news content
  $permissions[] = array(
    'name' => 'delete any network_news content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: delete own movement_news content
  $permissions[] = array(
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
  $permissions[] = array(
    'name' => 'delete own network_news content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: edit any movement_news content
  $permissions[] = array(
    'name' => 'edit any movement_news content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: edit any network_news content
  $permissions[] = array(
    'name' => 'edit any network_news content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: edit own movement_news content
  $permissions[] = array(
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
  $permissions[] = array(
    'name' => 'edit own network_news content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  return $permissions;
}
