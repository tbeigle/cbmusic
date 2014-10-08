<?php
/**
 * @file
 * cb_home.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function cb_home_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home';
  $context->description = '';
  $context->tag = 'pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/44' => 'node/44',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-songs-block_jplayer' => array(
          'module' => 'views',
          'delta' => 'songs-block_jplayer',
          'region' => 'logo',
          'weight' => '-10',
        ),
        'menu-menu-social-links' => array(
          'module' => 'menu',
          'delta' => 'menu-social-links',
          'region' => 'logo',
          'weight' => '-9',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'header',
          'weight' => '-7',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'nav',
          'weight' => '-10',
        ),
      ),
    ),
    'disable_context' => array(
      'disabled' => array(
        'global' => 'global',
      ),
    ),
    'theme_html' => array(
      'class' => 'new-ep-2014',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('pages');
  $export['home'] = $context;

  return $export;
}
