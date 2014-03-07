<?php
/**
 * @file
 * songkick.api.inc
 */

/**
 * Class to handle songkick API calls
 */
class songkickInterface {
  var $url_base = 'http://api.songkick.com/api/3.0/';
  var $api_key;
  
  function __construct() {
    $this->api_key = variable_get('songkick_api_key', '');
  }
  
  /**
   * Imports artist events
   */
  function import_artist_calendar($artist_id = '', $mbid = '') {
    if (!empty($this->api_key) && (!empty($artist_id) || !empty($mbid))) {
      $url = $this->url_base . 'artists/' . (!empty($artist_id) ? $artist_id : 'mbid:' . $mbid) . '/calendar.json?apikey=' . $this->api_key;
      
      $data = $this->_call($url);
      
      if (!empty($data['resultsPage']['results']['event'])) {
        return $data['resultsPage']['results']['event'];
      }
    }
    
    return array();
  } 
  
  /**
   * Performs the API call
   */
  private function _call($url) {
    feeds_include_library('http_request.inc', 'http_request');
    $result = http_request_get($url);
    
    return drupal_json_decode($result->data);
  }
}
