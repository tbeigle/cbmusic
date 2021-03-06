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
  $fe_block_boxes->body = '<h1 class="ep-title">
	<a href="https://itunes.apple.com/us/album/cory-bishop-ep/id923135308" target="_blank">Cory Bishop EP <span>Now Available</span> <span class="itunes">on iTunes</span></a></h1>
<div class="album-cover">
	<a href="https://itunes.apple.com/us/album/cory-bishop-ep/id923135308" target="_blank"><img alt="New EP album cover is a photo of Cory Bishop looking into the camera." src="/sites/default/files/album-cover-banner.jpg"></a></div>
<!-- /.album-cover -->';

  $export['new_ep_link'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Banner - Home: Pre-EP';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'pre_ep_banner';
  $fe_block_boxes->body = '<div class="image-wrapper">
	<img alt="Cory Bishop" src="/sites/default/files/pre-ep-banner.jpg" /></div>
';

  $export['pre_ep_banner'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Banner - Home: Single Link';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'single_banner';
  $fe_block_boxes->body = '<div class="image-wrapper">
	<a href="http://tinyurl.com/klk286f" title="New single on iTunes!"><img alt="You Can\'t Take Me - cover of the single" src="/sites/default/files/cover-single-you-cant-take-me-1080x1080.jpg" /></a></div>
';

  $export['single_banner'] = $fe_block_boxes;

  return $export;
}
