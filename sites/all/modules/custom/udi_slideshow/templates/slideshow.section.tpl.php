<div id="slide-banner-holder" <?php echo $manual ? 'class="manual"' : '' ?>>
  <ul id="feature-banner">
    <?php foreach ($images as $image):?>
    <li>
      <?php if ($image->link): ?>
      <a href="<?php echo $image->link ?>"><?php echo $image->image ?></a>
      <?php else: echo $image->image; endif; ?>

      <div class="photo-desc">
        <h1><?php echo $image->title ?></h1>
        <?php if ($image->caption): ?><p><?php echo $image->caption ?></p><?php endif; ?>
      </div>
    </li>
    <?php endforeach; ?>
  </ul>
</div>
