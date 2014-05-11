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
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'header',
          'weight' => '-8',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'header-text-left',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('pages');
  $export['home'] = $context;

  return $export;
}
