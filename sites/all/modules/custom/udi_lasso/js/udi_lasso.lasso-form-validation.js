Drupal.behaviors.lassForm = function() {	
	var issuesNames = new Array();
	var municipalNames = new Array();
	
	jQuery('input.issues').each(function(index) {
		issuesNames.push(jQuery(this).attr('name'));
		jQuery(this).change(function () {
			if (jQuery('.issues:checked').length) {
				jQuery('div.issues-container .error').hide();
			} else {
				jQuery('div.issues-container .error').show();	
			}
		});
	});
	
	jQuery('input.municipality').each(function(index) {
		municipalNames.push($(this).attr('name'));
		jQuery(this).change(function () {
			if (jQuery('.municipality:checked').length) {
				jQuery('div.municipal-container .error').hide();
			} else {
				jQuery('div.municipal-container .error').show();	
			}
		})
	});
	
	jQuery.validator.addMethod(
		'issues',
		function (value) {
      return jQuery('.issues:checked').length > 0;
		},
		'Please check at least one box.'
	);
	
	jQuery.validator.addMethod(
		'municipality',
		function (value) {
      return jQuery('.municipality:checked').length > 0;
		},
		'Please check at least one box.'
	);
	jQuery('#udi-lasso--forms-lasso-registration-form').validate({
		rules: {
				FirstName: {
				required: true
			},
			LastName: {
				required: true
			},
			Company: {
				required: true
			},
			"Emails[Primary]": {
				required: true,
				email: true
			}
		},
		errorPlacement: function(error, element) {
			var elementName = element.attr('name');
			if (jQuery.inArray(elementName, issuesNames) != -1) {
				jQuery("div.issues-container").html(error);
			} else if (jQuery.inArray(elementName, municipalNames) != -1) {
				jQuery("div.municipal-container").html(error);
			} else {
				error.insertAfter(element);
			}
		}
		//debug:true
 });
};

/**
 *
 */
function _udi_lasso_validate_issues() {
	var selected = 0;
	selected     = jQuery('input:checked[name^="Questions[16807]"]').length;
	return (selected > 0);
}

