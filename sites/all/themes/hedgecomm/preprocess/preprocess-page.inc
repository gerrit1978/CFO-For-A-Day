<?php

function hedgecomm_alpha_preprocess_page(&$vars) {

	// add IE stylesheets
	drupal_add_css(path_to_theme() . '/css/ie.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 7', '!IE' => FALSE), 'preprocess' => FALSE));


	// hide content from frontpage
	if (drupal_is_front_page()) {
	  unset($vars['title']);
	  $vars['title'] = "";
	}	
}