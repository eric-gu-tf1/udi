Drupal.behaviors.slideshowHome = function () {
	$('#main-photo-slider .panelContainer').cycle({
		fx: 'fade',
		timeout: 5000,
		speed: 1500,
		pauseOnPagerHover: 1,
		cleartype: false,
		cleartypeNoBg: false,
		pager: '#slide-nav',
		activePagerClass: 'active-thumb',
		pagerAnchorBuilder: anchorBuilder
	});
	
	function anchorBuilder(index, element) {
		return '#slide-nav a:eq('+index+')';
	}
};
