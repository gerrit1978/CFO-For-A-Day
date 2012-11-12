<ul>
<li class="first">
<div class="label">
Deel op
</div>
</li>

<li>
<!-- Facebook Like Button BEGIN -->
<div class="facebook widget first">
<iframe src="//www.facebook.com/plugins/like.php?locale=en_GB&amp;href=<?php print $path; ?>&amp;send=false&amp;layout=button_count&amp;width=130&amp;show_faces=false&amp;action=like&amp;colorscheme=light&amp;font=arial&amp;height=21&amp;appId=488944954471810" scrolling="no" frameborder="0" style="border:none; overflow:hidden; width:75px; height:21px;" allowTransparency="true"></iframe>
</div>
<!-- Facebook Like Button END -->
</li>

<li>
<!-- Tweet Button BEGIN -->
<div class="twitter widget">
<a href="https://twitter.com/share" class="twitter-share-button" data-lang="en">Tweet</a>
<script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0];if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src="https://platform.twitter.com/widgets.js";fjs.parentNode.insertBefore(js,fjs);}}(document,"script","twitter-wjs");</script>
</div>
<!-- Tweet Button END -->
</li>

<li class="last">
<!-- LinkedIN BEGIN -->
<div class="linkedin widget last">
<script src="//platform.linkedin.com/in.js" type="text/javascript"></script>
<script type="IN/Share" data-url="<?php print $path; ?>"></script>
</div>
<!-- LinkedIN END -->
</li>

</ul>

<?php if (FALSE): ?>
<!-- Google+ Button BEGIN -->
<div class="google widget">
<g:plusone size="medium" annotation="inline" width="150"></g:plusone>
<script type="text/javascript">
  window.___gcfg = {lang: 'en-GB'};

  (function() {
    var po = document.createElement('script'); po.type = 'text/javascript'; po.async = true;
    po.src = 'https://apis.google.com/js/plusone.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(po, s);
  })();
</script>
</div>
<!-- Google+ Button END -->
<?php endif; ?>

