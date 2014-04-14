<?php

/**
 * Implements template_preprocess_block()
 */
function cbmusic_preprocess_block(&$vars) {
  // Defaults
  $vars['title_tag'] = 'h2';
  $vars['title_attributes_array']['class'][] = 'block-title';
  $vars['content_attributes_array']['class'][] = 'content';
}

/**
 * Implements template_preprocess_html()
 */
function cbmusic_preprocess_html(&$vars) {
  $vars['html_shiv'] = '/';
  
  if (!empty($vars['directory'])) {
    $vars['html_shiv'] .= trim($vars['directory'], '/');
  }
  else {
    $vars['html_shiv'] .= trim(drupal_get_path('theme', 'cbmusic'), '/');
  }
  
  $vars['html_shiv'] .= '/scripts/js/vendor/html5shiv.js';
  
  _cbmusic_apple_touch_icons();
}

/**
 * Implements template_preprocess_page()
 */
function cbmusic_preprocess_page(&$vars) {
  $vars['show_breadcrumb'] = theme_get_setting('show_breadcrumb');
  $vars['site_footer'] = theme_get_setting('site_footer');
  $vars['header_text'] = theme_get_setting('header_text');
}

function cbmusic_preprocess(&$vars, $hook) {
  //print '<pre>' . print_r($hook, TRUE) . '</pre>';
  if ($hook == 'jplayer_view_playlist') {
    $vars['theme_hook_suggestions'][] = 'jplayer';
  }
}

/**
 * Implements hook_theme_registry_alter().
 */
/*function cbmusic_theme_registry_alter(&$theme_registry) {
  global $theme_path;
  //watchdog('cbmusic', 'Theme registry:<pre>' . print_r($theme_registry, TRUE) . '</pre>');
  if (!isset($theme_registry['jplayer']['path'])) {
    $theme_registry['jplayer']['path'] = $theme_path . '/jplayer';
  }
  //watchdog('cbmusic', 'Theme registry:<pre>' . print_r($theme_registry, TRUE) . '</pre>');
}*/

/**
 * Implements template_preprocess_jplayer().
 */
/*function cbmusic_preprocess_jplayer(&$vars) {
  dpm($vars);
}*/

/**
 * Adds apple shortcut icons to the HTML head
 */
function _cbmusic_apple_touch_icons() {
  global $theme_path;
  $img_prefix = '/' . $theme_path . '/images/apple-touch/apple-touch-icon';
  $sizes = array(0,57,72);
  
  foreach ($sizes as $size) {
    $attributes = array(
      'rel' => 'apple-touch-icon',
    );
    
    if (!empty($size)) $attributes['sizes'] = $size . 'x' . $size;
    
    $attributes['href'] = $img_prefix . (!empty($size) ? '-' . $size . 'x' . $size : '') . '.png';
    
    $element = array(
      '#tag' => 'link',
      '#attributes' => $attributes,
    );
    
    drupal_add_html_head($element, 'apple_touch_icon_' . $size);
  }
}
