<?php

/**
 * Implementation of hook_content_default_fields().
 */
function udi_features_slideshow_content_type_content_default_fields() {
  $fields = array();

  // Exported field: field_slideshow_image_home_full
  $fields['slideshow_home-field_slideshow_image_home_full'] = array(
    'field_name' => 'field_slideshow_image_home_full',
    'type_name' => 'slideshow_home',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'path_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'path_plain',
        'exclude' => 0,
      ),
      '4' => array(
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
      'file_path' => 'slideshow/home',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '2M',
      'max_filesize_per_node' => '',
      'max_resolution' => '',
      'min_resolution' => '665x330',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 1,
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
        'imagecache_slideshow_section_large' => 0,
        'imagecache_slideshow_section_norm' => 0,
        'imagecache_uc_thumbnail' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Full Image',
      'weight' => '-2',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_slideshow_learn_link
  $fields['slideshow_home-field_slideshow_learn_link'] = array(
    'field_name' => 'field_slideshow_learn_link',
    'type_name' => 'slideshow_home',
    'display_settings' => array(
      'weight' => '5',
      'parent' => 'group_slideshow_learn',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      '4' => array(
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
      'target' => 'default',
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
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Read More (External)',
      'weight' => '5',
      'description' => 'Link an external page (e.g. outside UDI). You may also link internal page using the internal path, e.g. about/contact. <strong>NOTE</strong> that an external page must begin with <em>http://</em>, otherwise it is treated as an internal page.',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_slideshow_learn_noderef
  $fields['slideshow_home-field_slideshow_learn_noderef'] = array(
    'field_name' => 'field_slideshow_learn_noderef',
    'type_name' => 'slideshow_home',
    'display_settings' => array(
      'weight' => '4',
      'parent' => 'group_slideshow_learn',
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
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'properties' => 'properties',
      'career_posting' => 'career_posting',
      'industry_event' => 'industry_event',
      'event' => 'event',
      'press_release' => 'press_release',
      'news_item' => 'news_item',
      'page' => 'page',
      'annual_report' => 0,
      'blog' => 0,
      'career_application' => 0,
      'chapter' => 0,
      'committee' => 0,
      'company' => 0,
      'event_okanagan' => 0,
      'event_vancouver' => 0,
      'file_package' => 0,
      'forecast' => 0,
      'image' => 0,
      'municipal_document' => 0,
      'simplenews' => 0,
      'panel' => 0,
      'policy_document' => 0,
      'poll' => 0,
      'presentation' => 0,
      'product' => 0,
      'slideshow_home' => 0,
      'slideshow_section' => 0,
      'submissions' => 0,
      'event_price_corporate' => 0,
      'event_price_member' => 0,
      'event_price_non_member' => 0,
      'udi_letters' => 0,
      'webform' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'starts_with',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_slideshow_learn_noderef][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Read More (Internal)',
      'weight' => '4',
      'description' => 'Search for an internal UDI page (Node).',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_slideshow_weight
  $fields['slideshow_home-field_slideshow_weight'] = array(
    'field_name' => 'field_slideshow_weight',
    'type_name' => 'slideshow_home',
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
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '-10',
    'max' => '10',
    'allowed_values' => '',
    'allowed_values_php' => '$n=array(); for($i=-10; $i<11; $i++) {$n[$i] = $i;} return $n;',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '0',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Weight',
      'weight' => '1',
      'description' => 'Provide an ordering to the slideshow images by specifying the Weight. The lightest displays first (e.g. -10), and the heaviest displays last (e.g. 10). ',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_slideshow_image_sect_full
  $fields['slideshow_section-field_slideshow_image_sect_full'] = array(
    'field_name' => 'field_slideshow_image_sect_full',
    'type_name' => 'slideshow_section',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'path_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'path_plain',
        'exclude' => 0,
      ),
      '4' => array(
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
      'file_path' => 'slideshow/section',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '2M',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '1006x330',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 1,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => NULL,
      'insert_styles' => NULL,
      'insert_default' => NULL,
      'insert_class' => NULL,
      'insert_width' => NULL,
      'label' => 'Image',
      'weight' => '-2',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_slideshow_learn_link
  $fields['slideshow_section-field_slideshow_learn_link'] = array(
    'field_name' => 'field_slideshow_learn_link',
    'type_name' => 'slideshow_section',
    'display_settings' => array(
      'weight' => '5',
      'parent' => 'group_slideshow_learn',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      '4' => array(
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
      'target' => 'default',
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
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Link',
      'weight' => '-1',
      'description' => 'Provide a link where it will redirect to a path when clicked. E.g. about/contact.',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_slideshow_sect_page_url
  $fields['slideshow_section-field_slideshow_sect_page_url'] = array(
    'field_name' => 'field_slideshow_sect_page_url',
    'type_name' => 'slideshow_section',
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
    'text_processing' => 0,
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'size' => '60',
      'autocomplete_match' => 'starts_with',
      'autocomplete_case' => '0',
      'i18n_flddata' => 0,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_slideshow_sect_page_url][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Path',
      'weight' => '8',
      'description' => 'Provide the path (URL) to the page that the image belongs to. E.g. about/contact. For displaying the image overall multiple pages, wildcard (*), should be used. For example, about/*, will display the image over all pages starting with the pattern about/.',
      'type' => 'autocomplete_widgets_flddata',
      'module' => 'autocomplete_widgets',
    ),
  );

  // Exported field: field_slideshow_weight
  $fields['slideshow_section-field_slideshow_weight'] = array(
    'field_name' => 'field_slideshow_weight',
    'type_name' => 'slideshow_section',
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
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '-10',
    'max' => '10',
    'allowed_values' => '',
    'allowed_values_php' => '$n=array(); for($i=-10; $i<11; $i++) {$n[$i] = $i;} return $n;',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '0',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Weight',
      'weight' => '1',
      'description' => 'Provide an ordering to the slideshow images by specifying the Weight. The lightest displays first (e.g. -10), and the heaviest displays last (e.g. 10). ',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Full Image');
  t('Image');
  t('Link');
  t('Path');
  t('Read More (External)');
  t('Read More (Internal)');
  t('Weight');

  return $fields;
}
