<?php
/**
 * @file
 * meeting_minutes.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function meeting_minutes_user_default_roles() {
  $roles = array();

  // Exported role: Meeting Minutes - Collections Development Admin.
  $roles['Meeting Minutes - Collections Development Admin'] = array(
    'name' => 'Meeting Minutes - Collections Development Admin',
    'weight' => 13,
  );

  // Exported role: Meeting Minutes - Collections Development View.
  $roles['Meeting Minutes - Collections Development View'] = array(
    'name' => 'Meeting Minutes - Collections Development View',
    'weight' => 22,
  );

  // Exported role: Meeting Minutes - Instructional Services Committee Admin.
  $roles['Meeting Minutes - Instructional Services Committee Admin'] = array(
    'name' => 'Meeting Minutes - Instructional Services Committee Admin',
    'weight' => 14,
  );

  // Exported role: Meeting Minutes - Instructional Services Committee View.
  $roles['Meeting Minutes - Instructional Services Committee View'] = array(
    'name' => 'Meeting Minutes - Instructional Services Committee View',
    'weight' => 23,
  );

  // Exported role: Meeting Minutes - John B. McNair Learning Commons Services Admin.
  $roles['Meeting Minutes - John B. McNair Learning Commons Services Admin'] = array(
    'name' => 'Meeting Minutes - John B. McNair Learning Commons Services Admin',
    'weight' => 15,
  );

  // Exported role: Meeting Minutes - John B. McNair Learning Commons Services View.
  $roles['Meeting Minutes - John B. McNair Learning Commons Services View'] = array(
    'name' => 'Meeting Minutes - John B. McNair Learning Commons Services View',
    'weight' => 24,
  );

  // Exported role: Meeting Minutes - Library Board Admin.
  $roles['Meeting Minutes - Library Board Admin'] = array(
    'name' => 'Meeting Minutes - Library Board Admin',
    'weight' => 16,
  );

  // Exported role: Meeting Minutes - Library Board View.
  $roles['Meeting Minutes - Library Board View'] = array(
    'name' => 'Meeting Minutes - Library Board View',
    'weight' => 25,
  );

  // Exported role: Meeting Minutes - Public Service Committee Admin.
  $roles['Meeting Minutes - Public Service Committee Admin'] = array(
    'name' => 'Meeting Minutes - Public Service Committee Admin',
    'weight' => 17,
  );

  // Exported role: Meeting Minutes - Public Service Committee View.
  $roles['Meeting Minutes - Public Service Committee View'] = array(
    'name' => 'Meeting Minutes - Public Service Committee View',
    'weight' => 26,
  );

  // Exported role: Meeting Minutes - Staff Training & Development Committee Admin.
  $roles['Meeting Minutes - Staff Training & Development Committee Admin'] = array(
    'name' => 'Meeting Minutes - Staff Training & Development Committee Admin',
    'weight' => 19,
  );

  // Exported role: Meeting Minutes - Staff Training & Development Committee View.
  $roles['Meeting Minutes - Staff Training & Development Committee View'] = array(
    'name' => 'Meeting Minutes - Staff Training & Development Committee View',
    'weight' => 28,
  );

  // Exported role: Meeting Minutes - Student Advisory Council Admin.
  $roles['Meeting Minutes - Student Advisory Council Admin'] = array(
    'name' => 'Meeting Minutes - Student Advisory Council Admin',
    'weight' => 18,
  );

  // Exported role: Meeting Minutes - Student Advisory Council View.
  $roles['Meeting Minutes - Student Advisory Council View'] = array(
    'name' => 'Meeting Minutes - Student Advisory Council View',
    'weight' => 27,
  );

  // Exported role: Meeting Minutes - Web & Electronic Resources Committee Admin.
  $roles['Meeting Minutes - Web & Electronic Resources Committee Admin'] = array(
    'name' => 'Meeting Minutes - Web & Electronic Resources Committee Admin',
    'weight' => 20,
  );

  // Exported role: Meeting Minutes - Web & Electronic Resources Committee View.
  $roles['Meeting Minutes - Web & Electronic Resources Committee View'] = array(
    'name' => 'Meeting Minutes - Web & Electronic Resources Committee View',
    'weight' => 29,
  );

  // Exported role: Meeting Minutes - Website Review Committee Admin.
  $roles['Meeting Minutes - Website Review Committee Admin'] = array(
    'name' => 'Meeting Minutes - Website Review Committee Admin',
    'weight' => 21,
  );

  // Exported role: Meeting Minutes - Website Review Committee View.
  $roles['Meeting Minutes - Website Review Committee View'] = array(
    'name' => 'Meeting Minutes - Website Review Committee View',
    'weight' => 30,
  );

  return $roles;
}
