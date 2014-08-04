<?php
/**
 * @file
 * resto_content_type_menu_item.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function resto_content_type_menu_item_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function resto_content_type_menu_item_node_info() {
  $items = array(
    'resto_menu_item' => array(
      'name' => t('Menu Item'),
      'base' => 'node_content',
      'description' => t('Use this content type to create a menu item with a title, types and images.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
