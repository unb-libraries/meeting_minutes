<?php
/**
 * @file
 * meeting_minutes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function meeting_minutes_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'list_meeting_minutes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'List Meeting Minutes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Meeting Minutes';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_minutes_file' => 'field_minutes_file',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_minutes_file' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p>Please contact <a href="mailto:jjc@unb.ca">Jeff Carter</a> or the committee chair if there are minutes missing from here.</p>
<p>Note: In the interests of sharing information as quickly as possible, some committees listed below have agreed to post minutes prior to formal committee acceptance. Please keep this in mind when reviewing them. Library Board minutes are only posted once they have been accepted.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No documents for this committee.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File in PDF format */
  $handler->display->display_options['fields']['field_minutes_file']['id'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['table'] = 'field_data_field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['field'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['label'] = '';
  $handler->display->display_options['fields']['field_minutes_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_minutes_file']['alter']['text'] = '<a href="[field_minutes_file]" target="_blank">[title]</a>';
  $handler->display->display_options['fields']['field_minutes_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minutes_file']['type'] = 'file_url_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Content: Committee or publication (field_committee_or_publication) */
  $handler->display->display_options['arguments']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['arguments']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['arguments']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['arguments']['field_committee_or_publication_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_committee_or_publication_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_committee_or_publication_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_committee_or_publication_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_committee_or_publication_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_committee_or_publication_value']['break_phrase'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting_minutes' => 'meeting_minutes',
  );
  /* Filter criterion: Content: Committee or publication (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'CD' => 'CD',
    'ISC' => 'ISC',
    'LCSWG' => 'LCSWG',
    'LB' => 'LB',
    'PSC' => 'PSC',
    'STDC' => 'STDC',
    'WERC' => 'WERC',
    'WRC' => 'WRC',
  );
  $handler->display->display_options['filters']['field_committee_or_publication_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_committee_or_publication_value']['expose']['operator_id'] = 'field_committee_or_publication_value_op';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['expose']['label'] = 'Select Committee';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['expose']['operator'] = 'field_committee_or_publication_value_op';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['expose']['identifier'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    18 => 0,
    19 => 0,
  );
  $handler->display->display_options['filters']['field_committee_or_publication_value']['expose']['reduce'] = TRUE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['list_meeting_minutes'] = $view;

  return $export;
}
