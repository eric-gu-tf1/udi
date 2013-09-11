<?php if ($label && $price): ?>
<strong><?php echo $label ?></strong>
<span><?php echo $sign ? $sign : '$' ?><?php echo $price ?><?php echo $dollar ? ' '.$dollar : '' ?></span>
<?php endif ?>