<?php
// $Id: page.tpl.php,v 1.0 2011/06/20 00:00:00 mepho Exp $
global $user;
?>
<!DOCTYPE html>
<!-- paulirish.com/2008/conditional-stylesheets-vs-css-hacks-answer-neither/ -->
<!--[if lt IE 7 ]> <html class="no-js ie6" lang="en"> <![endif]-->
<!--[if IE 7 ]>    <html class="no-js ie7" lang="en"> <![endif]-->
<!--[if IE 8 ]>    <html class="no-js ie8" lang="en"> <![endif]-->
<!--[if IE 9 ]>    <html class="no-js ie9" lang="en"> <![endif]-->

<!--[if (gte IE 10)|!(IE)]><!--> <html class="no-js" lang="en"> <!--<![endif]-->
<head>
  <title><?php print $head_title; ?></title>
  <?php print $head; ?>
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <!--[if IE 6]>
  <script src="<?php echo base_path() . path_to_theme() ?>/js/libs/dd_belatedpng.js"></script>
  <script>$(document).ready(function(){DD_belatedPNG.fix("img, .png_bg");});</script>
  <![endif]-->
  <!--[if IE]>
  <link href="<?php echo base_path() . path_to_theme(); ?>/css/ie.css" rel="stylesheet" type="text/css">
  <html xmlns:og="http://opengraphprotocol.org/schema/" xmlns:fb="http://www.facebook.com/2008/fbml">
  <![endif]-->
  <meta name="viewport" content="width=1016, initial-scale=1, maximum-scale=1">
</head>

<body class="<?php print $body_classes; ?>">

  <!-- container -->
  <div id="container" class="fixwidth fixfooter">
    <!-- container-inner -->
    <div id="container-inner">

      <div class="page-top clearfix">
        <!-- header -->
        <header class="clearfix">
          <div id="logo-title">
            <?php if (!empty($logo)): ?>
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" id="logo" class="fleft">
                <img src="<?php echo $logo ?>" alt="<?php print t('Home'); ?>"/>
            </a>
            <?php endif; ?>

            <div id="name-and-slogan">
              <?php if (!empty($site_name)): ?>
              <h1 class="fleft">
                <a href="<?php print $front_page ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a>
              </h1>
              <?php endif; ?>
              <?php if (!empty($site_slogan)): ?>
              <div id="site-slogan"><?php print $site_slogan; ?></div>
              <?php endif; ?>
            </div>
          </div>
          <ul class="header-social fright">
            <li class="facebook"><a href="http://www.facebook.com/pages/Urban-Development-Institute-Pacific-Region/152210458172068" target="_blank">Facebook</a></li>
            <li class="twitter"><a href="https://twitter.com/udibc" target="_blank">Twitter</a></li>
            <li class="youtube"><a href="http://www.youtube.com/UDIPacific" target="_blank">Youtube</a></li>
          </ul>
          <a  class="gallery" href="/gallery">Gallery</a>
          <?php if ($contact_us): ?><p class="contact-btn fright"><?php echo $contact_us ?></p><?php endif ?>
          <?php if ($dashboard): ?><p class="dashboard-btn fright"><?php echo $dashboard ?></p><?php endif ?>
          <?php if ($logout): ?><p class="logout-btn fright"><?php echo $logout ?></p><?php endif ?>

          <?php if ($header): ?>
          <div id="header-region">
            <?php print $header; ?>
          </div>
          <?php endif; ?>
        </header>
        <!-- /header -->

        <!-- nav -->
        <nav class="clearfix">
          <div class="clear"></div>
          <?php if($navigation): echo $navigation; endif; ?>

          <?php if (!empty($primary_links) || !empty($secondary_links)): ?>
          <div id="navigation" class="menu <?php if (!empty($primary_links)) { print "with-main-menu"; } if (!empty($secondary_links)) { print " with-sub-menu"; } ?>">
            <?php if (!empty($primary_links)){ print theme('links', $primary_links, array('id' => 'primary', 'class' => 'links main-menu')); } ?>
            <?php if (!empty($secondary_links)){ print theme('links', $secondary_links, array('id' => 'secondary', 'class' => 'links sub-menu')); } ?>
          </div>
          <?php endif; ?>

          <?php if($search_box): ?>
          <div id="search-bar">
            <?php echo $search_box; ?>
          </div>
          <?php endif; ?>
        </nav>
        <!-- /nav -->
      </div> <!-- /page-top -->

      <div id="main" role="main" class="clearfix">
        <?php if ($content_top): ?>
        <!-- content-top -->
        <div id="content-top">
          <?php print $content_top; ?>
        </div>
        <!-- /content-top -->
        <?php endif; ?>

        <div id="content">
          <div id="content-inner" class="inner center">

            <?php if ($content_inner_top): ?>
            <div id="content-inner-top"><?php print $content_inner_top ?></div>
            <?php endif ?>

            <?php if($title): ?><h2 class="page-title"><?php echo $title; ?></h1><?php endif; ?>
            <?php if($breadcrumb): echo $breadcrumb; endif; ?>

            <?php if ($mission || $messages || $help || $tabs): ?>
            <!-- content-header -->
            <div id="content-header">
              <?php if ($mission): ?>
              <div id="mission"><?php print $mission; ?></div>
              <?php endif; ?>

              <?php print $messages; ?>

              <?php print $help; ?>

              <?php if ($tabs): ?>
              <div class="tabs"><?php print $tabs; ?></div>
              <?php endif; ?>
            </div>
            <!-- /content-header -->
            <?php endif; ?>

            <!-- content-area -->
            <div id="content-area">
              <?php print $content; ?>
            </div>
            <!-- /content-area -->

            <?php print $feed_icons; ?>

            <?php if ($content_bottom): ?>
            <!-- content-bottom -->
            <div id="content-bottom">
              <?php print $content_bottom; ?>
            </div>
            <!-- /content-bottom -->
            <?php endif; ?>

          </div>
        </div>

        <?php if ($left): ?>
        <!-- sidebar-left -->
        <aside id="sidebar-left" class="sidebar">
          <div class="inner">
            <?php print $left; ?>
          </div>
        </aside>
        <!-- /sidebar-left -->
        <?php endif; ?>

        <?php if ($right): ?>
        <!-- sidebar-right -->
        <aside id="sidebar-right" class="sidebar">
          <div class="inner">
            <?php print $right; ?>
          </div>
        </aside>
        <!-- /sidebar-right -->
        <?php endif; ?>
      </div>

      <?php if ($bottom): ?>
      <div id="bottom-area" class="clearfix"><?php print $bottom; ?></div>
      <?php endif; ?>

      <div class="clearfooter"></div>
    </div>

    <!-- footer -->
    <footer class="clearfix">
      <div class="inner">
        <?php if(!empty($footer_message) || !empty($footer_block)): ?>
        <?php print $footer_message; ?>
        <?php print $footer_block; ?>
        <?php endif; ?>
        <div class="footer-copy"><?php echo $footer_copy; ?></div>
      </div>
    </footer>
    <!-- /footer -->
  <!-- /container-inner -->
  </div>
  <!-- /container -->
  <?php print $closure; ?>
</body>

</html>
