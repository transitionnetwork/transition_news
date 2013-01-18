<?php

/**
 * Implementation of hook_content_default_fields().
 */
function transition_news_content_default_fields() {
  $fields = array();

  // Exported field: field_themes
  $fields['movement_news-field_themes'] = array(
    'field_name' => 'field_themes',
    'type_name' => 'movement_news',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
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
      'initiative_event' => 0,
      'initiative_group' => 0,
      'movement_news' => 0,
      'feed' => 0,
      'feed_item' => 0,
      'forum' => 0,
      'page_group' => 0,
      'imported_blogs' => 0,
      'imported_blogs_parent' => 0,
      'imported_news' => 0,
      'imported_news_parent' => 0,
      'initiative_event_external' => 0,
      'initiative_profile' => 0,
      'initiative_hub_profile' => 0,
      'page' => 0,
      'panel' => 0,
      'imported_event' => 0,
      'imported_events_parent' => 0,
      'pattern' => 0,
      'project_profile' => 0,
      'resource' => 0,
      'tool' => 0,
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
  $fields['network_news-field_themes'] = array(
    'field_name' => 'field_themes',
    'type_name' => 'network_news',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
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
      'initiative_event' => 0,
      'initiative_group' => 0,
      'movement_news' => 0,
      'feed' => 0,
      'feed_item' => 0,
      'forum' => 0,
      'page_group' => 0,
      'imported_blogs' => 0,
      'imported_blogs_parent' => 0,
      'imported_news' => 0,
      'imported_news_parent' => 0,
      'initiative_event_external' => 0,
      'initiative_profile' => 0,
      'initiative_hub_profile' => 0,
      'page' => 0,
      'panel' => 0,
      'imported_event' => 0,
      'imported_events_parent' => 0,
      'pattern' => 0,
      'project_profile' => 0,
      'resource' => 0,
      'tool' => 0,
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
  // Included for use with string extractors like potx.
  t('Original article');
  t('Source');
  t('Themes');

  return $fields;
}
