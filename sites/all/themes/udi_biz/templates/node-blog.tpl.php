<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix">
  <?php echo $node->content['field_blog_image']['field']['#children']; ?>
	<div class="content">
		<?php if (!$page): ?><h3 class="title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3><?php endif; ?>
		<span class="submitted"><?php echo $date;?></span>
		<?php echo $node->content['body']['#value']; ?>
    <?php print $links; ?>
  </div>
	<div class="clear"></div>
</div> <!-- /.node -->
<div class="clear"></div>
