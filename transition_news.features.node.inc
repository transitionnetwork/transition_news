<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _transition_news_node_info() {
  $items = array(
    'movement_news' => array(
      'name' => t('Movement News'),
      'module' => 'features',
      'description' => t('A <em>News Story</em> from a hosted Transition Initiative which is associated with one or more Initiatives (community microsites) and covers news, announcements and informal blog-like entries.'),
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
