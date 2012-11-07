<?php

function hedgecomm_alpha_preprocess_page(&$vars) {

	// hide content from frontpage
	if (drupal_is_front_page()) {
	  unset($vars['title']);
	  $vars['title'] = "";
	}

}