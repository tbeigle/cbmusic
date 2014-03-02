<?php
function cbmusic_form_system_theme_settings_alter(&$form, &$form_state) {
  $form['header_text'] = array(
    '#type' => 'textfield',
    '#title' => t('Logo Replacement Header'),
    '#default_value' => theme_get_setting('header_text'),
    '#description' => t('Leave blank if you wish to use a logo instead.'),
  );
  
  $form['show_breadcrumb'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show Breadcrumb'),
    '#default_value' => theme_get_setting('show_breadcrumb'),
  );
  
  $form['site_footer'] = array(
    '#type' => 'textfield',
    '#title' => t('Copyright Footer'),
    '#default_value' => theme_get_setting('site_footer'),
  );
}
