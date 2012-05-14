<?php
/**
 * @file
 * preservation_document.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function preservation_document_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'document_content';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'document' => 'document',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'document_overrides',
    ),
  );
  $context->condition_mode = 0;
  $export['document_content'] = $context;

  return $export;
}
