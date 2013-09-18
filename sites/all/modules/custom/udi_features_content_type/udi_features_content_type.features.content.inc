<?php

/**
 * Implementation of hook_content_default_fields().
 */
function udi_features_content_type_content_default_fields() {
  $fields = array();

  // Exported field: field_blog_image
  $fields['blog-field_blog_image'] = array(
    'field_name' => 'field_blog_image',
    'type_name' => 'blog',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'blog_image_small_default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'blog_image_small_default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '75x75',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_cart' => 0,
        'imagecache_company_logo' => 0,
        'imagecache_company_logo_thumbnail' => 0,
        'imagecache_main_sidebar_images' => 0,
        'imagecache_municipality_logo' => 0,
        'imagecache_municipality_thumbnail' => 0,
        'imagecache_news_image' => 0,
        'imagecache_news_image_thumbnail' => 0,
        'imagecache_product' => 0,
        'imagecache_product_full' => 0,
        'imagecache_product_list' => 0,
        'imagecache_uc_thumbnail' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Blog post cover image',
      'weight' => '-4',
      'description' => 'Please supply an image for this blog item if applicable.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_file_upload_advanced
  $fields['blog-field_file_upload_advanced'] = array(
    'field_name' => 'field_file_upload_advanced',
    'type_name' => 'blog',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'zip pdf doc txt odf pps',
      'file_path' => 'blog/files',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_cart' => 0,
        'imagecache_municipality_logo' => 0,
        'imagecache_municipality_thumbnail' => 0,
        'imagecache_news_image' => 0,
        'imagecache_news_image_thumbnail' => 0,
        'imagecache_product' => 0,
        'imagecache_product_full' => 0,
        'imagecache_product_list' => 0,
        'imagecache_uc_thumbnail' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Files/Documents',
      'weight' => '-1',
      'description' => 'Optionally attach file(s) to this blog entry.',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_image
  $fields['blog-field_image'] = array(
    'field_name' => 'field_image',
    'type_name' => 'blog',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'page_image_normal_default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'blog/images',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => 1,
      'insert_styles' => array(
        'auto' => 'auto',
        'link' => 0,
        'image' => 0,
        'imagecache_cart' => 0,
        'imagecache_municipality_logo' => 0,
        'imagecache_municipality_thumbnail' => 0,
        'imagecache_news_image' => 0,
        'imagecache_news_image_thumbnail' => 0,
        'imagecache_product' => 0,
        'imagecache_product_full' => 0,
        'imagecache_product_list' => 0,
        'imagecache_uc_thumbnail' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '670',
      'label' => 'Image',
      'weight' => 0,
      'description' => 'Optionally upload an image here and include it in the body of the blog entry.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_job
  $fields['career_application-field_job'] = array(
    'field_name' => 'field_job',
    'type_name' => 'career_application',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'career_posting' => 'career_posting',
      'annual_report' => 0,
      'blog' => 0,
      'career_application' => 0,
      'event' => 0,
      'forecast' => 0,
      'forum' => 0,
      'group' => 0,
      'group_post' => 0,
      'internal_memo' => 0,
      'meeting_minutes' => 0,
      'simplenews' => 0,
      'page' => 0,
      'policy_document' => 0,
      'poll' => 0,
      'presentation' => 0,
      'product' => 0,
      'webform' => 0,
      'bulletin' => 0,
      'news' => 0,
      'media_release' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'node_link' => array(
        'teaser' => 0,
        'full' => 1,
        'title' => 'Apply for this career',
        'hover_title' => 'Click to apply for this career',
        'destination' => 'default',
      ),
      'fallback' => 'select',
      'edit_fallback' => 0,
      'label' => 'Career',
      'weight' => '-4',
      'description' => 'Please select the career you are applying for.',
      'type' => 'nodereference_url',
      'module' => 'nodereference_url',
    ),
  );

  // Exported field: field_resume
  $fields['career_application-field_resume'] = array(
    'field_name' => 'field_resume',
    'type_name' => 'career_application',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'txt rtf doc docx pdf odf',
      'file_path' => 'resumes',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_product' => 0,
        'imagecache_uc_thumbnail' => 0,
        'imagecache_product_full' => 0,
        'imagecache_cart' => 0,
        'imagecache_product_list' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Resume',
      'weight' => '-2',
      'description' => 'Please upload your resume.',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_career_posting
  $fields['career_posting-field_career_posting'] = array(
    'field_name' => 'field_career_posting',
    'type_name' => 'career_posting',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'pdf',
      'file_path' => 'career_postings',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '2M',
      'max_filesize_per_node' => '',
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_cart' => 0,
        'imagecache_municipality_logo' => 0,
        'imagecache_municipality_thumbnail' => 0,
        'imagecache_news_image' => 0,
        'imagecache_news_image_thumbnail' => 0,
        'imagecache_product' => 0,
        'imagecache_product_full' => 0,
        'imagecache_product_list' => 0,
        'imagecache_uc_thumbnail' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Career Posting Attachment',
      'weight' => '2',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_close_date
  $fields['career_posting-field_close_date'] = array(
    'field_name' => 'field_close_date',
    'type_name' => 'career_posting',
    'display_settings' => array(
      'weight' => '3',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'site',
    'todate' => 'optional',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'F j, Y',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Close Date',
      'weight' => '3',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_company
  $fields['career_posting-field_company'] = array(
    'field_name' => 'field_company',
    'type_name' => 'career_posting',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_company][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Company',
      'weight' => '-2',
      'description' => 'If you wish to keep the company CONFIDENTIAL, please enter \'UDI member\' here. You will be contacted via phone to confirm that listing is for a UDI member company (or you may make note of the company name in the \'confidential comment box\' below. The comment box does not get posted to the public. Confirmation must be received before the entry can be posted.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_contact
  $fields['career_posting-field_contact'] = array(
    'field_name' => 'field_contact',
    'type_name' => 'career_posting',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '8' => 8,
      '2' => 0,
      '10' => 0,
      '11' => 0,
      '9' => 0,
    ),
    'referenceable_status' => '',
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'reverse_link' => 0,
      'default_value' => array(
        '0' => array(
          'uid' => NULL,
          '_error_element' => 'default_value_widget][field_contact][0][uid][uid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Contact',
      'weight' => '1',
      'description' => '',
      'type' => 'userreference_autocomplete',
      'module' => 'userreference',
    ),
  );

  // Exported field: field_salary
  $fields['career_posting-field_salary'] = array(
    'field_name' => 'field_salary',
    'type_name' => 'career_posting',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'us_0',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'us_0',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '$',
    'suffix' => ' CAD',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_salary][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Salary',
      'weight' => 0,
      'description' => 'Enter a yearly salary.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_chapter_page
  $fields['chapter-field_chapter_page'] = array(
    'field_name' => 'field_chapter_page',
    'type_name' => 'chapter',
    'display_settings' => array(
      'weight' => '9',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_chapter_page][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Chapter Page',
      'weight' => '10',
      'description' => 'Please enter the URL for the Chapter Homepage (ie vancouver).  Only enter the portion of the URL that occurs after \'chapters/\'.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_chapter_region
  $fields['chapter-field_chapter_region'] = array(
    'field_name' => 'field_chapter_region',
    'type_name' => 'chapter',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Pacific Region
National
International',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Chapter Region',
      'weight' => '1',
      'description' => 'Please choose which region this chapter belongs to.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_chapter_subtitle
  $fields['chapter-field_chapter_subtitle'] = array(
    'field_name' => 'field_chapter_subtitle',
    'type_name' => 'chapter',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_chapter_subtitle][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Subtitle',
      'weight' => 0,
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_director
  $fields['chapter-field_director'] = array(
    'field_name' => 'field_director',
    'type_name' => 'chapter',
    'display_settings' => array(
      'weight' => '8',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Director',
      'weight' => '9',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_email
  $fields['chapter-field_email'] = array(
    'field_name' => 'field_email',
    'type_name' => 'chapter',
    'display_settings' => array(
      'weight' => '4',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'email',
    'required' => '0',
    'multiple' => '1',
    'module' => 'email',
    'active' => '1',
    'widget' => array(
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'email' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'General Email',
      'weight' => '5',
      'description' => 'Please enter the general contact email address(es) for this chapter.',
      'type' => 'email_textfield',
      'module' => 'email',
    ),
  );

  // Exported field: field_fax
  $fields['chapter-field_fax'] = array(
    'field_name' => 'field_fax',
    'type_name' => 'chapter',
    'display_settings' => array(
      'weight' => '6',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Fax',
      'weight' => '7',
      'description' => 'Please enter the fax number for this chapter.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_logo
  $fields['chapter-field_logo'] = array(
    'field_name' => 'field_logo',
    'type_name' => 'chapter',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'page_image_normal_default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'page_image_normal_default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'Logo/Municipality',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'udi-logo.png',
        'filepath' => 'sites/default/files/imagefield_default_images/udi-logo.png',
        'filemime' => 'image/png',
        'source' => 'default_image_upload',
        'destination' => 'sites/default/files/imagefield_default_images/udi-logo.png',
        'filesize' => '5994',
        'uid' => '50',
        'status' => 1,
        'timestamp' => 1285814011,
        'fid' => '643',
      ),
      'use_default_image' => 1,
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_cart' => 0,
        'imagecache_municipality_logo' => 0,
        'imagecache_municipality_thumbnail' => 0,
        'imagecache_news_image' => 0,
        'imagecache_news_image_thumbnail' => 0,
        'imagecache_product' => 0,
        'imagecache_product_full' => 0,
        'imagecache_product_list' => 0,
        'imagecache_uc_thumbnail' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '262',
      'label' => 'Logo',
      'weight' => '-3',
      'description' => 'Please upload a logo for this chapter if different from the default logo.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_office_hours
  $fields['chapter-field_office_hours'] = array(
    'field_name' => 'field_office_hours',
    'type_name' => 'chapter',
    'display_settings' => array(
      'weight' => '7',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Office Hours',
      'weight' => '8',
      'description' => 'Please enter the office hours for this chapter.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_telephone
  $fields['chapter-field_telephone'] = array(
    'field_name' => 'field_telephone',
    'type_name' => 'chapter',
    'display_settings' => array(
      'weight' => '5',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_telephone][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Telephone',
      'weight' => '6',
      'description' => 'Please enter the general info telephone number.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_website
  $fields['chapter-field_website'] = array(
    'field_name' => 'field_website',
    'type_name' => 'chapter',
    'display_settings' => array(
      'weight' => '3',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => '_blank',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Website',
      'weight' => '4',
      'description' => 'Please enter a link to the chapter\'s website.',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_company_sponsor_patron
  $fields['company-field_company_sponsor_patron'] = array(
    'field_name' => 'field_company_sponsor_patron',
    'type_name' => 'company',
    'display_settings' => array(
      'weight' => '44',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'No
Yes|Promote to Patron Sponsor?',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Promote to Patron Sponsor',
      'weight' => '44',
      'description' => 'Promote a Company as Patron Sponsor will display it on the Homepage.',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_logo
  $fields['company-field_logo'] = array(
    'field_name' => 'field_logo',
    'type_name' => 'company',
    'display_settings' => array(
      'weight' => '40',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'logo_company_normal_default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'logo_company_normal_default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'Logo/company',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '2M',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_cart' => 0,
        'imagecache_company_logo' => 0,
        'imagecache_company_logo_thumbnail' => 0,
        'imagecache_main_sidebar_images' => 0,
        'imagecache_municipality_logo' => 0,
        'imagecache_municipality_thumbnail' => 0,
        'imagecache_news_image' => 0,
        'imagecache_news_image_thumbnail' => 0,
        'imagecache_product' => 0,
        'imagecache_product_full' => 0,
        'imagecache_product_list' => 0,
        'imagecache_uc_thumbnail' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '262',
      'label' => 'Logo',
      'weight' => '40',
      'description' => 'Please upload a logo for this company.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_member
  $fields['company-field_member'] = array(
    'field_name' => 'field_member',
    'type_name' => 'company',
    'display_settings' => array(
      'weight' => '42',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'No
Yes|is UDI Member?',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'yes',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Is UDI Member',
      'weight' => '42',
      'description' => 'Check the box if this company is a UDI Member, it will appear in the Membership Directory, otherwise leave it blank.',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_sponsor
  $fields['company-field_sponsor'] = array(
    'field_name' => 'field_sponsor',
    'type_name' => 'company',
    'display_settings' => array(
      'weight' => '43',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'No
Yes|is UDI Sponsor?',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'Yes',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Is UDI Sponsor',
      'weight' => '43',
      'description' => 'Check the box if the Company is a sponsor, it will appear on the Sponsors Page, otherwise leave it blank.',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_website
  $fields['company-field_website'] = array(
    'field_name' => 'field_website',
    'type_name' => 'company',
    'display_settings' => array(
      'weight' => '41',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => '_blank',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Website',
      'weight' => '41',
      'description' => 'Please enter a link to the company\'s website.',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_flickr_photo
  $fields['gallery-field_flickr_photo'] = array(
    'field_name' => 'field_flickr_photo',
    'type_name' => 'gallery',
    'display_settings' => array(
      'weight' => '31',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 's',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'm',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'flickrfield',
    'required' => '1',
    'multiple' => '1',
    'module' => 'flickrfield',
    'active' => '1',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'type' => 'photo_id',
          'id' => '',
          'nsid' => '100885354@N02',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Flickr Photo',
      'weight' => '31',
      'description' => 'The ID of your photoset can be found in the URL of that gallery following “sets” – excluding the slashes',
      'type' => 'flickrfield',
      'module' => 'flickrfield',
    ),
  );

  // Exported field: field_general_link
  $fields['image-field_general_link'] = array(
    'field_name' => 'field_general_link',
    'type_name' => 'image',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '1',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'optional',
    'title_value' => '',
    'enable_tokens' => 0,
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'General Link',
      'weight' => '-1',
      'description' => 'This is for inclusion of general links into the page type.',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_image
  $fields['image-field_image'] = array(
    'field_name' => 'field_image',
    'type_name' => 'image',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'Images',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_product' => 0,
        'imagecache_uc_thumbnail' => 0,
        'imagecache_product_full' => 0,
        'imagecache_cart' => 0,
        'imagecache_product_list' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Image',
      'weight' => '-4',
      'description' => 'Please choose an image.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_node_link
  $fields['image-field_node_link'] = array(
    'field_name' => 'field_node_link',
    'type_name' => 'image',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'annual_report' => 'annual_report',
      'blog' => 'blog',
      'bulletin' => 'bulletin',
      'career_application' => 'career_application',
      'career_posting' => 'career_posting',
      'chapter' => 'chapter',
      'company' => 'company',
      'event' => 'event',
      'forecast' => 'forecast',
      'forum' => 'forum',
      'image' => 'image',
      'internal_memo' => 'internal_memo',
      'meeting_minutes' => 'meeting_minutes',
      'municipal_document' => 'municipal_document',
      'municipality' => 'municipality',
      'simplenews' => 'simplenews',
      'page' => 'page',
      'panel' => 'panel',
      'policy_document' => 'policy_document',
      'poll' => 'poll',
      'presentation' => 'presentation',
      'product' => 'product',
      'properties' => 'properties',
      'submissions' => 'submissions',
      'udi_letters' => 'udi_letters',
      'webform' => 'webform',
      'profile' => 0,
      'roster' => 0,
      'uprofile' => 0,
      'news' => 'news',
      'media_release' => 'media_release',
      'event_industry' => 'event_industry',
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'node_link' => array(
        'teaser' => 0,
        'full' => 0,
        'title' => '',
        'hover_title' => '',
        'destination' => 'default',
      ),
      'fallback' => 'autocomplete',
      'edit_fallback' => 0,
      'label' => 'Node Link',
      'weight' => '-2',
      'description' => 'Enter a node link if required.',
      'type' => 'nodereference_url',
      'module' => 'nodereference_url',
    ),
  );

  // Exported field: field_file_upload_advanced
  $fields['page-field_file_upload_advanced'] = array(
    'field_name' => 'field_file_upload_advanced',
    'type_name' => 'page',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'zip pdf doc docx txt odf',
      'file_path' => 'pages',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_cart' => 0,
        'imagecache_company_logo' => 0,
        'imagecache_company_logo_thumbnail' => 0,
        'imagecache_main_sidebar_images' => 0,
        'imagecache_municipality_logo' => 0,
        'imagecache_municipality_thumbnail' => 0,
        'imagecache_news_image' => 0,
        'imagecache_news_image_thumbnail' => 0,
        'imagecache_product' => 0,
        'imagecache_product_full' => 0,
        'imagecache_product_list' => 0,
        'imagecache_uc_thumbnail' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'File Upload Advanced',
      'weight' => '2',
      'description' => 'Please upload files using this option.',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_general_link
  $fields['page-field_general_link'] = array(
    'field_name' => 'field_general_link',
    'type_name' => 'page',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '1',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'optional',
    'title_value' => '',
    'enable_tokens' => 0,
    'validate_url' => 1,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'General Link',
      'weight' => 0,
      'description' => 'This is for inclusion of general links into the page type.',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_image
  $fields['page-field_image'] = array(
    'field_name' => 'field_image',
    'type_name' => 'page',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'Images',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => 1,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_product' => 0,
        'imagecache_uc_thumbnail' => 0,
        'imagecache_product_full' => 0,
        'imagecache_cart' => 0,
        'imagecache_product_list' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '670',
      'label' => 'Image',
      'weight' => '1',
      'description' => 'Please choose an image if necessary.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_node_link
  $fields['page-field_node_link'] = array(
    'field_name' => 'field_node_link',
    'type_name' => 'page',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'annual_report' => 'annual_report',
      'blog' => 'blog',
      'bulletin' => 'bulletin',
      'career_application' => 'career_application',
      'career_posting' => 'career_posting',
      'chapter' => 'chapter',
      'company' => 'company',
      'event' => 'event',
      'forecast' => 'forecast',
      'forum' => 'forum',
      'image' => 'image',
      'internal_memo' => 'internal_memo',
      'meeting_minutes' => 'meeting_minutes',
      'municipal_document' => 'municipal_document',
      'municipality' => 'municipality',
      'simplenews' => 'simplenews',
      'page' => 'page',
      'panel' => 'panel',
      'policy_document' => 'policy_document',
      'poll' => 'poll',
      'presentation' => 'presentation',
      'product' => 'product',
      'properties' => 'properties',
      'submissions' => 'submissions',
      'udi_letters' => 'udi_letters',
      'webform' => 'webform',
      'profile' => 0,
      'roster' => 0,
      'uprofile' => 0,
      'news' => 'news',
      'media_release' => 'media_release',
      'event_industry' => 'event_industry',
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'node_link' => array(
        'teaser' => 0,
        'full' => 0,
        'title' => '',
        'hover_title' => '',
        'destination' => 'default',
      ),
      'fallback' => 'autocomplete',
      'edit_fallback' => 0,
      'label' => 'Node Link',
      'weight' => '-1',
      'description' => 'Enter a node link if required.',
      'type' => 'nodereference_url',
      'module' => 'nodereference_url',
    ),
  );

  // Exported field: field_image
  $fields['presentation-field_image'] = array(
    'field_name' => 'field_image',
    'type_name' => 'presentation',
    'display_settings' => array(
      'weight' => '7',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'presentation_image',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'presentation.gif',
        'filepath' => 'sites/default/files/imagefield_default_images/presentation.gif',
        'filemime' => 'image/gif',
        'source' => 'default_image_upload',
        'destination' => 'sites/default/files/imagefield_default_images/presentation.gif',
        'filesize' => '7082',
        'uid' => '50',
        'status' => 1,
        'timestamp' => 1286232960,
        'fid' => '771',
      ),
      'use_default_image' => 1,
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_cart' => 0,
        'imagecache_municipality_logo' => 0,
        'imagecache_municipality_thumbnail' => 0,
        'imagecache_news_image' => 0,
        'imagecache_news_image_thumbnail' => 0,
        'imagecache_product' => 0,
        'imagecache_product_full' => 0,
        'imagecache_product_list' => 0,
        'imagecache_uc_thumbnail' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Image',
      'weight' => '7',
      'description' => 'Please select an image to display for this presentation, if applicable.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_presentation_file
  $fields['presentation-field_presentation_file'] = array(
    'field_name' => 'field_presentation_file',
    'type_name' => 'presentation',
    'display_settings' => array(
      'weight' => '12',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'pdf pps ppt key odp pptx shw sxi zip',
      'file_path' => 'presentations',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_cart' => 0,
        'imagecache_municipality_logo' => 0,
        'imagecache_municipality_thumbnail' => 0,
        'imagecache_news_image' => 0,
        'imagecache_news_image_thumbnail' => 0,
        'imagecache_product' => 0,
        'imagecache_product_full' => 0,
        'imagecache_product_list' => 0,
        'imagecache_uc_thumbnail' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Presentation File',
      'weight' => '12',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_file_upload_advanced
  $fields['properties-field_file_upload_advanced'] = array(
    'field_name' => 'field_file_upload_advanced',
    'type_name' => 'properties',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => '',
      'file_path' => 'properties',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_cart' => 0,
        'imagecache_municipality_logo' => 0,
        'imagecache_municipality_thumbnail' => 0,
        'imagecache_news_image' => 0,
        'imagecache_news_image_thumbnail' => 0,
        'imagecache_product' => 0,
        'imagecache_product_full' => 0,
        'imagecache_product_list' => 0,
        'imagecache_uc_thumbnail' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Files/Documents',
      'weight' => '-2',
      'description' => 'Please upload files using this option.',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_image
  $fields['properties-field_image'] = array(
    'field_name' => 'field_image',
    'type_name' => 'properties',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'news_image_thumbnail_default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'Images',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => 1,
      'insert_styles' => array(
        'auto' => 'auto',
        'link' => 0,
        'image' => 0,
        'imagecache_cart' => 0,
        'imagecache_municipality_logo' => 0,
        'imagecache_municipality_thumbnail' => 0,
        'imagecache_news_image' => 0,
        'imagecache_news_image_thumbnail' => 0,
        'imagecache_product' => 0,
        'imagecache_product_full' => 0,
        'imagecache_product_list' => 0,
        'imagecache_uc_thumbnail' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '300',
      'label' => 'Image',
      'weight' => '-3',
      'description' => 'Please choose an image.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_file_upload_advanced
  $fields['simplenews-field_file_upload_advanced'] = array(
    'field_name' => 'field_file_upload_advanced',
    'type_name' => 'simplenews',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'zip pdf',
      'file_path' => 'newsletters',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_cart' => 0,
        'imagecache_municipality_logo' => 0,
        'imagecache_municipality_thumbnail' => 0,
        'imagecache_news_image' => 0,
        'imagecache_news_image_thumbnail' => 0,
        'imagecache_product' => 0,
        'imagecache_product_full' => 0,
        'imagecache_product_list' => 0,
        'imagecache_uc_thumbnail' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'File Upload Advanced',
      'weight' => '-1',
      'description' => 'Please upload files using this option.',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Blog post cover image');
  t('Career');
  t('Career Posting Attachment');
  t('Chapter Page');
  t('Chapter Region');
  t('Close Date');
  t('Company');
  t('Contact');
  t('Director');
  t('Fax');
  t('File Upload Advanced');
  t('Files/Documents');
  t('Flickr Photo');
  t('General Email');
  t('General Link');
  t('Image');
  t('Is UDI Member');
  t('Is UDI Sponsor');
  t('Logo');
  t('Node Link');
  t('Office Hours');
  t('Presentation File');
  t('Promote to Patron Sponsor');
  t('Resume');
  t('Salary');
  t('Subtitle');
  t('Telephone');
  t('Website');

  return $fields;
}
