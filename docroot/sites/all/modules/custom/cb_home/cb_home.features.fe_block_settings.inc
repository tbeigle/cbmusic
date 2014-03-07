<?php
/**
 * @file
 * cb_home.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function cb_home_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-new_ep_link'] = array(
    'cache' => -1,
    'css_class' => 'banner-home new-ep-link',
    'custom' => 0,
    'machine_name' => 'new_ep_link',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'cbmusic' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cbmusic',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-pre_ep_banner'] = array(
    'cache' => -1,
    'css_class' => 'banner-home pre-ep',
    'custom' => 0,
    'machine_name' => 'pre_ep_banner',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'cbmusic' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cbmusic',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'New EP Coming Soon',
    'visibility' => 0,
  );

  return $export;
}
