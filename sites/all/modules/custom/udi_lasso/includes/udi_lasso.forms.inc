<?php


/**
 * Settings form of Lasso Integration
 */
function udi_lasso__forms_lasso_settings_form() {
	$form = array();
	
	$form[UDI_LASSO_CLIENT_ID] = array(
		'#type'          => 'textfield', 
		'#title'         => t('Lasso ClientID'), 
		'#default_value' => variable_get(
			UDI_LASSO_CLIENT_ID,
			UDI_LASSO_DEFAULT_CLIENT_ID
		), 
		'#size'          => 25, 
		'#maxlength'     => 25, 
		'#required'      => TRUE,
	);
	$form[UDI_LASSO_PROJECT_ID] = array(
		'#type'          => 'textfield', 
		'#title'         => t('Lasso ProjectID'), 
		'#default_value' => variable_get(
			UDI_LASSO_PROJECT_ID,
			UDI_LASSO_DEFAULT_PROJECT_ID
		), 
		'#size'          => 25, 
		'#maxlength'     => 25, 
		'#required'      => TRUE,
	);
	$form[UDI_LASSO_LASSO_UID] = array(
		'#type'          => 'textfield', 
		'#title'         => t('Lasso LassoUID'), 
		'#default_value' => variable_get(
			UDI_LASSO_LASSO_UID,
			UDI_LASSO_DEFAULT_LASSO_UID
		), 
		'#size'          => 25, 
		'#maxlength'     => 25, 
		'#required'      => TRUE,
	);
	$form[UDI_LASSO_LASSO_SINGLE_REGISTRATION_PAGE] = array(
		'#type'          => 'textfield', 
		'#title'         => t('Lasso Single Registration URL'), 
		'#default_value' => variable_get(
			UDI_LASSO_LASSO_SINGLE_REGISTRATION_PAGE,
			UDI_LASSO_DEFAULT_LASSO_SINGLE_REGISTRATION_PAGE
		), 
		'#size'          => 100, 
		'#maxlength'     => 100, 
		'#required'      => TRUE,
	);
	
	return system_settings_form($form);
}


/**
 * Lasso Integration Registration Form
 */
function udi_lasso__forms_lasso_registration_form($form_state) {
	$form = array();
	
	$issues_options         = _udi_lasso__forms_lasso_registration_form_get_issues_options();
	$municipalities_options = _udi_lasso__forms_lasso_registration_form_get_municipalities_options();
	
	$_SESSION[UDI_LASSO_REGISTRATION_PROCESS_TOKEN] = time();
	
	global $base_url;
	
	/* this will replace
		lasso/signup/confirmation/% to lasso/signup/confirmation/{some token} */
	$internal_thankyou_link = str_replace(
		'%',
		$_SESSION[UDI_LASSO_REGISTRATION_PROCESS_TOKEN],
		UDI_LASSO_REGISTRATION_THANK_YOU_LANDING_INTERNAL_URL
	);
	$signup_thankyou_link = url($internal_thankyou_link, array('absolute' => TRUE));
	
	/* must post to lasso url */
	
	$form['#action'] = variable_get(
		UDI_LASSO_LASSO_SINGLE_REGISTRATION_PAGE,
		UDI_LASSO_DEFAULT_LASSO_SINGLE_REGISTRATION_PAGE
	);
	
	
	/* must set proper hidden fields */
	$form['ClientID'] = array(
		'#type'  => 'hidden',
		'#value' => variable_get(
			UDI_LASSO_CLIENT_ID,
			UDI_LASSO_DEFAULT_CLIENT_ID
		),
	);
	$form['ProjectID'] = array(
		'#type'  => 'hidden',
		'#value' => variable_get(
			UDI_LASSO_PROJECT_ID,
			UDI_LASSO_DEFAULT_PROJECT_ID
		),
	);
	$form['LassoUID'] = array(
		'#type'  => 'hidden',
		'#value' => variable_get(
			UDI_LASSO_LASSO_UID,
			UDI_LASSO_DEFAULT_LASSO_UID
		), 
	);
	$form['SignupThankyouLink'] = array(
		'#type'  => 'hidden',
		'#value' => $signup_thankyou_link, 
	);
	/* issues */
	$form['Questions']['#tree'] = TRUE;
	$form['Questions']['16807'] = array(
		'#type'          => 'checkboxes', 
		'#title'         => t('Issues'), 
		'#options'       => $issues_options,
		'#attributes' => array('class' => 'issues'),
		'#suffix' => '<div class="issues-container"></div>',
  );
	
	/* municipality */
	$form['Questions']['14617'] = array(
		'#type'          => 'checkboxes', 
		'#title'         => t('Which municipalities would you like to receive updates on?'), 
		'#options'       => $municipalities_options,
		'#required'      => TRUE,
		'#attributes' => array('class' => 'municipality'),
		'#suffix' => '<div class="municipal-container"></div>',
  );
	$form['FirstName'] = array(
		'#type'          => 'textfield', 
		'#title'         => t('First Name'), 
		'#default_value' => '',
		'#size'          => 60, 
		'#maxlength'     => 60, 
		'#required'      => TRUE,
	);
	$form['LastName'] = array(
		'#type'          => 'textfield', 
		'#title'         => t('Last Name'), 
		'#default_value' => '',
		'#size'          => 60, 
		'#maxlength'     => 60, 
		'#required'      => TRUE,
	);
	$form['Company'] = array(
		'#type'          => 'textfield', 
		'#title'         => t('Company'), 
		'#default_value' => '',
		'#size'          => 60, 
		'#maxlength'     => 60, 
		'#required'      => TRUE,
	);
	$form['Emails']['#tree'] = TRUE;
	$form['Emails']['Primary'] = array(
		'#type'          => 'textfield', 
		'#title'         => t('Email'), 
		'#default_value' => '',
		'#size'          => 60, 
		'#maxlength'     => 60, 
		'#required'      => TRUE,
	);
	$form['send'] = array(
		'#type'  => 'submit',
		'#value' => t('Submit'),
	);
		
	$form['#after_build'][] = 'udi_lasso__forms_lasso_registration_form_after_build';
	
	return $form;
}


/**
 * form after build function of udi_lasso__forms_lasso_registration_form
 */
function udi_lasso__forms_lasso_registration_form_after_build($form) {
	
	$module_path = drupal_get_path('module','udi_lasso');
	drupal_add_js($module_path .'/js/jquery.validate.js');
	drupal_add_js($module_path .'/js/udi_lasso.lasso-form-validation.js');
	
	return $form;
}




/**
 * Retrieve lasso registration form issues options
 */
function _udi_lasso__forms_lasso_registration_form_get_issues_options() {
	$issues = array(
		'81881' => 'Tax and Legal',
		'81880' => 'Planning',
		'81879' => 'Housing Affordability',
		'81878' => 'Environmental',
		'81877' => 'Transportation and Infrastructure',
		'81876' => 'News and Events',
	);
	
	return $issues;
}


/**
 * Retrieve lasso registration form municipalities options
 */
function _udi_lasso__forms_lasso_registration_form_get_municipalities_options() {
	$municipalities = array(
		'69196' => 'Vancouver',
		'69195' => 'Richmond',
		'69194' => 'Burnaby',
		'69193' => 'Coquitlam',
		'69192' => 'New Westminster',
		'70531' => 'Surrey',
		'70532' => 'Langley (Township)',
		'69203' => 'Squamish',
		'69197' => 'North Vancouver (City)',
		'70533' => 'North Vancouver (District)',
		'69204' => 'West Vancouver',
		'69191' => 'Langley (City)',
		'69190' => 'Mission',
		'69189' => 'Delta',
		'69201' => 'White Rock',
		'69200' => 'Port Moody',
		'69199' => 'Pitt Meadows',
		'69198' => 'Port Coquitlam',
		'69202' => 'Abbotsford',
		'70535' => 'Okanagan',
		'70534' => 'Greater Victoria',
		'81884' => 'Village of Anmore',
		'81883' => 'Village of Belcarra',
		'81882' => 'Bowen Island Municipality',
		'81889' => 'Village of Lions Bay',
		'81888' => 'District of Maple Ridge',
		'81887' => 'Tsawwassen',
		'81886' => 'Provincial',
		'81885' => 'Federal',	
	);
	
	return $municipalities;
}