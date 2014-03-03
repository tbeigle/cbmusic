<?php
/**
 * @file
 * cb_core.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function cb_core_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = '403 GIF';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = '403_gif';
  $fe_block_boxes->body = '<p><img alt="You\'re not welcome here." src="/sites/default/files/oW1KxmQ.gif" /></p>
';

  $export['403_gif'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = '404 GIF';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = '404_gif';
  $fe_block_boxes->body = '<p><img alt="I think you\'re confused." src="/sites/default/files/hVgCnRE.gif" /></p>
';

  $export['404_gif'] = $fe_block_boxes;

  return $export;
}
