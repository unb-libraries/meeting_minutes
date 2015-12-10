<?php
/**
 * @file
 * meeting_minutes.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function meeting_minutes_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'Edit CD'.
  $permissions['Edit CD'] = array(
    'name' => 'Edit CD',
    'roles' => array(
      'Meeting Minutes - Collections Development Admin' => 'Meeting Minutes - Collections Development Admin',
    ),
    'module' => 'meeting_minutes',
  );

  // Exported permission: 'Edit ISC'.
  $permissions['Edit ISC'] = array(
    'name' => 'Edit ISC',
    'roles' => array(
      'Meeting Minutes - Instructional Services Committee Admin' => 'Meeting Minutes - Instructional Services Committee Admin',
    ),
    'module' => 'meeting_minutes',
  );

  // Exported permission: 'Edit LB'.
  $permissions['Edit LB'] = array(
    'name' => 'Edit LB',
    'roles' => array(
      'Meeting Minutes - Library Board Admin' => 'Meeting Minutes - Library Board Admin',
    ),
    'module' => 'meeting_minutes',
  );

  // Exported permission: 'Edit LCSWG'.
  $permissions['Edit LCSWG'] = array(
    'name' => 'Edit LCSWG',
    'roles' => array(
      'Meeting Minutes - John B. McNair Learning Commons Services Admin' => 'Meeting Minutes - John B. McNair Learning Commons Services Admin',
    ),
    'module' => 'meeting_minutes',
  );

  // Exported permission: 'Edit LMG'.
  $permissions['Edit LMG'] = array(
    'name' => 'Edit LMG',
    'roles' => array(
      'Meeting Minutes - Library Management Group Admin' => 'Meeting Minutes - Library Management Group Admin',
    ),
    'module' => 'meeting_minutes',
  );

  // Exported permission: 'Edit PSC'.
  $permissions['Edit PSC'] = array(
    'name' => 'Edit PSC',
    'roles' => array(
      'Meeting Minutes - Public Service Committee Admin' => 'Meeting Minutes - Public Service Committee Admin',
    ),
    'module' => 'meeting_minutes',
  );

  // Exported permission: 'Edit SAC'.
  $permissions['Edit SAC'] = array(
    'name' => 'Edit SAC',
    'roles' => array(
      'Meeting Minutes - Student Advisory Council Admin' => 'Meeting Minutes - Student Advisory Council Admin',
    ),
    'module' => 'meeting_minutes',
  );

  // Exported permission: 'Edit SLC'.
  $permissions['Edit SLC'] = array(
    'name' => 'Edit SLC',
    'roles' => array(
      'Meeting Minutes - Senate Library Committee Admin' => 'Meeting Minutes - Senate Library Committee Admin',
    ),
    'module' => 'meeting_minutes',
  );

  // Exported permission: 'Edit STDC'.
  $permissions['Edit STDC'] = array(
    'name' => 'Edit STDC',
    'roles' => array(
      'Meeting Minutes - Staff Training & Development Committee Admin' => 'Meeting Minutes - Staff Training & Development Committee Admin',
    ),
    'module' => 'meeting_minutes',
  );

  // Exported permission: 'Edit WERC'.
  $permissions['Edit WERC'] = array(
    'name' => 'Edit WERC',
    'roles' => array(
      'Meeting Minutes - Web & Electronic Resources Committee Admin' => 'Meeting Minutes - Web & Electronic Resources Committee Admin',
    ),
    'module' => 'meeting_minutes',
  );

  // Exported permission: 'Edit WRC'.
  $permissions['Edit WRC'] = array(
    'name' => 'Edit WRC',
    'roles' => array(
      'Meeting Minutes - Website Review Committee Admin' => 'Meeting Minutes - Website Review Committee Admin',
    ),
    'module' => 'meeting_minutes',
  );

  // Exported permission: 'View CD'.
  $permissions['View CD'] = array(
    'name' => 'View CD',
    'roles' => array(
      'Meeting Minutes - Collections Development View' => 'Meeting Minutes - Collections Development View',
      'Regular Staff Member' => 'Regular Staff Member',
    ),
    'module' => 'meeting_minutes',
  );

  // Exported permission: 'View ISC'.
  $permissions['View ISC'] = array(
    'name' => 'View ISC',
    'roles' => array(
      'Meeting Minutes - Instructional Services Committee View' => 'Meeting Minutes - Instructional Services Committee View',
      'Regular Staff Member' => 'Regular Staff Member',
    ),
    'module' => 'meeting_minutes',
  );

  // Exported permission: 'View LB'.
  $permissions['View LB'] = array(
    'name' => 'View LB',
    'roles' => array(
      'Meeting Minutes - Library Board View' => 'Meeting Minutes - Library Board View',
      'Regular Staff Member' => 'Regular Staff Member',
    ),
    'module' => 'meeting_minutes',
  );

  // Exported permission: 'View LCSWG'.
  $permissions['View LCSWG'] = array(
    'name' => 'View LCSWG',
    'roles' => array(
      'Meeting Minutes - John B. McNair Learning Commons Services View' => 'Meeting Minutes - John B. McNair Learning Commons Services View',
      'Regular Staff Member' => 'Regular Staff Member',
    ),
    'module' => 'meeting_minutes',
  );

  // Exported permission: 'View LMG'.
  $permissions['View LMG'] = array(
    'name' => 'View LMG',
    'roles' => array(
      'Meeting Minutes - Library Management Group View' => 'Meeting Minutes - Library Management Group View',
      'Regular Staff Member' => 'Regular Staff Member',
    ),
    'module' => 'meeting_minutes',
  );

  // Exported permission: 'View PSC'.
  $permissions['View PSC'] = array(
    'name' => 'View PSC',
    'roles' => array(
      'Meeting Minutes - Public Service Committee View' => 'Meeting Minutes - Public Service Committee View',
      'Regular Staff Member' => 'Regular Staff Member',
    ),
    'module' => 'meeting_minutes',
  );

  // Exported permission: 'View SAC'.
  $permissions['View SAC'] = array(
    'name' => 'View SAC',
    'roles' => array(
      'Meeting Minutes - Student Advisory Council View' => 'Meeting Minutes - Student Advisory Council View',
      'Regular Staff Member' => 'Regular Staff Member',
    ),
    'module' => 'meeting_minutes',
  );

  // Exported permission: 'View SLC'.
  $permissions['View SLC'] = array(
    'name' => 'View SLC',
    'roles' => array(
      'Meeting Minutes - Senate Library Committee View' => 'Meeting Minutes - Senate Library Committee View',
      'Regular Staff Member' => 'Regular Staff Member',
    ),
    'module' => 'meeting_minutes',
  );

  // Exported permission: 'View STDC'.
  $permissions['View STDC'] = array(
    'name' => 'View STDC',
    'roles' => array(
      'Meeting Minutes - Staff Training & Development Committee View' => 'Meeting Minutes - Staff Training & Development Committee View',
      'Regular Staff Member' => 'Regular Staff Member',
    ),
    'module' => 'meeting_minutes',
  );

  // Exported permission: 'View WERC'.
  $permissions['View WERC'] = array(
    'name' => 'View WERC',
    'roles' => array(
      'Meeting Minutes - Web & Electronic Resources Committee View' => 'Meeting Minutes - Web & Electronic Resources Committee View',
      'Regular Staff Member' => 'Regular Staff Member',
    ),
    'module' => 'meeting_minutes',
  );

  // Exported permission: 'View WRC'.
  $permissions['View WRC'] = array(
    'name' => 'View WRC',
    'roles' => array(
      'Meeting Minutes - Website Review Committee View' => 'Meeting Minutes - Website Review Committee View',
      'Regular Staff Member' => 'Regular Staff Member',
    ),
    'module' => 'meeting_minutes',
  );

  return $permissions;
}
