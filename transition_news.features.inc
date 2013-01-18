<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function transition_news_context_default_contexts() {
  $items = array();

  $items['transition_network-page-news'] = array(
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
  $items['transition_network-section-news'] = array(
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
 * Implementation of hook_node_info().
 */
function transition_news_node_info() {
  $items = array(
    'movement_news' => array(
      'name' => t('Community News'),
      'module' => 'features',
      'description' => t('An initiative\'s <em>News Story</em> that is entered into a Community Microsite covering news, announcements and thoughts. Any member of a Community Microsite can enter one to their Microsite. '),
      'has_title' => '1',
      'title_label' => t('Headline'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'network_news' => array(
      'name' => t('Transition Network News'),
      'module' => 'features',
      'description' => t('A <em>Transition Network News Story</em> covering press releases, site announcements, and informal blog-like entries may all be created for the Transition Network.'),
      'has_title' => '1',
      'title_label' => t('Headline'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function transition_news_views_api() {
  return array(
    'api' => '2',
  );
}
