<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_quiz_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'atrium_quiz';
  $context->description = 'Context for atrium_quiz feature';
  $context->tag = 'lc';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'quiz' => 'quiz',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'lc_latest_quizzes' => 'lc_latest_quizzes',
        'quiz_by_taker' => 'quiz_by_taker',
        'quiz_by_taker:page_1' => 'quiz_by_taker:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'quiz',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for atrium_quiz feature');
  t('lc');

  $export['atrium_quiz'] = $context;
  return $export;
}
