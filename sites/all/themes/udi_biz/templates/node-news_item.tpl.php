<?php
// $Id: node.tpl.php,v 1.0 2011/06/20 00:00:00 mepho Exp $
?>
<!-- article -->
<article class="node <?php print $classes; ?>" id="node-<?php print $node->nid; ?>">

  <!-- node-innde -->
  <div class="node-inner">
    <?php if (!$page): ?><h2 class="title"><?php print $title; ?></h2><?php endif ?>

    <?php print $picture; ?>

    <?php if ($submitted): ?>
    <span class="submitted"><?php print $submitted; ?></span>
    <?php endif; ?>

    <div class="content">
      <?php print $content; ?>
    </div>

    <?php if ($terms): ?>
    <div class="taxonomy"><?php print $terms; ?></div>
    <?php endif;?>

    <?php if ($links): ?>
    <div class="links"> <?php print $links; ?></div>
    <?php endif; ?>

  </div>
  <!-- /node-inner -->

</article>
<!-- /article-->
