<?php
/**
 *
 */
function theme_image_cover($variables) {
  $path = $variables['path'];
  return '<div class="image cover" style="background-image: url('.$path.')"></div>';
}
