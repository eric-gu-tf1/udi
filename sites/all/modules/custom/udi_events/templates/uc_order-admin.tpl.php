<?php

/**
 * @file
 * This file is the default admin notification template for Ubercart.
 */
?>
<h2>
  <?php echo $order_event_title; ?><br />
  <?php echo $order_event_date; ?>
</h2>

<p style="font-size: 18px;">
  <?php echo t('Order number:'); ?> <?php echo $order_id; ?><br />
  <?php echo t('Order total:'); ?> <?php echo $order_total; ?><br />
  <?php echo $order_first_name; ?> <?php echo $order_last_name; ?> - <?php echo $order_email; ?>
</p>

<p style="font-size: 18px;">
  <strong><?php echo t("Billing Information"); ?></strong><br />
  <?php echo $order_billing_address; ?><br />
  <?php echo $order_billing_phone; ?>
</p>

<p style="font-size: 18px;">
  <strong><?php echo t("Attendee Information"); ?></strong><br />
  <?php foreach($attendees_array as $i => $attendee): ?>
  <?php echo $attendee['first']; ?> <?php echo $attendee['last']; ?> - <?php echo $attendee['company']; ?><br />
  <?php endforeach; ?>
</p>

<p style="font-size: 18px;">
  <?php echo t('Product:'); ?><br />
  <?php
    $context = array('revision' => 'themed', 'type' => 'order_product', 'subject' => array('order' => $order));

    foreach ($products as $product) {
      $price_info = array('price' => $product->price, 'qty' => $product->qty);
      $context['subject']['order_product'] = $product;

      echo sprintf("%d x %s -- %s<br \>", $product->qty, uc_price($price_info, $context), $product->title);
      echo sprintf("&nbsp;&nbsp;&nbsp;&nbsp;SKU: %s", $product->model);
    }
  ?>


</p>
