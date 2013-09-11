<?php

/**
 * Remove content-types
 *
 */
function udi_central_update_6003() {
  $ret = array();
  $types = array(
    'bulletin',
    'developer',
    'directors',
    'directors_assistants',
    'executive',
    'executive_assistants',
    'event_victoria',
    'government',
    'group',
    'group_content',
    'internal_memo',
    'municipality',
    'meeting_minutes',
    'official_representatives',
    'profile',
    'roster',
    'u40',
    'uprofile',
    'udi_news'
  );
  
  udi_central_uninstall_content($ret, $types, TRUE);
  
  return $ret;
}

