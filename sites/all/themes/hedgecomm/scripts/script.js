jQuery(document).ready(function($) {

	// countdown
	$('#countdown').countdown({ 
    until: new Date(2013, 4 - 1, 21)
  });
  
  // wildcard slideDown: adjust animation top to CSS height
  $('#block-block-1 .wildcard').mouseover(function() {
		$(this).stop().animate({top: '350px'}, "slow");
  });
  $('#block-block-1 .wildcard').mouseout(function() {
		$(this).stop().animate({top: '150px'}, "slow");
  });



});