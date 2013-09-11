<?php
// $Id: node.tpl.php,v 1.0 2011/06/20 00:00:00 mepho Exp $
drupal_add_css(drupal_get_path('module','udi_events').'/css/events.css');
?>
<!-- article -->
<article class="node <?php print $classes; ?>" id="node-<?php print $node->nid; ?>">

  <!-- node-inner -->
  <div class="node-inner">

    <?php if ($node->display->calicon): ?>
    <div class="date">
      <div class="cal">
        <p class="day"><?php echo $node->display->calicon['day'] ?></p>
        <p class="month"><?php echo $node->display->calicon['month'] ?></p>
      </div>
      <h2><?php echo $node->display->calicon['full'] ?></h2>
    </div>
    <?php endif ?>

    <div class="content">
      <?php if (!$page): ?><h3 class="title"><?php print $title; ?></h3><?php endif ?>

      <?php if ($node->display->logo): ?>
      <div class="event-logo"><?php echo $node->display->logo ?> </div>
      <?php endif ?>

      <div class="description"><?php echo $node->display->body; ?></div>
      <div class="clear"></div>

      <?php if ($node->display->time): ?>
      <p class="time"><strong>Time:</strong> <?php echo $node->display->time ?></p>
      <?php endif ?>

      <?php if ($node->field_event_location[0]): ?>
      <p class="location"><strong>Location:</strong> <?php print $node->field_event_location[0]['safe'] ?></p>
      <?php endif ?>

      <!-- Files/Documents -->
      <?php if ($node->display->files): ?>
      <strong>Documents: </strong>
      <?php echo $node->display->files ?>
      <?php endif ?>
      <!-- /Files/Documents -->


      <!-- Presentation -->
      <?php if ($node->display->presentations): ?>
      <strong>Presentation: </strong>
      <?php echo $node->display->presentations ?>
      <?php endif ?>
      <!-- /Presentation -->

      <!-- Sponsors -->
      <div class="sponsors section clearfix">
        <?php if ($node->display->sponsors): ?>
        <h4>Sponsors</h4>
        <?php echo $node->display->sponsors ?>
        <?php endif ?>
      </div>
      <!-- /Sponsors -->

      <!-- Gallery -->
      <div class="gallery section clearfix">
        <?php if ($node->display->gallery): ?>
        <h4>Gallery</h4>
        <?php echo $node->display->gallery ?>
        <?php endif ?>
      </div>
      <!-- /Gallery -->

      <!-- Videos-->
      <div class="video section">
        <?php if ($node->display->videos): ?>
        <h4>Video</h4>
        <?php echo $node->display->videos ?>
        <?php endif ?>
      </div>
      <!-- /Videos -->

      <!-- Ticket Form -->
      <div class="ticket-stage-one section">
        <?php if (!empty($node->display->tickets)): ?>
        <?php echo $node->display->tickets ?>
        <?php endif ?>
      </div>
      <!-- /Ticket form -->

      <?php if (!empty($node->display->buyer_attend)): ?>
      <div class="second-stage clearfix">
        <?php echo $node->display->buyer_attend['price'] ?>
        <?php echo $node->display->buyer_attend['form'] ?>
      </div>
      <?php endif ?>

      <?php if ($links): ?>
      <div class="links"> <?php print $links; ?></div>
      <?php endif; ?>

    </div>

  </div>
  <!-- /node-inner -->

</article>
<!-- /article-->
