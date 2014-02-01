<?php
/**
 * @file
 * Include file containing the page callback for the coming soon landing page
 */

/**
 * Page callback for the coming soon landing page
 */
function cbmusic_site_page_coming_soon() {
  $content = array();
  
  $theme_path = drupal_get_path('theme', 'cbmusic');
  
  $content['ep_cover'] = array(
    '#markup' =>
      '<div class="ep-cover">' .
        '<a href="https://www.facebook.com/corybishopmusic">' .
          '<img class="ep-cover" src="/' . $theme_path . '/images/2013-11-19.jpg" alt="' . t('Cory Bishop looking on in the studio as his new EP is being mixed') . '">' .
        '</a>' .
      '</div>',
  );
  
  $content['copy'] = array(
    '#markup' => '<p>' . t('New Website Coming Soon') . '</p>',
  );
  
  return $content;
}
