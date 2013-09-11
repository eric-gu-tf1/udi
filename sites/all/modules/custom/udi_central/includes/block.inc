<?php
/**
 * API function to position or create a block
 *
 * @param string $module_name
 *  The name of the module to which the block belongs to
 * @param string $block_name
 *  The delta provided by the module for the block
 * @param string $region
 *  The region to position the block into
 * @param bool $status
 *  Boolean value to enable or disable the block
 * @param string $weight
 *  The weight value of the block
 * @param int $visibility
 *  The visibilty of the block. Possible values include
 *    <ul>
 *      <li>0 - Show on every page except the listed pages</li>
 *      <li>1 - Show on only the listed pages.</li>
 *      <li>2 - Show if the following PHP code returns TRUE (PHP-mode, experts only).</li>
 *    </ul>
 * @param string $pages
 *  The pages or PHP code that the view should be displayed on/executed
 * @param string $theme
 *  The theme to enable or disable this block for
 * @param string $title
 *  The title of the block
 *
 * @return void
 */
function udi_central_block_position_block($module_name, $block_name, $region, $status = 0, $weight = 0, $visibility = 0, $pages = '', $theme = 'central', $title = '') {
  $res = db_result(db_query("SELECT bid FROM {blocks} WHERE module = '%s' AND delta = '%s' AND theme = '%s'", $module_name, $block_name, $theme));
  if($res) {
    //status == 0 means the block is disabled
    if($status == 0) {
      //disable the block
      db_query("UPDATE {blocks} SET status = %d WHERE bid = %d", $status, $res);
    }
    //status == 1 means the block is enabled
    else {
      //enable and position the block
      db_query("UPDATE {blocks} SET region = '%s', status = %d, weight = %d, visibility = %d, pages = '%s', title = '%s' WHERE bid = %d", array($region, $status, $weight, $visibility, $pages, $title, $res));
    }
  } else {
    module_load_include('inc', 'install_profile_api', 'core/block' );
    install_add_block($module_name, $block_name, $theme, $status, $weight, $region, $visibility, $pages, 0, 0, $title);
  }
  drupal_flush_all_caches();
}