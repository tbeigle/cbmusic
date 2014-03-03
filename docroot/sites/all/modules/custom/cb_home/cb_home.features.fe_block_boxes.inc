<?php
/**
 * @file
 * cb_home.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function cb_home_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Banner - Home: New EP Link';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'new_ep_link';
  $fe_block_boxes->body = '<h2 class="ep-title">
	<a href="#">New EP <span>Available Now</span> <span class="itunes">on iTunes</span></a></h2>
<div class="album-cover">
	<a href="#"><img alt="New EP album cover is a photo of Cory Bishop looking into the camera." src="/sites/default/files/album-cover-banner.jpg" style="width: 1020px; height: 540px;" /></a></div>
<!-- /.album-cover -->';

  $export['new_ep_link'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Banner - Home: Pre-EP';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'pre_ep_banner';
  $fe_block_boxes->body = '<div class="image-wrapper">
	<img alt="Cory Bishop" src="/sites/default/files/pre-ep-banner.jpg" style="width: 1020px; height: 590px;" /></div>
';

  $export['pre_ep_banner'] = $fe_block_boxes;

  return $export;
}
