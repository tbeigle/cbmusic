<?php
/**
 * @file
 * Provide the HTML output for a jPlayer interface.
 */
?>

<div class="jp-<?php print $type; if($type == 'video') print ' jp-video-360p'; ?>">
  <div class="jp-type-playlist">
    <div id="<?php print $player_id; ?>" class="jp-jplayer"></div>
    <div id="<?php print $player_id; ?>_interface" class="jp-interface">
      <?php if ($type == 'video'): ?>
      <div class="jp-video-play"></div>
      <?php endif; ?>
      <ul class="jp-controls">
        <?php if ($mode == 'playlist'): ?>
          <li class="jp-previous-wrapper"><a href="#" class="jp-previous" tabindex="1">previous</a></li>
          <li class="jp-play-pause-wrapper"><a href="#" class="jp-play" tabindex="1">play</a> <a href="#" class="jp-pause" tabindex="1">pause</a></li>
          <li class="jp-next-wrapper"><a href="#" class="jp-next" tabindex="1">next</a></li>
        <?php else: ?>
          <li class="jp-play-pause-wrapper"><a href="#" class="jp-play" tabindex="1">play</a> <a href="#" class="jp-pause" tabindex="1">pause</a></li>
        <?php endif; ?>
        <li class="jp-stop-wrapper"><a href="#" class="jp-stop" tabindex="1">stop</a></li>
        <li class="jp-kitchen-sink-wrapper">
          <div class="jp-progress">
            <div class="jp-seek-bar">
              <div class="jp-play-bar"></div>
            </div>
          </div>
          
          <div class="jp-current-time"></div>
          <div class="jp-duration"></div>
        </li>
        <li class="jp-mute-wrapper"><a href="#" class="jp-mute" tabindex="1">mute</a></li>
        <li class="jp-unmute-wrapper"><a href="#" class="jp-unmute" tabindex="1">unmute</a></li>
        <li class="jp-volume-bar-wrapper">
          <div class="jp-volume-bar">
            <div class="jp-volume-bar-value"></div>
          </div>
        </li>
      </ul>
    </div>
    
    <div id="<?php print $player_id; ?>_playlist" class="jp-playlist">
      <?php if ($mode == 'playlist' || $mode == 'single'): ?>
        <?php print $playlist; ?>
      <?php else: ?>
        <ul>
          <li><?php print check_plain($label); ?></li>
        </ul>
      <?php endif; ?>
    </div>
  </div>
</div>
<?php print drupal_render($dynamic); ?>

