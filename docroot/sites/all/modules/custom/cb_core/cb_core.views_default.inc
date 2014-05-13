<?php
/**
 * @file
 * cb_core.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cb_core_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cb_instagram';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CB Instagram';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'instagram-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'instagrams';
  $handler->display->display_options['style_options']['wrapper_class'] = 'instagrams-wrapper';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Title';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h3 class="instagram-title"><a href="http://instagram.com/corybishop">@corybishop</a></h3>';
  /* Field: Content: Body (excluded, plain text) */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['ui_name'] = 'Content: Body (excluded, plain text)';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: Instagram Thumbnail URL */
  $handler->display->display_options['fields']['field_instf_thumb_url']['id'] = 'field_instf_thumb_url';
  $handler->display->display_options['fields']['field_instf_thumb_url']['table'] = 'field_data_field_instf_thumb_url';
  $handler->display->display_options['fields']['field_instf_thumb_url']['field'] = 'field_instf_thumb_url';
  $handler->display->display_options['fields']['field_instf_thumb_url']['label'] = '';
  $handler->display->display_options['fields']['field_instf_thumb_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instf_thumb_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_instf_thumb_url']['alter']['text'] = '<img src="[field_instf_thumb_url-url]" alt="[body]">';
  $handler->display->display_options['fields']['field_instf_thumb_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instf_thumb_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_instf_thumb_url']['type'] = 'link_plain';
  /* Field: Content: Instagram Image URL */
  $handler->display->display_options['fields']['field_instf_image_url']['id'] = 'field_instf_image_url';
  $handler->display->display_options['fields']['field_instf_image_url']['table'] = 'field_data_field_instf_image_url';
  $handler->display->display_options['fields']['field_instf_image_url']['field'] = 'field_instf_image_url';
  $handler->display->display_options['fields']['field_instf_image_url']['label'] = '';
  $handler->display->display_options['fields']['field_instf_image_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instf_image_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_instf_image_url']['alter']['text'] = '<img src="[field_instf_image_url-url]" alt="[body]">';
  $handler->display->display_options['fields']['field_instf_image_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instf_image_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_instf_image_url']['type'] = 'link_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  /* Field: Colorbox: Colorbox trigger */
  $handler->display->display_options['fields']['colorbox']['id'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['table'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['field'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['label'] = '';
  $handler->display->display_options['fields']['colorbox']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['trigger_field'] = 'field_instf_thumb_url';
  $handler->display->display_options['fields']['colorbox']['popup'] = '[field_instf_image_url]';
  $handler->display->display_options['fields']['colorbox']['caption'] = '[body_1]';
  $handler->display->display_options['fields']['colorbox']['gid'] = 1;
  $handler->display->display_options['fields']['colorbox']['width'] = '640px';
  $handler->display->display_options['fields']['colorbox']['height'] = '640px';
  /* Sort criterion: Content: Instagram Created (field_instf_created) */
  $handler->display->display_options['sorts']['field_instf_created_value']['id'] = 'field_instf_created_value';
  $handler->display->display_options['sorts']['field_instf_created_value']['table'] = 'field_data_field_instf_created';
  $handler->display->display_options['sorts']['field_instf_created_value']['field'] = 'field_instf_created_value';
  $handler->display->display_options['sorts']['field_instf_created_value']['order'] = 'DESC';
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
    'instagram_media_item' => 'instagram_media_item',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'pane_1');
  $export['cb_instagram'] = $view;

  $view = new view();
  $view->name = 'cb_tweets';
  $view->description = 'Displays Twitter.com status messages for users who have associated Twitter accounts.';
  $view->tag = '';
  $view->base_table = 'twitter';
  $view->human_name = 'CB Tweets';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Tweets */
  $handler = $view->new_display('default', 'Tweets', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'profile_image_url' => 'profile_image_url',
    'text' => 'text',
    'created_time' => 'text',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'profile_image_url' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'text' => array(
      'sortable' => 0,
      'separator' => ' &#8212; ',
    ),
    'created_time' => array(
      'sortable' => 0,
      'separator' => '',
    ),
  );
  /* Field: Twitter: Profile image */
  $handler->display->display_options['fields']['profile_image_url']['id'] = 'profile_image_url';
  $handler->display->display_options['fields']['profile_image_url']['table'] = 'twitter_account';
  $handler->display->display_options['fields']['profile_image_url']['field'] = 'profile_image_url';
  $handler->display->display_options['fields']['profile_image_url']['label'] = '';
  /* Field: Twitter: Message text */
  $handler->display->display_options['fields']['text']['id'] = 'text';
  $handler->display->display_options['fields']['text']['table'] = 'twitter';
  $handler->display->display_options['fields']['text']['field'] = 'text';
  $handler->display->display_options['fields']['text']['label'] = '';
  $handler->display->display_options['fields']['text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['text']['link_urls'] = 1;
  $handler->display->display_options['fields']['text']['link_usernames'] = 1;
  $handler->display->display_options['fields']['text']['link_hashtags'] = 1;
  /* Field: Twitter: Created time */
  $handler->display->display_options['fields']['created_time']['id'] = 'created_time';
  $handler->display->display_options['fields']['created_time']['table'] = 'twitter';
  $handler->display->display_options['fields']['created_time']['field'] = 'created_time';
  $handler->display->display_options['fields']['created_time']['label'] = '';
  $handler->display->display_options['fields']['created_time']['date_format'] = 'time ago';
  /* Sort criterion: Twitter: Created time */
  $handler->display->display_options['sorts']['created_time']['id'] = 'created_time';
  $handler->display->display_options['sorts']['created_time']['table'] = 'twitter';
  $handler->display->display_options['sorts']['created_time']['field'] = 'created_time';
  $handler->display->display_options['sorts']['created_time']['order'] = 'DESC';
  /* Filter criterion: Twitter: Protected status */
  $handler->display->display_options['filters']['protected']['id'] = 'protected';
  $handler->display->display_options['filters']['protected']['table'] = 'twitter_account';
  $handler->display->display_options['filters']['protected']['field'] = 'protected';
  $handler->display->display_options['filters']['protected']['value'] = 0;
  $handler->display->display_options['filters']['protected']['group'] = '0';
  $handler->display->display_options['filters']['protected']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'text' => 'text',
    'created_time' => 'created_time',
  );
  $handler->display->display_options['row_options']['separator'] = ' &#8212; ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Twitter: Message text */
  $handler->display->display_options['fields']['text']['id'] = 'text';
  $handler->display->display_options['fields']['text']['table'] = 'twitter';
  $handler->display->display_options['fields']['text']['field'] = 'text';
  $handler->display->display_options['fields']['text']['label'] = '';
  $handler->display->display_options['fields']['text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['text']['link_urls'] = 1;
  $handler->display->display_options['fields']['text']['link_usernames'] = 1;
  $handler->display->display_options['fields']['text']['link_hashtags'] = 1;
  $handler->display->display_options['fields']['text']['link_attributes'] = 1;
  /* Field: Twitter: Created time */
  $handler->display->display_options['fields']['created_time']['id'] = 'created_time';
  $handler->display->display_options['fields']['created_time']['table'] = 'twitter';
  $handler->display->display_options['fields']['created_time']['field'] = 'created_time';
  $handler->display->display_options['fields']['created_time']['label'] = '';
  $handler->display->display_options['fields']['created_time']['date_format'] = 'time ago';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['block_description'] = 'Tweets';

  /* Display: Tweets */
  $handler = $view->new_display('page', 'Tweets', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tweets';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_description'] = 'Displays a formatted list of tweets';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Twitter: Twitter status message ID */
  $handler->display->display_options['fields']['twitter_id']['id'] = 'twitter_id';
  $handler->display->display_options['fields']['twitter_id']['table'] = 'twitter';
  $handler->display->display_options['fields']['twitter_id']['field'] = 'twitter_id';
  $handler->display->display_options['fields']['twitter_id']['label'] = '';
  $handler->display->display_options['fields']['twitter_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['twitter_id']['element_label_colon'] = FALSE;
  /* Field: Twitter: Formatted tweet */
  $handler->display->display_options['fields']['formatted_tweet']['id'] = 'formatted_tweet';
  $handler->display->display_options['fields']['formatted_tweet']['table'] = 'twitter';
  $handler->display->display_options['fields']['formatted_tweet']['field'] = 'formatted_tweet';
  $handler->display->display_options['fields']['formatted_tweet']['label'] = '';
  $handler->display->display_options['fields']['formatted_tweet']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Twitter: Login name */
  $handler->display->display_options['arguments']['screen_name']['id'] = 'screen_name';
  $handler->display->display_options['arguments']['screen_name']['table'] = 'twitter';
  $handler->display->display_options['arguments']['screen_name']['field'] = 'screen_name';
  $handler->display->display_options['arguments']['screen_name']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['screen_name']['title'] = 'Tweets by @%1';
  $handler->display->display_options['arguments']['screen_name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['screen_name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['screen_name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['screen_name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['screen_name']['limit'] = '0';
  $handler->display->display_options['path'] = 'tweets';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'pane_home');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'tweet';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'tweets';
  $handler->display->display_options['style_options']['wrapper_class'] = 'tweets-wrapper';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Title';
  $handler->display->display_options['header']['area']['content'] = '<h3 class="twitter-feed-title"><a href="http://twitter.com/CoryBishopMusic" target="_blank">@CoryBishopMusic</a></h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Twitter: Login name (excluded) */
  $handler->display->display_options['fields']['screen_name']['id'] = 'screen_name';
  $handler->display->display_options['fields']['screen_name']['table'] = 'twitter';
  $handler->display->display_options['fields']['screen_name']['field'] = 'screen_name';
  $handler->display->display_options['fields']['screen_name']['ui_name'] = 'Twitter: Login name (excluded)';
  $handler->display->display_options['fields']['screen_name']['label'] = '';
  $handler->display->display_options['fields']['screen_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['screen_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['screen_name']['element_default_classes'] = FALSE;
  /* Field: Twitter: Profile image (rewritten) */
  $handler->display->display_options['fields']['profile_image_url']['id'] = 'profile_image_url';
  $handler->display->display_options['fields']['profile_image_url']['table'] = 'twitter_account';
  $handler->display->display_options['fields']['profile_image_url']['field'] = 'profile_image_url';
  $handler->display->display_options['fields']['profile_image_url']['ui_name'] = 'Twitter: Profile image (rewritten)';
  $handler->display->display_options['fields']['profile_image_url']['label'] = '';
  $handler->display->display_options['fields']['profile_image_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['profile_image_url']['alter']['path'] = 'https://twitter.com/[screen_name]';
  $handler->display->display_options['fields']['profile_image_url']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['profile_image_url']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['profile_image_url']['element_type'] = '0';
  $handler->display->display_options['fields']['profile_image_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['profile_image_url']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['profile_image_url']['element_wrapper_class'] = 'tweet-img';
  $handler->display->display_options['fields']['profile_image_url']['element_default_classes'] = FALSE;
  /* Field: Twitter: Message text */
  $handler->display->display_options['fields']['text']['id'] = 'text';
  $handler->display->display_options['fields']['text']['table'] = 'twitter';
  $handler->display->display_options['fields']['text']['field'] = 'text';
  $handler->display->display_options['fields']['text']['label'] = '';
  $handler->display->display_options['fields']['text']['element_type'] = '0';
  $handler->display->display_options['fields']['text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['text']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['text']['element_wrapper_class'] = 'tweet-message';
  $handler->display->display_options['fields']['text']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['text']['link_urls'] = 1;
  $handler->display->display_options['fields']['text']['link_usernames'] = 1;
  $handler->display->display_options['fields']['text']['link_hashtags'] = 1;
  $handler->display->display_options['fields']['text']['link_attributes'] = 1;
  /* Field: Twitter: Created time */
  $handler->display->display_options['fields']['created_time']['id'] = 'created_time';
  $handler->display->display_options['fields']['created_time']['table'] = 'twitter';
  $handler->display->display_options['fields']['created_time']['field'] = 'created_time';
  $handler->display->display_options['fields']['created_time']['label'] = '';
  $handler->display->display_options['fields']['created_time']['element_type'] = '0';
  $handler->display->display_options['fields']['created_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_time']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created_time']['element_wrapper_class'] = 'tweet-time-ago';
  $handler->display->display_options['fields']['created_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created_time']['date_format'] = 'time ago';
  $export['cb_tweets'] = $view;

  $view = new view();
  $view->name = 'songs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'file_managed';
  $view->human_name = 'Songs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'jplayer-view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'jplayer';
  $handler->display->display_options['style_options']['path_field'] = array(
    'uri' => 'uri',
  );
  $handler->display->display_options['style_options']['autoplay'] = '0';
  $handler->display->display_options['style_options']['volume'] = '80';
  $handler->display->display_options['style_options']['muted'] = '0';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['label'] = '';
  $handler->display->display_options['fields']['uri']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uri']['element_label_colon'] = FALSE;
  /* Field: File: Track Name */
  $handler->display->display_options['fields']['field_file_track_name']['id'] = 'field_file_track_name';
  $handler->display->display_options['fields']['field_file_track_name']['table'] = 'field_data_field_file_track_name';
  $handler->display->display_options['fields']['field_file_track_name']['field'] = 'field_file_track_name';
  $handler->display->display_options['fields']['field_file_track_name']['label'] = '';
  $handler->display->display_options['fields']['field_file_track_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_track_name']['type'] = 'text_plain';
  /* Sort criterion: File: Name */
  $handler->display->display_options['sorts']['filename']['id'] = 'filename';
  $handler->display->display_options['sorts']['filename']['table'] = 'file_managed';
  $handler->display->display_options['sorts']['filename']['field'] = 'filename';
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'audio' => 'audio',
  );

  /* Display: Block: You Can't Take Me */
  $handler = $view->new_display('block', 'Block: You Can\'t Take Me', 'block_jplayer');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'audio' => 'audio',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: File: Feature on Home Page (field_file_feature_home) */
  $handler->display->display_options['filters']['field_file_feature_home_value']['id'] = 'field_file_feature_home_value';
  $handler->display->display_options['filters']['field_file_feature_home_value']['table'] = 'field_data_field_file_feature_home';
  $handler->display->display_options['filters']['field_file_feature_home_value']['field'] = 'field_file_feature_home_value';
  $handler->display->display_options['filters']['field_file_feature_home_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page: EP Streaming - 2014-05 */
  $handler = $view->new_display('page', 'Page: EP Streaming - 2014-05', 'page_ep_stream');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Download Link';
  $handler->display->display_options['header']['area']['content'] = '<a class="ep-download" href="/press-download/24">Click here to download the EP as a ZIP file.</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'audio' => 'audio',
  );
  /* Filter criterion: File: Album (field_file_album) */
  $handler->display->display_options['filters']['field_file_album_value']['id'] = 'field_file_album_value';
  $handler->display->display_options['filters']['field_file_album_value']['table'] = 'field_data_field_file_album';
  $handler->display->display_options['filters']['field_file_album_value']['field'] = 'field_file_album_value';
  $handler->display->display_options['filters']['field_file_album_value']['value'] = array(
    'ep_201405' => 'ep_201405',
  );
  $handler->display->display_options['path'] = 'prexclusive';
  $export['songs'] = $view;

  return $export;
}
