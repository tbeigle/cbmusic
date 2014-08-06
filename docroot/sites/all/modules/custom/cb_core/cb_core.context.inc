<?php
/**
 * @file
 * cb_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function cb_core_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = '403_page';
  $context->description = '';
  $context->tag = 'error pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/45' => 'node/45',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'content_top',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'error-page error-403',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('error pages');
  $export['403_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = '404_page';
  $context->description = '';
  $context->tag = 'error pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/46' => 'node/46',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'content_top',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'error-page error-404',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('error pages');
  $export['404_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global';
  $context->description = '';
  $context->tag = 'common';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-main-menu-internal' => array(
          'module' => 'menu',
          'delta' => 'menu-main-menu-internal',
          'region' => 'nav',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('common');
  $export['global'] = $context;

  return $export;
}
