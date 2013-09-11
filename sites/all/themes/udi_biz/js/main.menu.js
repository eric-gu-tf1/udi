Drupal.behaviors.mainMenu = function () {
  $('.block-navigation ul.nice-menu li.menuparent > a').click(function (e) {
    e.preventDefault();
    return false;
  });
};
