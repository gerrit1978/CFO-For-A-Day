<?php

function hc_twitter_admin_form($form, &$form_state) {
  $form['hc_twitter_hashtag'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('hc_twitter_hashtag', ''),
    '#title' => 'Twitter hashtag',
    '#description' => t('Enter the Twitter hashtag, without the #.'),
  );
  
  $form['hc_twitter_number'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('hc_twitter_number', ''),
    '#title' => 'Number of Tweets to be shown',
    '#description' => t('Enter the number of Tweets to be shown in the block.'),
  );
  
  return system_settings_form($form);
}