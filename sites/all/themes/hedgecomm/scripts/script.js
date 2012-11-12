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


	// flexslider company navigation
	$('.flexslider').flexslider({
		animation: "slide",
    animationLoop: false,
    itemWidth: 150,
    itemMargin: 6
 	});
 	
});