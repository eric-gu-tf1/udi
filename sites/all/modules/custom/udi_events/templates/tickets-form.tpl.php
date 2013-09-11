<div class="ticket-purchase">
  <?php foreach ($tickets as $info): ?>
  <div class="member-type clearfix">
    <div class="price-info fleft">
      <?php echo $info['display']['price'] ?>
    </div>
    <?php echo $info['form'] ?>
  </div>
  <?php endforeach ?>
</div>