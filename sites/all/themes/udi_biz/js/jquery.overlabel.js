jQuery.fn.overlabel = function() {
	this.each(function(index) {
  	var label = $(this); var field;
    var id = this.htmlFor || label.attr('for');
    if (id && (field = document.getElementById(id))) {
    	var control = $(field);
      label.addClass("overlabel-apply");
      if (field.value !== '') {
      	label.css("text-indent", "-9999px");
      }
      control.focus(function () {label.css("text-indent", "-9999px");}).blur(function () {
      	if (this.value === '') {
        	label.css("text-indent", "0px");
        }
      });
      label.click(function() {
      	var label = $(this); var field;
        var id = this.htmlFor || label.attr('for');
        if (id && (field = document.getElementById(id))) {
        	field.focus();
        }
      });
    }
	});
};