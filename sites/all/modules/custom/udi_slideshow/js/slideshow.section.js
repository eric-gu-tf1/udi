Drupal.behaviors.slideshowSection = function () {
	if ($('#slide-banner-holder').hasClass('manual')) {
		$('ul#feature-banner').innerfade({speed: 'slow', timeout: 4000});
	}
	else {	
		$('ul#feature-banner').innerfade({speed: 'slow', timeout: 4000});;
	}	
};
