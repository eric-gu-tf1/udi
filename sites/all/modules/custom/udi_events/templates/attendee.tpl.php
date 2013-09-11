<?php if (!empty($attendees)): ?>
<?php if ($message): ?><p><?php echo $message ?></p><?php endif ?>
<ol>
  <?php foreach ($attendees as $info): ?>
  <li class="attendee">
    <strong class="name"><?php echo $info['first'] ?> <?php echo $info['last'] ?></strong>
    <span class="company"><?php echo $info['company'] ?></span>
  </li>
  <?php endforeach ?>
</ol>
<?php endif ?>