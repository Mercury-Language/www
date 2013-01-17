<H2>Download<span class="submenutitle">/ beta releases</span></H2>

	<p>
	A beta version of the next release is also available.
	The current beta release is version <?php echo $next_beta_version; ?>. 
	The source distribution for this beta release is available for download
	from:
	</p>
	<ul class="nonindentlist">
	<li> 
	<A
	HREF="<?php
		echo "http://$www_domain/download/files/beta-releases/";
		echo "$next_beta_version/index.html";
	?>"> the Mercury web site</A> or
	<li> <A HREF="<?php
		echo "ftp://$ftp_domain/pub/mercury/beta-releases/";
		echo "$next_beta_version";
	?>">the Mercury ftp site</A>.
	</ul>


<!--
<?php if ($next_beta_version != "") { ?>
	<H3> Beta release </H3>

	A beta version of the next release is also available.
	The current beta release is version <?php echo $next_beta_version; ?>. 
	The source distribution for this beta release is available for download
	from: 
	<ul>
	<li> 
	<A
	HREF="<?php
		echo "http://$www_domain/download/files/beta-releases/";
		echo "$next_beta_version/index.html";
	?>"> the Mercury web site</A> or
	<li> <A HREF="<?php
		echo "ftp://$ftp_domain/pub/mercury/beta-releases/";
		echo "$next_beta_version";
	?>">the Mercury ftp site</A>.
	</ul>
<?php } ?>
-->