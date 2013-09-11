<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function udi_features_roles_and_permission_user_default_permissions() {
  $permissions = array();

  // Exported permission: Use PHP input for field settings (dangerous - grant with care)
  $permissions['Use PHP input for field settings (dangerous - grant with care)'] = array(
    'name' => 'Use PHP input for field settings (dangerous - grant with care)',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: access administration menu
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: access advanced_blog
  $permissions['access advanced_blog'] = array(
    'name' => 'access advanced_blog',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'board of directors',
      '3' => 'staff',
    ),
  );

  // Exported permission: access all views
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      '0' => 'admin',
      '1' => 'board of directors',
      '2' => 'staff',
    ),
  );

  // Exported permission: access all webform results
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: access backup and migrate
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: access backup files
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: access comments
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'board of directors',
      '4' => 'staff',
    ),
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'board of directors',
      '4' => 'staff',
    ),
  );

  // Exported permission: access news feeds
  $permissions['access news feeds'] = array(
    'name' => 'access news feeds',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: access own webform results
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: access own webform submissions
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: access shopping cart
  $permissions['access shopping cart'] = array(
    'name' => 'access shopping cart',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'staff',
    ),
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: access site-wide contact form
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: access tweetbutton
  $permissions['access tweetbutton'] = array(
    'name' => 'access tweetbutton',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'board of directors',
      '4' => 'staff',
    ),
  );

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      '0' => 'admin',
      '1' => 'board of directors',
      '2' => 'staff',
    ),
  );

  // Exported permission: add blog info to account
  $permissions['add blog info to account'] = array(
    'name' => 'add blog info to account',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer actions
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer advanced pane settings
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer advanced_blog
  $permissions['administer advanced_blog'] = array(
    'name' => 'administer advanced_blog',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: administer attributes
  $permissions['administer attributes'] = array(
    'name' => 'administer attributes',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: administer backup and migrate
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer comments
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: administer conditional actions
  $permissions['administer conditional actions'] = array(
    'name' => 'administer conditional actions',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer credit cards
  $permissions['administer credit cards'] = array(
    'name' => 'administer credit cards',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: administer ctools access ruleset
  $permissions['administer ctools access ruleset'] = array(
    'name' => 'administer ctools access ruleset',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer custom breadcrumbs
  $permissions['administer custom breadcrumbs'] = array(
    'name' => 'administer custom breadcrumbs',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer custom content
  $permissions['administer custom content'] = array(
    'name' => 'administer custom content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer files
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer filters
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer google plusone
  $permissions['administer google plusone'] = array(
    'name' => 'administer google plusone',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer imageapi
  $permissions['administer imageapi'] = array(
    'name' => 'administer imageapi',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer imagecache
  $permissions['administer imagecache'] = array(
    'name' => 'administer imagecache',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer lightbox2
  $permissions['administer lightbox2'] = array(
    'name' => 'administer lightbox2',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer login destination
  $permissions['administer login destination'] = array(
    'name' => 'administer login destination',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer mini panels
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer news feeds
  $permissions['administer news feeds'] = array(
    'name' => 'administer news feeds',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: administer nodequeue
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer order workflow
  $permissions['administer order workflow'] = array(
    'name' => 'administer order workflow',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: administer own product features
  $permissions['administer own product features'] = array(
    'name' => 'administer own product features',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer page manager
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer pane access
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer pane visibility
  $permissions['administer pane visibility'] = array(
    'name' => 'administer pane visibility',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer panel-nodes
  $permissions['administer panel-nodes'] = array(
    'name' => 'administer panel-nodes',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer panels layouts
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer pathauto
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer permissions
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer product attributes
  $permissions['administer product attributes'] = array(
    'name' => 'administer product attributes',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: administer product classes
  $permissions['administer product classes'] = array(
    'name' => 'administer product classes',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer product features
  $permissions['administer product features'] = array(
    'name' => 'administer product features',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer product options
  $permissions['administer product options'] = array(
    'name' => 'administer product options',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: administer product stock
  $permissions['administer product stock'] = array(
    'name' => 'administer product stock',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: administer products
  $permissions['administer products'] = array(
    'name' => 'administer products',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer redirects
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer rules
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer search
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer site-wide contact form
  $permissions['administer site-wide contact form'] = array(
    'name' => 'administer site-wide contact form',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: administer store
  $permissions['administer store'] = array(
    'name' => 'administer store',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: administer string overrides
  $permissions['administer string overrides'] = array(
    'name' => 'administer string overrides',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer taxonomy
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer url aliases
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: administer views
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: cancel own vote
  $permissions['cancel own vote'] = array(
    'name' => 'cancel own vote',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: change own username
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'staff',
    ),
  );

  // Exported permission: configure taxes
  $permissions['configure taxes'] = array(
    'name' => 'configure taxes',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: create annual_report content
  $permissions['create annual_report content'] = array(
    'name' => 'create annual_report content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: create blog entries
  $permissions['create blog entries'] = array(
    'name' => 'create blog entries',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: create career_application content
  $permissions['create career_application content'] = array(
    'name' => 'create career_application content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: create career_posting content
  $permissions['create career_posting content'] = array(
    'name' => 'create career_posting content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'staff',
    ),
  );

  // Exported permission: create chapter content
  $permissions['create chapter content'] = array(
    'name' => 'create chapter content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: create committee content
  $permissions['create committee content'] = array(
    'name' => 'create committee content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: create company content
  $permissions['create company content'] = array(
    'name' => 'create company content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: create event content
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: create event_price_corporate products
  $permissions['create event_price_corporate products'] = array(
    'name' => 'create event_price_corporate products',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: create event_price_member products
  $permissions['create event_price_member products'] = array(
    'name' => 'create event_price_member products',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: create event_price_non_member products
  $permissions['create event_price_non_member products'] = array(
    'name' => 'create event_price_non_member products',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: create file_package content
  $permissions['create file_package content'] = array(
    'name' => 'create file_package content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: create forecast content
  $permissions['create forecast content'] = array(
    'name' => 'create forecast content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: create image content
  $permissions['create image content'] = array(
    'name' => 'create image content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: create mini panels
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: create municipal_document content
  $permissions['create municipal_document content'] = array(
    'name' => 'create municipal_document content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: create orders
  $permissions['create orders'] = array(
    'name' => 'create orders',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: create page content
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: create panel-nodes
  $permissions['create panel-nodes'] = array(
    'name' => 'create panel-nodes',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: create policy_document content
  $permissions['create policy_document content'] = array(
    'name' => 'create policy_document content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: create poll content
  $permissions['create poll content'] = array(
    'name' => 'create poll content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: create presentation content
  $permissions['create presentation content'] = array(
    'name' => 'create presentation content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: create products
  $permissions['create products'] = array(
    'name' => 'create products',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: create properties content
  $permissions['create properties content'] = array(
    'name' => 'create properties content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: create simplenews content
  $permissions['create simplenews content'] = array(
    'name' => 'create simplenews content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: create slideshow_home content
  $permissions['create slideshow_home content'] = array(
    'name' => 'create slideshow_home content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: create slideshow_section content
  $permissions['create slideshow_section content'] = array(
    'name' => 'create slideshow_section content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: create submissions content
  $permissions['create submissions content'] = array(
    'name' => 'create submissions content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: create udi_letters content
  $permissions['create udi_letters content'] = array(
    'name' => 'create udi_letters content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: create webform content
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete all event_price_corporate products
  $permissions['delete all event_price_corporate products'] = array(
    'name' => 'delete all event_price_corporate products',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete all event_price_member products
  $permissions['delete all event_price_member products'] = array(
    'name' => 'delete all event_price_member products',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete all event_price_non_member products
  $permissions['delete all event_price_non_member products'] = array(
    'name' => 'delete all event_price_non_member products',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete all products
  $permissions['delete all products'] = array(
    'name' => 'delete all products',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete all webform submissions
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete any annual_report content
  $permissions['delete any annual_report content'] = array(
    'name' => 'delete any annual_report content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete any blog entry
  $permissions['delete any blog entry'] = array(
    'name' => 'delete any blog entry',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete any career_application content
  $permissions['delete any career_application content'] = array(
    'name' => 'delete any career_application content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete any career_posting content
  $permissions['delete any career_posting content'] = array(
    'name' => 'delete any career_posting content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete any chapter content
  $permissions['delete any chapter content'] = array(
    'name' => 'delete any chapter content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete any committee content
  $permissions['delete any committee content'] = array(
    'name' => 'delete any committee content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete any company content
  $permissions['delete any company content'] = array(
    'name' => 'delete any company content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete any event content
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete any file_package content
  $permissions['delete any file_package content'] = array(
    'name' => 'delete any file_package content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete any forecast content
  $permissions['delete any forecast content'] = array(
    'name' => 'delete any forecast content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete any image content
  $permissions['delete any image content'] = array(
    'name' => 'delete any image content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete any municipal_document content
  $permissions['delete any municipal_document content'] = array(
    'name' => 'delete any municipal_document content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete any page content
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete any panel-nodes
  $permissions['delete any panel-nodes'] = array(
    'name' => 'delete any panel-nodes',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete any policy_document content
  $permissions['delete any policy_document content'] = array(
    'name' => 'delete any policy_document content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete any poll content
  $permissions['delete any poll content'] = array(
    'name' => 'delete any poll content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete any presentation content
  $permissions['delete any presentation content'] = array(
    'name' => 'delete any presentation content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete any properties content
  $permissions['delete any properties content'] = array(
    'name' => 'delete any properties content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete any simplenews content
  $permissions['delete any simplenews content'] = array(
    'name' => 'delete any simplenews content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete any slideshow_home content
  $permissions['delete any slideshow_home content'] = array(
    'name' => 'delete any slideshow_home content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete any slideshow_section content
  $permissions['delete any slideshow_section content'] = array(
    'name' => 'delete any slideshow_section content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete any submissions content
  $permissions['delete any submissions content'] = array(
    'name' => 'delete any submissions content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete any udi_letters content
  $permissions['delete any udi_letters content'] = array(
    'name' => 'delete any udi_letters content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete any webform content
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete backup files
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete orders
  $permissions['delete orders'] = array(
    'name' => 'delete orders',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete own annual_report content
  $permissions['delete own annual_report content'] = array(
    'name' => 'delete own annual_report content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete own blog entries
  $permissions['delete own blog entries'] = array(
    'name' => 'delete own blog entries',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete own career_application content
  $permissions['delete own career_application content'] = array(
    'name' => 'delete own career_application content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: delete own career_posting content
  $permissions['delete own career_posting content'] = array(
    'name' => 'delete own career_posting content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'staff',
    ),
  );

  // Exported permission: delete own chapter content
  $permissions['delete own chapter content'] = array(
    'name' => 'delete own chapter content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete own committee content
  $permissions['delete own committee content'] = array(
    'name' => 'delete own committee content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete own company content
  $permissions['delete own company content'] = array(
    'name' => 'delete own company content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete own event content
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete own event_price_corporate products
  $permissions['delete own event_price_corporate products'] = array(
    'name' => 'delete own event_price_corporate products',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete own event_price_member products
  $permissions['delete own event_price_member products'] = array(
    'name' => 'delete own event_price_member products',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete own event_price_non_member products
  $permissions['delete own event_price_non_member products'] = array(
    'name' => 'delete own event_price_non_member products',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete own file_package content
  $permissions['delete own file_package content'] = array(
    'name' => 'delete own file_package content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete own forecast content
  $permissions['delete own forecast content'] = array(
    'name' => 'delete own forecast content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete own image content
  $permissions['delete own image content'] = array(
    'name' => 'delete own image content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete own municipal_document content
  $permissions['delete own municipal_document content'] = array(
    'name' => 'delete own municipal_document content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete own page content
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete own panel-nodes
  $permissions['delete own panel-nodes'] = array(
    'name' => 'delete own panel-nodes',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete own policy_document content
  $permissions['delete own policy_document content'] = array(
    'name' => 'delete own policy_document content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete own poll content
  $permissions['delete own poll content'] = array(
    'name' => 'delete own poll content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete own presentation content
  $permissions['delete own presentation content'] = array(
    'name' => 'delete own presentation content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete own products
  $permissions['delete own products'] = array(
    'name' => 'delete own products',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete own properties content
  $permissions['delete own properties content'] = array(
    'name' => 'delete own properties content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete own simplenews content
  $permissions['delete own simplenews content'] = array(
    'name' => 'delete own simplenews content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete own slideshow_home content
  $permissions['delete own slideshow_home content'] = array(
    'name' => 'delete own slideshow_home content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete own slideshow_section content
  $permissions['delete own slideshow_section content'] = array(
    'name' => 'delete own slideshow_section content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete own submissions content
  $permissions['delete own submissions content'] = array(
    'name' => 'delete own submissions content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete own udi_letters content
  $permissions['delete own udi_letters content'] = array(
    'name' => 'delete own udi_letters content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete own webform content
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete own webform submissions
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'staff',
    ),
  );

  // Exported permission: delete payments
  $permissions['delete payments'] = array(
    'name' => 'delete payments',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: display drupal links
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: download original image
  $permissions['download original image'] = array(
    'name' => 'download original image',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit all event_price_corporate products
  $permissions['edit all event_price_corporate products'] = array(
    'name' => 'edit all event_price_corporate products',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit all event_price_member products
  $permissions['edit all event_price_member products'] = array(
    'name' => 'edit all event_price_member products',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit all event_price_non_member products
  $permissions['edit all event_price_non_member products'] = array(
    'name' => 'edit all event_price_non_member products',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit all products
  $permissions['edit all products'] = array(
    'name' => 'edit all products',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit all webform submissions
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit any annual_report content
  $permissions['edit any annual_report content'] = array(
    'name' => 'edit any annual_report content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit any blog entry
  $permissions['edit any blog entry'] = array(
    'name' => 'edit any blog entry',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit any career_application content
  $permissions['edit any career_application content'] = array(
    'name' => 'edit any career_application content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit any career_posting content
  $permissions['edit any career_posting content'] = array(
    'name' => 'edit any career_posting content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit any chapter content
  $permissions['edit any chapter content'] = array(
    'name' => 'edit any chapter content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit any committee content
  $permissions['edit any committee content'] = array(
    'name' => 'edit any committee content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit any company content
  $permissions['edit any company content'] = array(
    'name' => 'edit any company content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit any event content
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit any file_package content
  $permissions['edit any file_package content'] = array(
    'name' => 'edit any file_package content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit any forecast content
  $permissions['edit any forecast content'] = array(
    'name' => 'edit any forecast content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit any image content
  $permissions['edit any image content'] = array(
    'name' => 'edit any image content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit any municipal_document content
  $permissions['edit any municipal_document content'] = array(
    'name' => 'edit any municipal_document content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit any page content
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit any panel-nodes
  $permissions['edit any panel-nodes'] = array(
    'name' => 'edit any panel-nodes',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit any policy_document content
  $permissions['edit any policy_document content'] = array(
    'name' => 'edit any policy_document content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit any poll content
  $permissions['edit any poll content'] = array(
    'name' => 'edit any poll content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit any presentation content
  $permissions['edit any presentation content'] = array(
    'name' => 'edit any presentation content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit any properties content
  $permissions['edit any properties content'] = array(
    'name' => 'edit any properties content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit any simplenews content
  $permissions['edit any simplenews content'] = array(
    'name' => 'edit any simplenews content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit any slideshow_home content
  $permissions['edit any slideshow_home content'] = array(
    'name' => 'edit any slideshow_home content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit any slideshow_section content
  $permissions['edit any slideshow_section content'] = array(
    'name' => 'edit any slideshow_section content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit any submissions content
  $permissions['edit any submissions content'] = array(
    'name' => 'edit any submissions content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit any udi_letters content
  $permissions['edit any udi_letters content'] = array(
    'name' => 'edit any udi_letters content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit any webform content
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit event gallery
  $permissions['edit event gallery'] = array(
    'name' => 'edit event gallery',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit event video
  $permissions['edit event video'] = array(
    'name' => 'edit event video',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_blog_image
  $permissions['edit field_blog_image'] = array(
    'name' => 'edit field_blog_image',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_career_posting
  $permissions['edit field_career_posting'] = array(
    'name' => 'edit field_career_posting',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: edit field_chapter_page
  $permissions['edit field_chapter_page'] = array(
    'name' => 'edit field_chapter_page',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_chapter_region
  $permissions['edit field_chapter_region'] = array(
    'name' => 'edit field_chapter_region',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_close_date
  $permissions['edit field_close_date'] = array(
    'name' => 'edit field_close_date',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'staff',
    ),
  );

  // Exported permission: edit field_company
  $permissions['edit field_company'] = array(
    'name' => 'edit field_company',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'staff',
    ),
  );

  // Exported permission: edit field_company_sponsor_patron
  $permissions['edit field_company_sponsor_patron'] = array(
    'name' => 'edit field_company_sponsor_patron',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_contact
  $permissions['edit field_contact'] = array(
    'name' => 'edit field_contact',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_director
  $permissions['edit field_director'] = array(
    'name' => 'edit field_director',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_email
  $permissions['edit field_email'] = array(
    'name' => 'edit field_email',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: edit field_event_gallery
  $permissions['edit field_event_gallery'] = array(
    'name' => 'edit field_event_gallery',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_event_image
  $permissions['edit field_event_image'] = array(
    'name' => 'edit field_event_image',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_event_location
  $permissions['edit field_event_location'] = array(
    'name' => 'edit field_event_location',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_event_price_weight
  $permissions['edit field_event_price_weight'] = array(
    'name' => 'edit field_event_price_weight',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_event_seats
  $permissions['edit field_event_seats'] = array(
    'name' => 'edit field_event_seats',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_events_files_presentation
  $permissions['edit field_events_files_presentation'] = array(
    'name' => 'edit field_events_files_presentation',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_events_videos
  $permissions['edit field_events_videos'] = array(
    'name' => 'edit field_events_videos',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_fax
  $permissions['edit field_fax'] = array(
    'name' => 'edit field_fax',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_file_package_files
  $permissions['edit field_file_package_files'] = array(
    'name' => 'edit field_file_package_files',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_file_upload_advanced
  $permissions['edit field_file_upload_advanced'] = array(
    'name' => 'edit field_file_upload_advanced',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_files_package_date
  $permissions['edit field_files_package_date'] = array(
    'name' => 'edit field_files_package_date',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_forecast
  $permissions['edit field_forecast'] = array(
    'name' => 'edit field_forecast',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_general_link
  $permissions['edit field_general_link'] = array(
    'name' => 'edit field_general_link',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_image
  $permissions['edit field_image'] = array(
    'name' => 'edit field_image',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_image_cache
  $permissions['edit field_image_cache'] = array(
    'name' => 'edit field_image_cache',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_job
  $permissions['edit field_job'] = array(
    'name' => 'edit field_job',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_logo
  $permissions['edit field_logo'] = array(
    'name' => 'edit field_logo',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_media_release_links
  $permissions['edit field_media_release_links'] = array(
    'name' => 'edit field_media_release_links',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_member
  $permissions['edit field_member'] = array(
    'name' => 'edit field_member',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_news_date
  $permissions['edit field_news_date'] = array(
    'name' => 'edit field_news_date',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_news_image
  $permissions['edit field_news_image'] = array(
    'name' => 'edit field_news_image',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_news_item_file
  $permissions['edit field_news_item_file'] = array(
    'name' => 'edit field_news_item_file',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_node_link
  $permissions['edit field_node_link'] = array(
    'name' => 'edit field_node_link',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_office_hours
  $permissions['edit field_office_hours'] = array(
    'name' => 'edit field_office_hours',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_policy_file
  $permissions['edit field_policy_file'] = array(
    'name' => 'edit field_policy_file',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_presentation_file
  $permissions['edit field_presentation_file'] = array(
    'name' => 'edit field_presentation_file',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_press_release_file
  $permissions['edit field_press_release_file'] = array(
    'name' => 'edit field_press_release_file',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_press_release_image
  $permissions['edit field_press_release_image'] = array(
    'name' => 'edit field_press_release_image',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_price_to_event_ref
  $permissions['edit field_price_to_event_ref'] = array(
    'name' => 'edit field_price_to_event_ref',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit field_report
  $permissions['edit field_report'] = array(
    'name' => 'edit field_report',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_resume
  $permissions['edit field_resume'] = array(
    'name' => 'edit field_resume',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: edit field_salary
  $permissions['edit field_salary'] = array(
    'name' => 'edit field_salary',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: edit field_slideshow_image_home_full
  $permissions['edit field_slideshow_image_home_full'] = array(
    'name' => 'edit field_slideshow_image_home_full',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_slideshow_image_sect_full
  $permissions['edit field_slideshow_image_sect_full'] = array(
    'name' => 'edit field_slideshow_image_sect_full',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_slideshow_learn_link
  $permissions['edit field_slideshow_learn_link'] = array(
    'name' => 'edit field_slideshow_learn_link',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_slideshow_learn_noderef
  $permissions['edit field_slideshow_learn_noderef'] = array(
    'name' => 'edit field_slideshow_learn_noderef',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_slideshow_sect_page_url
  $permissions['edit field_slideshow_sect_page_url'] = array(
    'name' => 'edit field_slideshow_sect_page_url',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_slideshow_weight
  $permissions['edit field_slideshow_weight'] = array(
    'name' => 'edit field_slideshow_weight',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_sponsor
  $permissions['edit field_sponsor'] = array(
    'name' => 'edit field_sponsor',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit field_telephone
  $permissions['edit field_telephone'] = array(
    'name' => 'edit field_telephone',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: edit field_time
  $permissions['edit field_time'] = array(
    'name' => 'edit field_time',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: edit field_website
  $permissions['edit field_website'] = array(
    'name' => 'edit field_website',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit orders
  $permissions['edit orders'] = array(
    'name' => 'edit orders',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit own annual_report content
  $permissions['edit own annual_report content'] = array(
    'name' => 'edit own annual_report content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit own blog entries
  $permissions['edit own blog entries'] = array(
    'name' => 'edit own blog entries',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit own career_application content
  $permissions['edit own career_application content'] = array(
    'name' => 'edit own career_application content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: edit own career_posting content
  $permissions['edit own career_posting content'] = array(
    'name' => 'edit own career_posting content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'staff',
    ),
  );

  // Exported permission: edit own chapter content
  $permissions['edit own chapter content'] = array(
    'name' => 'edit own chapter content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit own committee content
  $permissions['edit own committee content'] = array(
    'name' => 'edit own committee content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit own company content
  $permissions['edit own company content'] = array(
    'name' => 'edit own company content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit own event content
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit own event_price_corporate products
  $permissions['edit own event_price_corporate products'] = array(
    'name' => 'edit own event_price_corporate products',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit own event_price_member products
  $permissions['edit own event_price_member products'] = array(
    'name' => 'edit own event_price_member products',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit own event_price_non_member products
  $permissions['edit own event_price_non_member products'] = array(
    'name' => 'edit own event_price_non_member products',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit own file_package content
  $permissions['edit own file_package content'] = array(
    'name' => 'edit own file_package content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit own forecast content
  $permissions['edit own forecast content'] = array(
    'name' => 'edit own forecast content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit own image content
  $permissions['edit own image content'] = array(
    'name' => 'edit own image content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit own municipal_document content
  $permissions['edit own municipal_document content'] = array(
    'name' => 'edit own municipal_document content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit own page content
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit own panel-nodes
  $permissions['edit own panel-nodes'] = array(
    'name' => 'edit own panel-nodes',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit own policy_document content
  $permissions['edit own policy_document content'] = array(
    'name' => 'edit own policy_document content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit own poll content
  $permissions['edit own poll content'] = array(
    'name' => 'edit own poll content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit own presentation content
  $permissions['edit own presentation content'] = array(
    'name' => 'edit own presentation content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit own products
  $permissions['edit own products'] = array(
    'name' => 'edit own products',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit own properties content
  $permissions['edit own properties content'] = array(
    'name' => 'edit own properties content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit own simplenews content
  $permissions['edit own simplenews content'] = array(
    'name' => 'edit own simplenews content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit own slideshow_home content
  $permissions['edit own slideshow_home content'] = array(
    'name' => 'edit own slideshow_home content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit own slideshow_section content
  $permissions['edit own slideshow_section content'] = array(
    'name' => 'edit own slideshow_section content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit own submissions content
  $permissions['edit own submissions content'] = array(
    'name' => 'edit own submissions content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit own udi_letters content
  $permissions['edit own udi_letters content'] = array(
    'name' => 'edit own udi_letters content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit own webform content
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit own webform submissions
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'staff',
    ),
  );

  // Exported permission: flush imagecache
  $permissions['flush imagecache'] = array(
    'name' => 'flush imagecache',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: inspect all votes
  $permissions['inspect all votes'] = array(
    'name' => 'inspect all votes',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: manipulate all queues
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: manipulate queues
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: manual payments
  $permissions['manual payments'] = array(
    'name' => 'manual payments',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: notify of path changes
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: perform backup
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: post comments
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'board of directors',
    ),
  );

  // Exported permission: post comments without approval
  $permissions['post comments without approval'] = array(
    'name' => 'post comments without approval',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: process credit cards
  $permissions['process credit cards'] = array(
    'name' => 'process credit cards',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish any annual_report content
  $permissions['publish any annual_report content'] = array(
    'name' => 'publish any annual_report content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish any blog content
  $permissions['publish any blog content'] = array(
    'name' => 'publish any blog content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish any career_application content
  $permissions['publish any career_application content'] = array(
    'name' => 'publish any career_application content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish any career_posting content
  $permissions['publish any career_posting content'] = array(
    'name' => 'publish any career_posting content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish any chapter content
  $permissions['publish any chapter content'] = array(
    'name' => 'publish any chapter content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish any committee content
  $permissions['publish any committee content'] = array(
    'name' => 'publish any committee content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish any company content
  $permissions['publish any company content'] = array(
    'name' => 'publish any company content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish any content
  $permissions['publish any content'] = array(
    'name' => 'publish any content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish any event content
  $permissions['publish any event content'] = array(
    'name' => 'publish any event content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish any event_okanagan content
  $permissions['publish any event_okanagan content'] = array(
    'name' => 'publish any event_okanagan content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: publish any event_price_corporate content
  $permissions['publish any event_price_corporate content'] = array(
    'name' => 'publish any event_price_corporate content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: publish any event_price_member content
  $permissions['publish any event_price_member content'] = array(
    'name' => 'publish any event_price_member content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: publish any event_price_non_member content
  $permissions['publish any event_price_non_member content'] = array(
    'name' => 'publish any event_price_non_member content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: publish any event_vancouver content
  $permissions['publish any event_vancouver content'] = array(
    'name' => 'publish any event_vancouver content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: publish any file_package content
  $permissions['publish any file_package content'] = array(
    'name' => 'publish any file_package content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish any forecast content
  $permissions['publish any forecast content'] = array(
    'name' => 'publish any forecast content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish any image content
  $permissions['publish any image content'] = array(
    'name' => 'publish any image content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: publish any municipal_document content
  $permissions['publish any municipal_document content'] = array(
    'name' => 'publish any municipal_document content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish any page content
  $permissions['publish any page content'] = array(
    'name' => 'publish any page content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish any panel content
  $permissions['publish any panel content'] = array(
    'name' => 'publish any panel content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: publish any policy_document content
  $permissions['publish any policy_document content'] = array(
    'name' => 'publish any policy_document content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish any poll content
  $permissions['publish any poll content'] = array(
    'name' => 'publish any poll content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish any presentation content
  $permissions['publish any presentation content'] = array(
    'name' => 'publish any presentation content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish any product content
  $permissions['publish any product content'] = array(
    'name' => 'publish any product content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish any properties content
  $permissions['publish any properties content'] = array(
    'name' => 'publish any properties content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish any simplenews content
  $permissions['publish any simplenews content'] = array(
    'name' => 'publish any simplenews content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish any slideshow_home content
  $permissions['publish any slideshow_home content'] = array(
    'name' => 'publish any slideshow_home content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish any slideshow_section content
  $permissions['publish any slideshow_section content'] = array(
    'name' => 'publish any slideshow_section content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish any submissions content
  $permissions['publish any submissions content'] = array(
    'name' => 'publish any submissions content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish any udi_letters content
  $permissions['publish any udi_letters content'] = array(
    'name' => 'publish any udi_letters content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish any webform content
  $permissions['publish any webform content'] = array(
    'name' => 'publish any webform content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own annual_report content
  $permissions['publish own annual_report content'] = array(
    'name' => 'publish own annual_report content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own blog content
  $permissions['publish own blog content'] = array(
    'name' => 'publish own blog content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own career_application content
  $permissions['publish own career_application content'] = array(
    'name' => 'publish own career_application content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own career_posting content
  $permissions['publish own career_posting content'] = array(
    'name' => 'publish own career_posting content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own chapter content
  $permissions['publish own chapter content'] = array(
    'name' => 'publish own chapter content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own committee content
  $permissions['publish own committee content'] = array(
    'name' => 'publish own committee content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own company content
  $permissions['publish own company content'] = array(
    'name' => 'publish own company content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own event content
  $permissions['publish own event content'] = array(
    'name' => 'publish own event content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own event_okanagan content
  $permissions['publish own event_okanagan content'] = array(
    'name' => 'publish own event_okanagan content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own event_price_corporate content
  $permissions['publish own event_price_corporate content'] = array(
    'name' => 'publish own event_price_corporate content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own event_price_member content
  $permissions['publish own event_price_member content'] = array(
    'name' => 'publish own event_price_member content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own event_price_non_member content
  $permissions['publish own event_price_non_member content'] = array(
    'name' => 'publish own event_price_non_member content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own event_vancouver content
  $permissions['publish own event_vancouver content'] = array(
    'name' => 'publish own event_vancouver content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own file_package content
  $permissions['publish own file_package content'] = array(
    'name' => 'publish own file_package content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own forecast content
  $permissions['publish own forecast content'] = array(
    'name' => 'publish own forecast content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own image content
  $permissions['publish own image content'] = array(
    'name' => 'publish own image content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own municipal_document content
  $permissions['publish own municipal_document content'] = array(
    'name' => 'publish own municipal_document content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own page content
  $permissions['publish own page content'] = array(
    'name' => 'publish own page content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own panel content
  $permissions['publish own panel content'] = array(
    'name' => 'publish own panel content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: publish own policy_document content
  $permissions['publish own policy_document content'] = array(
    'name' => 'publish own policy_document content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own poll content
  $permissions['publish own poll content'] = array(
    'name' => 'publish own poll content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own presentation content
  $permissions['publish own presentation content'] = array(
    'name' => 'publish own presentation content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own product content
  $permissions['publish own product content'] = array(
    'name' => 'publish own product content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own properties content
  $permissions['publish own properties content'] = array(
    'name' => 'publish own properties content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own simplenews content
  $permissions['publish own simplenews content'] = array(
    'name' => 'publish own simplenews content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own slideshow_home content
  $permissions['publish own slideshow_home content'] = array(
    'name' => 'publish own slideshow_home content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own slideshow_section content
  $permissions['publish own slideshow_section content'] = array(
    'name' => 'publish own slideshow_section content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own submissions content
  $permissions['publish own submissions content'] = array(
    'name' => 'publish own submissions content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own udi_letters content
  $permissions['publish own udi_letters content'] = array(
    'name' => 'publish own udi_letters content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: publish own webform content
  $permissions['publish own webform content'] = array(
    'name' => 'publish own webform content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: restore from backup
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: search content
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'board of directors',
      '4' => 'staff',
    ),
  );

  // Exported permission: select different theme
  $permissions['select different theme'] = array(
    'name' => 'select different theme',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: unconditionally delete orders
  $permissions['unconditionally delete orders'] = array(
    'name' => 'unconditionally delete orders',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: unpublish any annual_report content
  $permissions['unpublish any annual_report content'] = array(
    'name' => 'unpublish any annual_report content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish any blog content
  $permissions['unpublish any blog content'] = array(
    'name' => 'unpublish any blog content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish any career_application content
  $permissions['unpublish any career_application content'] = array(
    'name' => 'unpublish any career_application content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish any career_posting content
  $permissions['unpublish any career_posting content'] = array(
    'name' => 'unpublish any career_posting content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish any chapter content
  $permissions['unpublish any chapter content'] = array(
    'name' => 'unpublish any chapter content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish any committee content
  $permissions['unpublish any committee content'] = array(
    'name' => 'unpublish any committee content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish any company content
  $permissions['unpublish any company content'] = array(
    'name' => 'unpublish any company content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish any content
  $permissions['unpublish any content'] = array(
    'name' => 'unpublish any content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish any event content
  $permissions['unpublish any event content'] = array(
    'name' => 'unpublish any event content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish any event_okanagan content
  $permissions['unpublish any event_okanagan content'] = array(
    'name' => 'unpublish any event_okanagan content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: unpublish any event_price_corporate content
  $permissions['unpublish any event_price_corporate content'] = array(
    'name' => 'unpublish any event_price_corporate content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: unpublish any event_price_member content
  $permissions['unpublish any event_price_member content'] = array(
    'name' => 'unpublish any event_price_member content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: unpublish any event_price_non_member content
  $permissions['unpublish any event_price_non_member content'] = array(
    'name' => 'unpublish any event_price_non_member content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: unpublish any event_vancouver content
  $permissions['unpublish any event_vancouver content'] = array(
    'name' => 'unpublish any event_vancouver content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: unpublish any file_package content
  $permissions['unpublish any file_package content'] = array(
    'name' => 'unpublish any file_package content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish any forecast content
  $permissions['unpublish any forecast content'] = array(
    'name' => 'unpublish any forecast content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish any image content
  $permissions['unpublish any image content'] = array(
    'name' => 'unpublish any image content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: unpublish any municipal_document content
  $permissions['unpublish any municipal_document content'] = array(
    'name' => 'unpublish any municipal_document content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish any page content
  $permissions['unpublish any page content'] = array(
    'name' => 'unpublish any page content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish any panel content
  $permissions['unpublish any panel content'] = array(
    'name' => 'unpublish any panel content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: unpublish any policy_document content
  $permissions['unpublish any policy_document content'] = array(
    'name' => 'unpublish any policy_document content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish any poll content
  $permissions['unpublish any poll content'] = array(
    'name' => 'unpublish any poll content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish any presentation content
  $permissions['unpublish any presentation content'] = array(
    'name' => 'unpublish any presentation content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish any product content
  $permissions['unpublish any product content'] = array(
    'name' => 'unpublish any product content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish any properties content
  $permissions['unpublish any properties content'] = array(
    'name' => 'unpublish any properties content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish any simplenews content
  $permissions['unpublish any simplenews content'] = array(
    'name' => 'unpublish any simplenews content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish any slideshow_home content
  $permissions['unpublish any slideshow_home content'] = array(
    'name' => 'unpublish any slideshow_home content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish any slideshow_section content
  $permissions['unpublish any slideshow_section content'] = array(
    'name' => 'unpublish any slideshow_section content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish any submissions content
  $permissions['unpublish any submissions content'] = array(
    'name' => 'unpublish any submissions content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish any udi_letters content
  $permissions['unpublish any udi_letters content'] = array(
    'name' => 'unpublish any udi_letters content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish any webform content
  $permissions['unpublish any webform content'] = array(
    'name' => 'unpublish any webform content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own annual_report content
  $permissions['unpublish own annual_report content'] = array(
    'name' => 'unpublish own annual_report content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own blog content
  $permissions['unpublish own blog content'] = array(
    'name' => 'unpublish own blog content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own career_application content
  $permissions['unpublish own career_application content'] = array(
    'name' => 'unpublish own career_application content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own career_posting content
  $permissions['unpublish own career_posting content'] = array(
    'name' => 'unpublish own career_posting content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own chapter content
  $permissions['unpublish own chapter content'] = array(
    'name' => 'unpublish own chapter content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own committee content
  $permissions['unpublish own committee content'] = array(
    'name' => 'unpublish own committee content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own company content
  $permissions['unpublish own company content'] = array(
    'name' => 'unpublish own company content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own event content
  $permissions['unpublish own event content'] = array(
    'name' => 'unpublish own event content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own event_okanagan content
  $permissions['unpublish own event_okanagan content'] = array(
    'name' => 'unpublish own event_okanagan content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own event_price_corporate content
  $permissions['unpublish own event_price_corporate content'] = array(
    'name' => 'unpublish own event_price_corporate content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own event_price_member content
  $permissions['unpublish own event_price_member content'] = array(
    'name' => 'unpublish own event_price_member content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own event_price_non_member content
  $permissions['unpublish own event_price_non_member content'] = array(
    'name' => 'unpublish own event_price_non_member content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own event_vancouver content
  $permissions['unpublish own event_vancouver content'] = array(
    'name' => 'unpublish own event_vancouver content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own file_package content
  $permissions['unpublish own file_package content'] = array(
    'name' => 'unpublish own file_package content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own forecast content
  $permissions['unpublish own forecast content'] = array(
    'name' => 'unpublish own forecast content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own image content
  $permissions['unpublish own image content'] = array(
    'name' => 'unpublish own image content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own municipal_document content
  $permissions['unpublish own municipal_document content'] = array(
    'name' => 'unpublish own municipal_document content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own page content
  $permissions['unpublish own page content'] = array(
    'name' => 'unpublish own page content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own panel content
  $permissions['unpublish own panel content'] = array(
    'name' => 'unpublish own panel content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: unpublish own policy_document content
  $permissions['unpublish own policy_document content'] = array(
    'name' => 'unpublish own policy_document content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own poll content
  $permissions['unpublish own poll content'] = array(
    'name' => 'unpublish own poll content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own presentation content
  $permissions['unpublish own presentation content'] = array(
    'name' => 'unpublish own presentation content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own product content
  $permissions['unpublish own product content'] = array(
    'name' => 'unpublish own product content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own properties content
  $permissions['unpublish own properties content'] = array(
    'name' => 'unpublish own properties content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own simplenews content
  $permissions['unpublish own simplenews content'] = array(
    'name' => 'unpublish own simplenews content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own slideshow_home content
  $permissions['unpublish own slideshow_home content'] = array(
    'name' => 'unpublish own slideshow_home content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own slideshow_section content
  $permissions['unpublish own slideshow_section content'] = array(
    'name' => 'unpublish own slideshow_section content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own submissions content
  $permissions['unpublish own submissions content'] = array(
    'name' => 'unpublish own submissions content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own udi_letters content
  $permissions['unpublish own udi_letters content'] = array(
    'name' => 'unpublish own udi_letters content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: unpublish own webform content
  $permissions['unpublish own webform content'] = array(
    'name' => 'unpublish own webform content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: upload files
  $permissions['upload files'] = array(
    'name' => 'upload files',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: use PHP for block visibility
  $permissions['use PHP for block visibility'] = array(
    'name' => 'use PHP for block visibility',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: use advanced search
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: use page manager
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: use panels caching features
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: use panels dashboard
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: use panels in place editing
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: use php in custom breadcrumbs
  $permissions['use php in custom breadcrumbs'] = array(
    'name' => 'use php in custom breadcrumbs',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: view advanced help index
  $permissions['view advanced help index'] = array(
    'name' => 'view advanced help index',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: view advanced help popup
  $permissions['view advanced help popup'] = array(
    'name' => 'view advanced help popup',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: view advanced help topic
  $permissions['view advanced help topic'] = array(
    'name' => 'view advanced help topic',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: view all orders
  $permissions['view all orders'] = array(
    'name' => 'view all orders',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: view all panes
  $permissions['view all panes'] = array(
    'name' => 'view all panes',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: view cc details
  $permissions['view cc details'] = array(
    'name' => 'view cc details',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: view cc numbers
  $permissions['view cc numbers'] = array(
    'name' => 'view cc numbers',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: view customers
  $permissions['view customers'] = array(
    'name' => 'view customers',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: view date repeats
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: view field_blog_image
  $permissions['view field_blog_image'] = array(
    'name' => 'view field_blog_image',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_career_posting
  $permissions['view field_career_posting'] = array(
    'name' => 'view field_career_posting',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_chapter_page
  $permissions['view field_chapter_page'] = array(
    'name' => 'view field_chapter_page',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_chapter_region
  $permissions['view field_chapter_region'] = array(
    'name' => 'view field_chapter_region',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_close_date
  $permissions['view field_close_date'] = array(
    'name' => 'view field_close_date',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_company
  $permissions['view field_company'] = array(
    'name' => 'view field_company',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_company_sponsor_patron
  $permissions['view field_company_sponsor_patron'] = array(
    'name' => 'view field_company_sponsor_patron',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: view field_contact
  $permissions['view field_contact'] = array(
    'name' => 'view field_contact',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_director
  $permissions['view field_director'] = array(
    'name' => 'view field_director',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_email
  $permissions['view field_email'] = array(
    'name' => 'view field_email',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_event_gallery
  $permissions['view field_event_gallery'] = array(
    'name' => 'view field_event_gallery',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_event_image
  $permissions['view field_event_image'] = array(
    'name' => 'view field_event_image',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_event_location
  $permissions['view field_event_location'] = array(
    'name' => 'view field_event_location',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_event_price_weight
  $permissions['view field_event_price_weight'] = array(
    'name' => 'view field_event_price_weight',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: view field_event_seats
  $permissions['view field_event_seats'] = array(
    'name' => 'view field_event_seats',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: view field_events_files_presentation
  $permissions['view field_events_files_presentation'] = array(
    'name' => 'view field_events_files_presentation',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'board of directors',
      '4' => 'staff',
    ),
  );

  // Exported permission: view field_events_videos
  $permissions['view field_events_videos'] = array(
    'name' => 'view field_events_videos',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'board of directors',
      '4' => 'staff',
    ),
  );

  // Exported permission: view field_fax
  $permissions['view field_fax'] = array(
    'name' => 'view field_fax',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_file_package_files
  $permissions['view field_file_package_files'] = array(
    'name' => 'view field_file_package_files',
    'roles' => array(
      '0' => 'admin',
      '1' => 'board of directors',
      '2' => 'staff',
    ),
  );

  // Exported permission: view field_file_upload_advanced
  $permissions['view field_file_upload_advanced'] = array(
    'name' => 'view field_file_upload_advanced',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'board of directors',
      '4' => 'staff',
    ),
  );

  // Exported permission: view field_files_package_date
  $permissions['view field_files_package_date'] = array(
    'name' => 'view field_files_package_date',
    'roles' => array(
      '0' => 'admin',
      '1' => 'board of directors',
      '2' => 'staff',
    ),
  );

  // Exported permission: view field_forecast
  $permissions['view field_forecast'] = array(
    'name' => 'view field_forecast',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_general_link
  $permissions['view field_general_link'] = array(
    'name' => 'view field_general_link',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_image
  $permissions['view field_image'] = array(
    'name' => 'view field_image',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_image_cache
  $permissions['view field_image_cache'] = array(
    'name' => 'view field_image_cache',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_job
  $permissions['view field_job'] = array(
    'name' => 'view field_job',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_logo
  $permissions['view field_logo'] = array(
    'name' => 'view field_logo',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_media_release_links
  $permissions['view field_media_release_links'] = array(
    'name' => 'view field_media_release_links',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_member
  $permissions['view field_member'] = array(
    'name' => 'view field_member',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: view field_news_date
  $permissions['view field_news_date'] = array(
    'name' => 'view field_news_date',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_news_image
  $permissions['view field_news_image'] = array(
    'name' => 'view field_news_image',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_news_item_file
  $permissions['view field_news_item_file'] = array(
    'name' => 'view field_news_item_file',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_node_link
  $permissions['view field_node_link'] = array(
    'name' => 'view field_node_link',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_office_hours
  $permissions['view field_office_hours'] = array(
    'name' => 'view field_office_hours',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_policy_file
  $permissions['view field_policy_file'] = array(
    'name' => 'view field_policy_file',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_presentation_file
  $permissions['view field_presentation_file'] = array(
    'name' => 'view field_presentation_file',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_press_release_file
  $permissions['view field_press_release_file'] = array(
    'name' => 'view field_press_release_file',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_press_release_image
  $permissions['view field_press_release_image'] = array(
    'name' => 'view field_press_release_image',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_price_to_event_ref
  $permissions['view field_price_to_event_ref'] = array(
    'name' => 'view field_price_to_event_ref',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: view field_report
  $permissions['view field_report'] = array(
    'name' => 'view field_report',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_resume
  $permissions['view field_resume'] = array(
    'name' => 'view field_resume',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_salary
  $permissions['view field_salary'] = array(
    'name' => 'view field_salary',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_slideshow_image_home_full
  $permissions['view field_slideshow_image_home_full'] = array(
    'name' => 'view field_slideshow_image_home_full',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_slideshow_image_sect_full
  $permissions['view field_slideshow_image_sect_full'] = array(
    'name' => 'view field_slideshow_image_sect_full',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_slideshow_learn_link
  $permissions['view field_slideshow_learn_link'] = array(
    'name' => 'view field_slideshow_learn_link',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_slideshow_learn_noderef
  $permissions['view field_slideshow_learn_noderef'] = array(
    'name' => 'view field_slideshow_learn_noderef',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: view field_slideshow_sect_page_url
  $permissions['view field_slideshow_sect_page_url'] = array(
    'name' => 'view field_slideshow_sect_page_url',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_slideshow_weight
  $permissions['view field_slideshow_weight'] = array(
    'name' => 'view field_slideshow_weight',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: view field_sponsor
  $permissions['view field_sponsor'] = array(
    'name' => 'view field_sponsor',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_telephone
  $permissions['view field_telephone'] = array(
    'name' => 'view field_telephone',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_time
  $permissions['view field_time'] = array(
    'name' => 'view field_time',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_website
  $permissions['view field_website'] = array(
    'name' => 'view field_website',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'staff',
    ),
  );

  // Exported permission: view google plusone
  $permissions['view google plusone'] = array(
    'name' => 'view google plusone',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'board of directors',
      '4' => 'staff',
    ),
  );

  // Exported permission: view imagecache blog_image_small
  $permissions['view imagecache blog_image_small'] = array(
    'name' => 'view imagecache blog_image_small',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'board of directors',
      '3' => 'staff',
    ),
  );

  // Exported permission: view imagecache cart
  $permissions['view imagecache cart'] = array(
    'name' => 'view imagecache cart',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache company_logo
  $permissions['view imagecache company_logo'] = array(
    'name' => 'view imagecache company_logo',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: view imagecache events_gallery_full
  $permissions['view imagecache events_gallery_full'] = array(
    'name' => 'view imagecache events_gallery_full',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'board of directors',
      '3' => 'staff',
    ),
  );

  // Exported permission: view imagecache events_gallery_thumb
  $permissions['view imagecache events_gallery_thumb'] = array(
    'name' => 'view imagecache events_gallery_thumb',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'board of directors',
      '3' => 'staff',
    ),
  );

  // Exported permission: view imagecache events_logo_wide
  $permissions['view imagecache events_logo_wide'] = array(
    'name' => 'view imagecache events_logo_wide',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'board of directors',
      '3' => 'staff',
    ),
  );

  // Exported permission: view imagecache logo_company_normal
  $permissions['view imagecache logo_company_normal'] = array(
    'name' => 'view imagecache logo_company_normal',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'board of directors',
      '3' => 'staff',
    ),
  );

  // Exported permission: view imagecache municipality_logo
  $permissions['view imagecache municipality_logo'] = array(
    'name' => 'view imagecache municipality_logo',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: view imagecache news_image
  $permissions['view imagecache news_image'] = array(
    'name' => 'view imagecache news_image',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: view imagecache news_image_thumbnail
  $permissions['view imagecache news_image_thumbnail'] = array(
    'name' => 'view imagecache news_image_thumbnail',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: view imagecache page_image_normal
  $permissions['view imagecache page_image_normal'] = array(
    'name' => 'view imagecache page_image_normal',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'board of directors',
      '3' => 'staff',
    ),
  );

  // Exported permission: view imagecache product
  $permissions['view imagecache product'] = array(
    'name' => 'view imagecache product',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: view imagecache product_full
  $permissions['view imagecache product_full'] = array(
    'name' => 'view imagecache product_full',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: view imagecache product_list
  $permissions['view imagecache product_list'] = array(
    'name' => 'view imagecache product_list',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: view imagecache slideshow_section_large
  $permissions['view imagecache slideshow_section_large'] = array(
    'name' => 'view imagecache slideshow_section_large',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'board of directors',
      '3' => 'staff',
    ),
  );

  // Exported permission: view imagecache slideshow_section_norm
  $permissions['view imagecache slideshow_section_norm'] = array(
    'name' => 'view imagecache slideshow_section_norm',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'board of directors',
      '3' => 'staff',
    ),
  );

  // Exported permission: view imagecache uc_thumbnail
  $permissions['view imagecache uc_thumbnail'] = array(
    'name' => 'view imagecache uc_thumbnail',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: view own orders
  $permissions['view own orders'] = array(
    'name' => 'view own orders',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view pane admin links
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: view payments
  $permissions['view payments'] = array(
    'name' => 'view payments',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: view reports
  $permissions['view reports'] = array(
    'name' => 'view reports',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: view store reports
  $permissions['view store reports'] = array(
    'name' => 'view store reports',
    'roles' => array(
      '0' => 'admin',
      '1' => 'staff',
    ),
  );

  // Exported permission: view uploaded files
  $permissions['view uploaded files'] = array(
    'name' => 'view uploaded files',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'board of directors',
      '4' => 'staff',
    ),
  );

  // Exported permission: vote on polls
  $permissions['vote on polls'] = array(
    'name' => 'vote on polls',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'board of directors',
    ),
  );

  return $permissions;
}
