<?php
/**
 * @file
 * preservation_document.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function preservation_document_ctools_plugin_api() {
  return array("version" => "3");
}

/**
 * Implements hook_node_info().
 */
function preservation_document_node_info() {
  $items = array(
    'document' => array(
      'name' => t('Document'),
      'base' => 'node_content',
      'description' => t('A document is a single scan.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
