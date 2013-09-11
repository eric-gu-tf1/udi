<?php if (!empty($attachments)): ?>
<ul<?php if ($idn): echo ' id="'.$idn.'"'; endif ?><?php if ($class): echo ' class="'.$class.'"'; endif ?>>
  <?php foreach ($attachments as $item): ?>
  <li<?php if ($item['class']): echo ' class="'.$item['class'].'"'; endif ?>><?php echo $item['item'] ?></li>
  <?php endforeach ?>
</ul>
<?php endif ?>