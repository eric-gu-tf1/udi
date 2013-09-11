<?php

/**
 * Remove contributed modules
 *
 */
function udi_central_module_update_6001() {
  $ret = array();
  $modules = array(
    'customGroupRegistration',
    'acl',
    'content_access',
    'forum_access',
    'bulk_export',
    'stylizer',
    'content_profile',
    'forum',
    'statistics',
    'calendar',
    'calendar_ical',
    'calendar_multiday',    
    'jcalendar',
    'date_repeat',
    'date_locale',
    'date_tools',
    'locale',
    'fb_social_comments',
    'fb_social_share',
    'fb_social_send',
    'notifications_autosubscribe',
    'notifications_content',
    'notifications_custom',
    //'mimemail_compress',
    //'mimemail_action',
    //'mimemail',
    'simplenews',
    'simplenews_action',
    'simplenews_register',    
    'messaging_debug',
    'messaging_mime_mail',
    //'messaging_privatemsg',
    //'messaging_simple',
    //'messaging_sms',
    //'messaging_twitter',
    //'messaging_xmpp',
    //'messaging_mail',
    //'messaging_notify',    
    'og_subgroups',
    'og_panels',
    'og_access',
    'og_actions',
    'og_notifications',
    'og_views',
    'og',
    'advanced_forum',
    'advanced_profile',
    'author_pane',
    'autologout',
    'comment_moderation',
    'node_comment_moderate',
    'ddblock',
    'insert',
    'logintoboggan_rules',
    'logintoboggan',
    'maxlength',
    'mollom',
    'on_the_web',
    'quicktabs',
    'remember_me',
    'user_register_notify',
    'uc_signup',
    'signup_confirm_email',
    'signup_roles',
    'signup',
    'views_cycle',
    'views_slideshow',    
  );
  
  udi_central_module_uninstall_modules($ret, $modules);
  
  return $ret;
}

