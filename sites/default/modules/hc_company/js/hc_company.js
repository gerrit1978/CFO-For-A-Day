jQuery(document).ready(function($) {

  $('#block-views-companies-block-2 a.company').click(function(e) {
    e.preventDefault();
    var id = $(this).attr('id');
    var nid = id.replace("company-", "");

  });

});