Drupal.behaviors.centralModules = function () {
  $('#check-all').click(function (e) {
    e.preventDefault();
    
    $('#modules .form-checkbox').each(function (i) {
      $(this).attr('checked', true);
    });
  });
  
  $('#uncheck-all').click(function (e) {
    e.preventDefault();
    
    $('#modules .form-checkbox').each(function (i) {
      $(this).attr('checked', false);
    });
  });
};