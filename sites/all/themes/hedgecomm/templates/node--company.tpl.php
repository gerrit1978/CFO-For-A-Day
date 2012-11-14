<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>


	<?php print render($content['field_company_logo']); ?>

  <?php print render($title_prefix); ?>
    <h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
  <?php print render($title_suffix); ?>

  <?php if ($display_submitted): ?>
    <div class="submitted">
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>

  <div class="content"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      hide($content['cfos']);
      print render($content);
    ?>
  </div>
  
  <?php if ($content['cfos']): ?>
    <div class="cfo">
      <?php print render($content['cfos']); ?>
    </div>
  <?php endif; ?>
</div>
