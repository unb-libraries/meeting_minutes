<?php
/**
 * @file
 * meeting_minutes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function meeting_minutes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function meeting_minutes_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function meeting_minutes_node_info() {
  $items = array(
    'meeting_minutes' => array(
      'name' => t('Meeting Minutes'),
      'base' => 'node_content',
      'description' => t('Meeting Minutes posted by committees '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('DELETIONS: If minutes need to be removed entirely, please <a href="mailto:jjc@unb.ca">email the site administrator to have them deleted</a>.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
