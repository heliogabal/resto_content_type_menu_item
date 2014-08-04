<?php
/**
 * @file
 * resto_content_type_menu_item.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function resto_content_type_menu_item_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_menu_types|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_menu_types';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_menu_type',
        1 => 'field_menu_price',
      ),
    ),
    'fields' => array(
      'field_menu_type' => 'ds_content',
      'field_menu_price' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_menu_types|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|resto_menu_item|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'resto_menu_item';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_menu_images',
        2 => 'field_menu_types',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_menu_images' => 'ds_content',
      'field_menu_types' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|resto_menu_item|default'] = $ds_layout;

  return $export;
}
