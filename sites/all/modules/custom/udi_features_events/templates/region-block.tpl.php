<?php if (!empty($regions)): ?>
<div class="third-level-nav">
  <ul class="menu">
    <?php foreach ($regions as $link): ?>
    <li><a href="<?php echo $link->url ?>" <?php if ($link->classes): echo $link->classes; endif; ?>><?php echo $link->title ?></a></li>
    <?php endforeach ?>
  </ul>
</div>
<?php endif ?>
