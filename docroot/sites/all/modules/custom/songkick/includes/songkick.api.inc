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
  
  public function __construct() {
    $this->api_key = variable_get('songkick_api_key', '');
  }
  
  /**
   * Imports artist events
   */
  public function import_artist_calendar($artist_id = '', $mbid = '') {
    $events = array();
    if (!empty($this->api_key) && (!empty($artist_id) || !empty($mbid))) {
      $complete = FALSE;
      $total_entries = 0;
      
      $url_base = $this->url_base . 'artists/' . (!empty($artist_id) ? $artist_id : 'mbid:' . $mbid) . '/calendar.json';
      $options = array(
        'query' => array(
          'apikey' => $this->api_key,
          'perPage' => 50,
          'page' => 1,
        ),
      );
      
      while (!$complete) {
        $url = url($url_base, $options);
        
        $data = $this->_call($url);
        $status = !empty($data->resultsPage->status) ? $data->resultsPage->status : '';
        if (empty($total_entries) && !empty($data->resultsPage->totalEntries)) $total_entries = $data->resultsPage->totalEntries;
        
        if (!empty($data->resultsPage->results->event)) {
          $events += $data->resultsPage->results->event;
        }
        
        $complete = ($total_entries <= count($events) || $status != 'ok');
        $options['query']['page']++;
      }
    }
    
    return $events;
  } 
  
  /**
   * Performs the API call
   */
  private function _call($url) {
    if (!songkick_use_curl()) {
      watchdog('songkick', 'Cannot use cURL to get Songkick data.', WATCHDOG_ERROR);
      return FALSE;
    }
    
    $ch = curl_init($url);
    curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
    
    $result = curl_exec($ch);
    
    curl_close($ch);
    
    return json_decode($result);
  }
}
