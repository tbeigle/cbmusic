<?php

/**
 * @file
 * songkick.admin.inc
 *
 * Contains form callbacks for administering songkick.
 */

/**
 * Admin settings form
 */
function songkick_admin_settings($form, &$form_state) {
  $form = array();
  
  // For development ONLY
  $cb_artist_id = '4964903';
  $default_api_key = '5D6N6iLat7VASy4k';
  //$default_api_key = '';
  
  $apply_link = l(t('apply to SongKick'), 'http://www.songkick.com/api_key_requests/new', array('attributes' => array('target' => '_blank')));
  $form['songkick_api_key'] = array(
    '#title' => t('API Key'),
    '#description' => t('You must !apply_link for an API key.', array('!apply_link' => $apply_link)),
    '#type' => 'textfield',
    '#default_value' => variable_get('songkick_api_key', ''),
  );
  
  return system_settings_form($form);
}

/**
 * Form callback for administering songkick artist data
 */
function songkick_admin_artists($form, &$form_state) {
  $form = array();
  
  $form['add_artist_id'] = array(
    '#type' => 'textfield',
    '#title' => t('songkick Artist ID'),
    '#description' => t('Enter an artist\'s songkick ID to start importing events for the artist.'),
  );
  
  $form['bulk_action'] = array(
    '#type' => 'select',
    '#title' => t('Actions'),
    '#options' => array(
      0 => t('Select a Bulk Action'),
      'import' => t('Import Artist Events'),
      'enable' => t('Enable Importing of Artist Events'),
      'disable' => t('Disable Importing of Artist Events'),
      'delete' => t('Delete Artist Info'),
    ),
  );
  
  $artists = songkick_artist_info();
  
  $header = array(
    'artist_id' => t('songkick Artist ID'),
    'display_name' => t('Artist Name'),
    'uri' => t('Artist URI'),
    'import' => t('Import Artist Events'),
  );
  
  $options = array();
  foreach ($artists as $artist) {
    $options[$artist->artist_id] = array(
      'artist_id' => $artist->artist_id,
      'display_name' => $artist->display_name,
      'uri' => l($artist->uri, $artist->uri, array('attributes' => array('target' => '_blank'))),
      'import' => $artist->import ? t('Y') : t('N'),
    );
  }
  
  $form['artists'] = array(
    '#type' => 'tableselect',
    '#header' => $header,
    '#options' => $options,
  );
  
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit'),
  );
  
  return $form;
}

/**
 * Validation handling for the artist administration form
 */
function songkick_admin_artists_validate($form, &$form_state) {
  //form_set_error('', 'testing');
  //dpm($form_state['values']);
}

/**
 * Submission handling for the artist administration form
 */
function songkick_admin_artists_submit($form, &$form_state) {
  $data = $form_state['values'];
  
  if (!empty($data['add_artist_id'])) {
    songkick_import_artist_calendars(array($data['add_artist_id']));
  }
  
  if (!empty($data['bulk_action']) && !empty($data['artists'])) {
    $to_update = array();
    foreach ($data['artists'] as $artist_id) {
      if (!empty($artist_id)) $to_update[] = $artist_id;
    }
    
    if (!empty($to_update)) {
      switch ($data['bulk_action']) {
        case 'import': {
          break;
        }
        case 'enable': {
          break;
        }
        case 'disable': {
          break;
        }
        case 'delete': {
          songkick_delete_old_data($to_update);
          break;
        }
      }
    }
  }
}
