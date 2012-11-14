<?php

function hedgecomm_alpha_preprocess_node(&$vars) {

	// hide content from frontpage
	if (drupal_is_front_page()) {
	  unset($vars['content']);
	  $vars['content'] = array('#markup' => '');
	}
	
	if ($vars['node']->type == 'company') {
	
		$nid_company = $vars['node']->nid;
		$nid_cfo = "";
		
		$result = db_query("SELECT * FROM {field_revision_field_cfo_company} WHERE field_cfo_company_nid=:nid_company;", array(':nid_company' => $nid_company));
		foreach ($result as $row) {
		  $nid_cfo = $row->entity_id;
		}

		$output = "";
		if ($nid_cfo) {
		  $output = "<div class='cfo-inner'>";
		  
		  $cfo_wrapper = entity_metadata_wrapper('node', $nid_cfo);
		  
		  $cfo_name = $cfo_wrapper->title->value();
		  $cfo_beschrijving_field = $cfo_wrapper->field_cfo_beschrijving->value();
			$cfo_beschrijving = check_markup($cfo_beschrijving_field['value'], $cfo_beschrijving_field['format']);
			
			$cfo_company_name = $vars['node']->title;
	  
	  	$output .= "<div class='cfo-visual'>&nbsp;</div>"
	  	  . "<div class='cfo-name'>$cfo_name | CFO $cfo_company_name</div>"
	  	  . "<div class='cfo-description'>$cfo_beschrijving</div>";
		  
		  $output .= "</div>";
		  $vars['content']['cfos'] = array(
		    '#markup' => $output,
		  );
		} 
	
	}
	

}