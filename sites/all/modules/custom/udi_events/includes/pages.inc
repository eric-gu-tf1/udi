<?php

function udi_events_get_attendees($session_id, $timestamp, $tnid, $tvid) {
  $attendees = array();
  
  $sql = "
    SELECT a.order_id, a.firstname, a.lastname, a.company, a.status
    FROM {events_attendees} a
    WHERE a.session_id = '%s' AND a.timestamp = %d AND a.tnid = %d AND a.tvid = %d
  ";
  
  $result = db_query($sql, $session_id, intval($timestamp), intval($tnid), intval($tvid));
  while ($row = db_fetch_object($result)) {
    $attendees[] = array(
      'order_id' => $row->order_id,
      'first' => $row->firstname,
      'last' => $row->lastname,
      'company' => $row->company,
      'status' => $row->status
    );
  }
  
  return $attendees;
}

function udi_events_get_attendees_by_order_id($order_id) {
  $attendees = array();
  
  $sql = "
    SELECT a.order_id, a.firstname, a.lastname, a.company, a.status
    FROM {events_attendees} a
    WHERE a.order_id = %d
  ";

  $result = db_query($sql, intval($order_id));
  while ($row = db_fetch_object($result)) {
    $attendees[] = array(
      'order_id' => $row->order_id,
      'first' => $row->firstname,
      'last' => $row->lastname,
      'company' => $row->company,
      'status' => $row->status
    );
  }
  
  return $attendees;
}