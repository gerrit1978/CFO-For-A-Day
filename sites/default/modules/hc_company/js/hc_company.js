jQuery(document).ready(function($) {

  $('#block-views-companies-block-2 a.company').click(function(e) {
    e.preventDefault();
    var id = $(this).attr('id');
    var nid = id.replace("company-", "");

    var url = Drupal.settings.basePath + "hc_company/" + nid;

    $.get(url, function(data) {
      $('.view-companies .detail ul li').fadeOut("fast", function() {
        $('.view-companies .detail ul li').fadeIn("slow").html(data);
      });
    });


  });

});