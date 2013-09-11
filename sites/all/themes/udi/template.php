<?php
// $Id: template.php,v 1.21 2009/08/12 04:25:15 johnalbin Exp $

/**
 * @file
 * Contains theme override functions and preprocess functions for the theme.
 *
 * ABOUT THE TEMPLATE.PHP FILE
 *
 *   The template.php file is one of the most useful files when creating or
 *   modifying Drupal themes. You can add new regions for block content, modify
 *   or override Drupal's theme functions, intercept or make additional
 *   variables available to your theme, and create custom PHP logic. For more
 *   information, please visit the Theme Developer's Guide on Drupal.org:
 *   http://drupal.org/theme-guide
 *
 * OVERRIDING THEME FUNCTIONS
 *
 *   The Drupal theme system uses special theme functions to generate HTML
 *   output automatically. Often we wish to customize this HTML output. To do
 *   this, we have to override the theme function. You have to first find the
 *   theme function that generates the output, and then "catch" it and modify it
 *   here. The easiest way to do it is to copy the original function in its
 *   entirety and paste it here, changing the prefix from theme_ to udi_.
 *   For example:
 *
 *     original: theme_breadcrumb()
 *     theme override: udi_breadcrumb()
 *
 *   where udi is the name of your sub-theme. For example, the
 *   zen_classic theme would define a zen_classic_breadcrumb() function.
 *
 *   If you would like to override any of the theme functions used in Zen core,
 *   you should first look at how Zen core implements those functions:
 *     theme_breadcrumbs()      in zen/template.php
 *     theme_menu_item_link()   in zen/template.php
 *     theme_menu_local_tasks() in zen/template.php
 *
 *   For more information, please visit the Theme Developer's Guide on
 *   Drupal.org: http://drupal.org/node/173880
 *
 * CREATE OR MODIFY VARIABLES FOR YOUR THEME
 *
 *   Each tpl.php template file has several variables which hold various pieces
 *   of content. You can modify those variables (or add new ones) before they
 *   are used in the template files by using preprocess functions.
 *
 *   This makes THEME_preprocess_HOOK() functions the most powerful functions
 *   available to themers.
 *
 *   It works by having one preprocess function for each template file or its
 *   derivatives (called template suggestions). For example:
 *     THEME_preprocess_page    alters the variables for page.tpl.php
 *     THEME_preprocess_node    alters the variables for node.tpl.php or
 *                              for node-forum.tpl.php
 *     THEME_preprocess_comment alters the variables for comment.tpl.php
 *     THEME_preprocess_block   alters the variables for block.tpl.php
 *
 *   For more information on preprocess functions and template suggestions,
 *   please visit the Theme Developer's Guide on Drupal.org:
 *   http://drupal.org/node/223440
 *   and http://drupal.org/node/190815#template-suggestions
 */


/**
 * Implementation of HOOK_theme().
 */
function udi_theme(&$existing, $type, $theme, $path) {
  $hooks = zen_theme($existing, $type, $theme, $path);
  // Add your theme hooks like this:
  /*
  $hooks['hook_name_here'] = array( // Details go here );
  */
  // @TODO: Needs detailed comments. Patches welcome!
  return $hooks;
}

/**
 * Override or insert variables into all templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered (name of the .tpl.php file.)
 */
/* -- Delete this line if you want to use this function
function udi_preprocess(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the page templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
/* -- Delete this line if you want to use this function
function udi_preprocess_page(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the node templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
/* -- Delete this line if you want to use this function
function udi_preprocess_node(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');

  // Optionally, run node-type-specific preprocess functions, like
  // udi_preprocess_node_page() or udi_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $vars['node']->type;
  if (function_exists($function)) {
    $function($vars, $hook);
  }
}
// */

/**
 * Override or insert variables into the comment templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function udi_preprocess_comment(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
function udi_preprocess_block(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');
}
// */

/* My overrides */

/**
 * Custom theme function for the login/register link.
 */
function udi_lt_login_link() {
  // Only display register text if registration is allowed.
  if (variable_get('user_register', 1)) {
    return t('Member Login');
  }
  else {
    return t('Login');
  }
}

/**
 * Theme the username title of the user login form
 * and the user login block.
 */
function udi_lt_username_title($form_id) {
  switch ($form_id) {
    case 'user_login':
      // Label text for the username field on the /user/login page.
      return t('User Name / Email Address');
      break;

    case 'user_login_block':
      // Label text for the username field when shown in a block.
      return t('Username or e-mail');
      break;
  }
}

/**
 * Theme the username description of the user login form
 * and the user login block.
 */
function udi_lt_username_description($form_id) {
  switch ($form_id) {
    case 'user_login':
      // The username field's description when shown on the /user/login page.
      return t('');
      break;
    case 'user_login_block':
      return t('');
      break;
  }
}

/**
 * Theme the password description of the user login form
 * and the user login block.
 */
function udi_lt_password_description($form_id) {
  switch ($form_id) {
    case 'user_login':
      // The password field's description on the /user/login page.
      return t('');
      break;

    case 'user_login_block':
      // If showing the login form in a block, don't print any descriptive text.
      return t('');
      break;
  }
}

/* Customize the search box by converting the search-theme-form.tpl.php file to a function instead */

function udi_search_theme_form($form) {
	$form['search_theme_form']['#title'] = 'Search';
	$form['submit']['#type'] = 'image_button';
	$form['submit']['#src'] = drupal_get_path('theme', 'udi') . '/images/search.png';
	$form['submit']['#attributes']['class'] = 'searchbutton';
	$form['textfield']['#field_prefix'] = 'Search';
	return '<div id="search" class="container-inline">' . drupal_render($form) . '</div>';
}

/* Override the core form function to remove the colon from the end of labels */

function udi_form_element($element, $value) {
  // This is also used in the installer, pre-database setup.
  $t = get_t();

  $output = '<div class="form-item"';
  if (!empty($element['#id'])) {
    $output .= ' id="'. $element['#id'] .'-wrapper"';
  }
  $output .= ">\n";
  $required = !empty($element['#required']) ? '<span class="form-required" title="'. $t('This field is required.') .'">*</span>' : '';

  if (!empty($element['#title'])) {
    $title = $element['#title'];
    if (!empty($element['#id'])) {
      $output .= ' <label for="'. $element['#id'] .'">'. $t('!title !required', array('!title' => filter_xss_admin($title), '!required' => $required)) ."</label>\n";
    }
    else {
      $output .= ' <label>'. $t('!title !required', array('!title' => filter_xss_admin($title), '!required' => $required)) ."</label>\n";
    }
  }

  $output .= " $value\n";

  if (!empty($element['#description'])) {
    $output .= ' <div class="description">'. $element['#description'] ."</div>\n";
  }

  $output .= "</div>\n";

  return $output;
}

/**
 * Theme the loggedinblock that shows for logged-in users.
 */
function udi_lt_loggedinblock(){
  global $user;
  return 'Hi ' . check_plain($user->name) .' | ' . l(t('My Dashboard'), 'dashboard') . ' | ' . l(t('Log out'), 'logout');
}

/* Customize the poll output by converting the poll-vote.tpl.php to a theme function instead, allowing us to use our own 'submit' button */

/* function udi_poll_vote($form) {
	$form['poll_vote']['#title'] = 'This is the poll title';
	$form['vote']['#type'] = 'image_button';
	$form['vote']['#src'] = drupal_get_path('theme', 'udi') . '/images/search.png';
	$form['vote']['#attributes']['class'] = 'votebutton';

return '<div class="poll"><div class="vote-form">'  . drupal_render($form) . '</div></div>';

} */

/* Alter the poll form via a pre-process function to theme the vote button */

function udi_preprocess_poll_vote(&$variables) {
  $form = $variables['form'];
  $variables['choice'] = drupal_render($form['choice']);
  $variables['title'] = check_plain($form['#node']->title);
  $form['vote']['#type'] = 'image_button';
  $form['vote']['#src'] = drupal_get_path('theme', 'udi') . '/images/submitbutton.png';
  $form['vote']['#attributes']['class'] = 'votebutton';
  $variables['vote'] = drupal_render($form['vote']);
  $variables['rest'] = drupal_render($form);
  $variables['block'] = $form['#block'];
  // If this is a block, allow a different tpl.php to be used.
  if ($variables['block']) {
    $variables['template_files'][] = 'poll-vote-block';
  }
}