<?php
/**
 * @file
 * resto_content_type_menu_item.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function resto_content_type_menu_item_taxonomy_default_vocabularies() {
  return array(
    'menu_categories' => array(
      'name' => 'Menu Categories',
      'machine_name' => 'menu_categories',
      'description' => 'Use this taxonomy to organize menus',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
