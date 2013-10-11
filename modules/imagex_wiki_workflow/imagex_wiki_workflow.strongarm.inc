<?php
/**
 * @file
 * imagex_wiki_workflow.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function imagex_wiki_workflow_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_wiki';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_wiki'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_moderation_state_wiki';
  $strongarm->value = 'needs_review';
  $export['scheduler_publish_moderation_state_wiki'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_wiki';
  $strongarm->value = 0;
  $export['scheduler_publish_required_wiki'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_wiki';
  $strongarm->value = 1;
  $export['scheduler_publish_revision_wiki'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_wiki';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_wiki'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_default_time_wiki';
  $strongarm->value = '';
  $export['scheduler_unpublish_default_time_wiki'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_wiki';
  $strongarm->value = 0;
  $export['scheduler_unpublish_enable_wiki'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_moderation_state_wiki';
  $strongarm->value = 'draft';
  $export['scheduler_unpublish_moderation_state_wiki'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_wiki';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_wiki'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_wiki';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_wiki'] = $strongarm;

  return $export;
}
