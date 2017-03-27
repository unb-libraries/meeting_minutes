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
  $handler->display->display_options['header']['area']['content'] = 'Please contact <a href="mailto:jjc@unb.ca">Jeff Carter</a> or the committee chair if there are minutes missing from here.

Note: In the interests of sharing information as quickly as possible, some committees listed below have agreed to post minutes prior to formal committee acceptance. Please keep this in mind when reviewing them.
';
  $handler->display->display_options['header']['area']['format'] = 'html';
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
  /* Sort criterion: Content: Date of meeting (field_date_of_meeting) */
  $handler->display->display_options['sorts']['field_date_of_meeting_value']['id'] = 'field_date_of_meeting_value';
  $handler->display->display_options['sorts']['field_date_of_meeting_value']['table'] = 'field_data_field_date_of_meeting';
  $handler->display->display_options['sorts']['field_date_of_meeting_value']['field'] = 'field_date_of_meeting_value';
  $handler->display->display_options['sorts']['field_date_of_meeting_value']['order'] = 'DESC';
  /* Contextual filter: Content: Select Committee (field_committee_or_publication) */
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
  /* Filter criterion: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'CD' => 'CD',
    'ISC' => 'ISC',
    'LCSWG' => 'LCSWG',
    'LB' => 'LB',
    'LMG' => 'LMG',
    'PSC' => 'PSC',
    'SLC' => 'SLC',
    'SAC' => 'SAC',
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
    30 => 0,
    39 => 0,
    46 => 0,
    41 => 0,
    42 => 0,
    45 => 0,
    36 => 0,
    3 => 0,
    4 => 0,
    38 => 0,
    44 => 0,
    14 => 0,
    16 => 0,
    18 => 0,
    20 => 0,
    56 => 0,
    22 => 0,
    58 => 0,
    54 => 0,
    24 => 0,
    26 => 0,
    28 => 0,
    15 => 0,
    17 => 0,
    19 => 0,
    21 => 0,
    57 => 0,
    23 => 0,
    59 => 0,
    53 => 0,
    25 => 0,
    27 => 0,
    29 => 0,
    51 => 0,
    31 => 0,
    33 => 0,
    34 => 0,
    32 => 0,
    35 => 0,
    43 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    40 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    50 => 0,
    52 => 0,
    55 => 0,
  );
  $handler->display->display_options['filters']['field_committee_or_publication_value']['expose']['reduce'] = TRUE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'CD' => 'CD',
    'COM' => 'COM',
    'ISC' => 'ISC',
    'LCSWG' => 'LCSWG',
    'LB' => 'LB',
    'LMG' => 'LMG',
    'PSC' => 'PSC',
    'SLC' => 'SLC',
    'SAC' => 'SAC',
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
    30 => 0,
    39 => 0,
    46 => 0,
    41 => 0,
    42 => 0,
    45 => 0,
    36 => 0,
    3 => 0,
    4 => 0,
    38 => 0,
    63 => 0,
    14 => 0,
    68 => 0,
    16 => 0,
    18 => 0,
    20 => 0,
    56 => 0,
    22 => 0,
    58 => 0,
    54 => 0,
    24 => 0,
    26 => 0,
    28 => 0,
    15 => 0,
    69 => 0,
    17 => 0,
    19 => 0,
    21 => 0,
    57 => 0,
    23 => 0,
    59 => 0,
    53 => 0,
    25 => 0,
    61 => 0,
    51 => 0,
    27 => 0,
    29 => 0,
    31 => 0,
    33 => 0,
    34 => 0,
    32 => 0,
    35 => 0,
    43 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    40 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    50 => 0,
    52 => 0,
    55 => 0,
    60 => 0,
  );
  $handler->display->display_options['filters']['field_committee_or_publication_value']['expose']['reduce'] = TRUE;
  $export['list_meeting_minutes'] = $view;

  return $export;
}
