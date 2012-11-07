<?php

function hedgecomm_alpha_preprocess_node(&$vars) {

	// hide content from frontpage
	if (drupal_is_front_page()) {
	  unset($vars['content']);
	  $vars['content'] = array('#markup' => '');
	}

}