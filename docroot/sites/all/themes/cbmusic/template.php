<?php

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
