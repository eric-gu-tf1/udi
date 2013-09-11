<?php if (!empty($images)): ?>
<div id="slide-page-wrap">
  <div class="slider-wrap">
    <div id="main-photo-slider" class="csw">
      <div class="panelContainer">
        <?php foreach ($images as $image): ?>
        <div class="panel">
          <div class="pic-wrapper">
            <a href="<?php print $image->raw_learn_more_url; ?>">
              <?php echo $image->image; ?>
            </a>
          </div>
          <div class="photo-meta-data">
            <h3><?php echo $image->title ?></h3>
            <div class="shadow"><?php echo $image->caption ?></div>
            <?php if ($image->link): ?><div class="learn-more"><?php echo $image->link ?></div><?php endif ?>
          </div>
        </div>
        <?php endforeach; ?>
      </div>
    </div>

    <?php if (count($images) > 1): ?>
      <div id="slide-nav">
        <?php foreach($images as $delta => $image): ?>
        <a href="<?php echo 'javascript:void(0)' ?>" class="cross-link"><?php echo $delta+1 ?></a>
        <?php endforeach; ?>
      </div>
    <?php endif; ?>
  </div>
</div>
<?php endif; ?>