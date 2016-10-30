<?php
/**
 * @file
 * farm_map_kartverket.default_openlayers_layers.inc
 */

/**
 * Implements hook_default_openlayers_layers().
 */
function farm_map_kartverket_default_openlayers_layers() {
  $export = array();

  $ol_layer = new stdClass();
  $ol_layer->disabled = FALSE; /* Edit this to true to make a default ol_layer disabled initially */
  $ol_layer->api_version = 1;
  $ol_layer->machine_name = 'farm_map_kartverket_layer_norgres_grunnkar';
  $ol_layer->name = 'Kartverket: Norges Grunnkart';
  $ol_layer->description = '';
  $ol_layer->factory_service = 'openlayers.Layer:Tile';
  $ol_layer->options = array(
    'source' => 'farm_map_kartverket_source_norges_grunnkart',
    'visible' => 1,
    'opacity' => 1,
  );
  $export['farm_map_kartverket_layer_norgres_grunnkar'] = $ol_layer;

  return $export;
}

/**
 * Implements hook_default_openlayers_layers_alter().
 */
function farm_map_kartverket_default_openlayers_layers_alter(&$layers) {

  // Add Kartverket layers to farm_map_layer_group.
  if (!empty($layers['farm_map_layer_group'])) {
    array_unshift($layers['farm_map_layer_group']->options['grouplayers'], 'farm_map_kartverket_layer_norgres_grunnkar');
  }
}
