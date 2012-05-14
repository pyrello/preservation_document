<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php
	$uri = $field_document_pdf[0]['uri'];
	$directory_path = file_stream_wrapper_get_instance_by_uri($uri)->getDirectoryPath();
	$url = url($directory_path . '/' . file_uri_target($uri), array('absolute' => TRUE));
	/*dpm($variables);*/
	?>
  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <div id="meta" class="content"<?php print $content_attributes; ?>>
  	
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
			hide($content['field_document_pdf']);
    ?>
			
  </div>
  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>
  
</div>
<iframe id="pdfviewer" src="<?php print $url; ?>"></iframe>
