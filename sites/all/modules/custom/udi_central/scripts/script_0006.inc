<?php

/**
 * Install taxonomies
 *
 */
function udi_central_update_6006() {
  $ret = array();
  
  // Install Region taxonomies
  $vocab = array(
    'name' => 'Region',
    'required' => 1,
    'multiple' => 1,
    'nodes' => array('event', 'chapter')
  );
  $terms = array();
  $terms[] = array('name' => 'Vancouver', 'description' => 'Vancouver (Head Office)', 'weight' => 0);
  $terms[] = array('name' => 'Victoria', 'weight' => 1);
  $terms[] = array('name' => 'Okanagan', 'weight' => 2);
  udi_central_install_taxonomy($ret, $vocab, $terms);
  
  // Install Jurisdiction taxonomies
  $vocab = array(
    'name' => 'Jurisdiction',
    'required' => 1,
    'multiple' => 1,
    'nodes' => array('news_item' => 1, 'press_release' => 1, 'annual_report', 'forecast' => 1, 'municipal_document' => 1, 'policy_document' => 1, 'submissions' => 1, 'udi_letters' => 1)
  );
  $terms = array();
  $terms[] = array('name' => 'Vancouver', 'weight' => 0);
  $terms[] = array('name' => 'Richmond', 'weight' => 1);
  $terms[] = array('name' => 'Burnaby', 'weight' => 2);
  $terms[] = array('name' => 'Coquitlam', 'weight' => 3);
  $terms[] = array('name' => 'New Westminster', 'weight' => 4);
  $terms[] = array('name' => 'Surrey', 'weight' => 5);
  $terms[] = array('name' => 'Langley (Township)', 'weight' => 6);
  $terms[] = array('name' => 'Squamish', 'weight' => 7);
  $terms[] = array('name' => 'North Vancouver (City)', 'weight' => 8);
  $terms[] = array('name' => 'North Vancouver (District)', 'weight' => 9);
  $terms[] = array('name' => 'West Vancouver', 'weight' => 10);
  $terms[] = array('name' => 'Langley (City)', 'weight' => 11);
  $terms[] = array('name' => 'Mission', 'weight' => 12);
  $terms[] = array('name' => 'Delta', 'weight' => 13);
  $terms[] = array('name' => 'White Rock', 'weight' => 14);
  $terms[] = array('name' => 'Port Moody', 'weight' => 15);
  $terms[] = array('name' => 'Pitt Meadows', 'weight' => 16);
  $terms[] = array('name' => 'Port Coquitlam', 'weight' => 17);
  $terms[] = array('name' => 'Abbotsford', 'weight' => 18);
  $terms[] = array('name' => 'Kelowna', 'weight' => 19);
  $terms[] = array('name' => 'Victoria', 'weight' => 20);
  $terms[] = array('name' => 'Provincial', 'weight' => 21);
  $terms[] = array('name' => 'Federal', 'weight' => 22);
  $terms[] = array('name' => 'Metro Vancouver', 'weight' => 23);
  udi_central_install_taxonomy($ret, $vocab, $terms);
  
  // Install Issue taxonomies
  $vocab = array(
    'name' => 'Issue',
    'required' => 1,
    'multiple' => 1,
    'nodes' => array('news_item' => 1, 'press_release' => 1, 'annual_report', 'forecast' => 1, 'municipal_document' => 1, 'policy_document' => 1, 'submissions' => 1, 'udi_letters' => 1)
  );
  $terms = array();
  $terms[] = array('name' => 'Development Cost Charges', 'weight' => 0);
  $terms[] = array('name' => 'Development Cost Levies', 'weight' => 0);
  $terms[] = array('name' => 'Community Amenity Charges', 'weight' => 0);
  $terms[] = array('name' => 'Regional Growth Strategy', 'weight' => 0);
  $terms[] = array('name' => 'Official Community Plan', 'weight' => 0);
  $terms[] = array('name' => 'Strata Property Act', 'weight' => 0);
  $terms[] = array('name' => 'Environment', 'weight' => 0);
  $terms[] = array('name' => 'Sustainability Checklist', 'weight' => 0);
  $terms[] = array('name' => 'Affordable Housing', 'weight' => 0);
  $terms[] = array('name' => 'Adaptable Housing', 'weight' => 0);
  $terms[] = array('name' => 'Property Transfer Tax', 'weight' => 0);
  $terms[] = array('name' => 'LEED', 'weight' => 0);
  $terms[] = array('name' => 'Rental Housing', 'weight' => 0);
  $terms[] = array('name' => 'School Site Acquisition Charge', 'weight' => 0);
  $terms[] = array('name' => 'Signage', 'weight' => 0);
  $terms[] = array('name' => 'Subdivision and Control Bylaws', 'weight' => 0);
  $terms[] = array('name' => 'Transit Oriented Development', 'weight' => 0);
  $terms[] = array('name' => 'Building Code', 'weight' => 0);
  $terms[] = array('name' => 'Electric Car', 'weight' => 0);
  $terms[] = array('name' => 'Downtown Community Plan', 'weight' => 0);
  $terms[] = array('name' => 'Green Building', 'weight' => 0);
  $terms[] = array('name' => 'Public Art', 'weight' => 0);
  udi_central_install_taxonomy($ret, $vocab, $terms);
  
  return $ret;
}
