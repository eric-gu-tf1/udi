<?php

function udi_events_preprocess_uc_order(&$vars) {
  module_load_include('inc', 'udi_events', 'includes/pages');
  $attendees = udi_events_get_attendees_by_order_id($vars['order']->order_id);
  $message = t("A total of <strong>%num</strong> Attendee(s) are registered for the event.", array('%num' => count($attendees)));

  $vars['attendees'] = theme('event_attendee_info', $attendees, $message);
  $vars['attendees_array'] = $attendees;

  // Retrieve the Event name and Date
  // Assume 1 order has only 1 product
  $ticket = $vars['order']->products[0];
  $sql = "
    SELECT e.title, t.field_time_value AS start, t.field_time_value2 AS end
    FROM {content_field_price_to_event_ref} pe
      LEFT JOIN {node} e ON pe.field_price_to_event_ref_nid = e.nid
      LEFT JOIN {content_field_time} t ON e.nid = t.nid AND e.vid = t.vid
    WHERE e.type = '%s' AND pe.nid = %d
  ";
  $result = db_query($sql, 'event', $ticket->nid);
  while ($row = db_fetch_object($result)) {
    $event = $row;
  }

  $date = date_make_date($event->start, date_get_timezone('date'));
  $datetime_from = $event->start;
  $timezone = isset($date) ? $date->getOffset() : 0;
  $strtime = (int)strtotime($datetime_from) + (int)$timezone;

  $vars['order_event_date'] = date('F j, Y g:ia', $strtime);
  $vars['order_event_title'] = check_plain($event->title);
}
