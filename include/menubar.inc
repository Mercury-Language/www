<ul class="menu">
<a href="<?php echo $root?>/about.html"><li <?php if($menu == 'About'){ ?> class="current" <?php } ?> >About</li></a>
	<?php
	if($menu == "About") { ?>
	<ul class="submenu">
	<li><a href="<?php echo $root?>/about/motivation.html">
	<div <?php if($include=="overview.inc"){ ?> class="submenucurrent" <?php } ?>>
	motivation</div></a></li>
	<li><a href="<?php echo $root?>/about/benchmarks.html">
	<div <?php if($include=="benchmarks.inc"){ ?> class="submenucurrent" <?php } ?>>
	benchmarks</div></a></li>
	<li><a href="<?php echo $root?>/about/backends.html">
	<div <?php if($include=="backends.inc"){ ?> class="submenucurrent" <?php } ?>>
	back ends</div></a></li>
	<li><a href="<?php echo $root?>/about/related.html">
	<div <?php if($include=="related.inc"){ ?> class="submenucurrent" <?php } ?>>
	related</div></a></li>
	</ul><?php
	}
	?>
<a href="<?php echo $root?>/news.html"><li <?php if($menu == 'News'){ ?> class="current" <?php } ?> >News</li></a>
<a href="<?php echo $root?>/download.html"><li <?php if($menu == 'Download'){ ?> class="current" <?php } ?> >Download</li></a>
	<?php
    // Temporarily disabled submenus by pbone until we fix the download
    // links more perminently.
    //if($menu == "Download") {
    if (false) {
    ?>
	<ul class="submenu">
	<li><a href="<?php echo $root?>/download/releases.html">
	<div <?php if($include=="releases.inc"){ ?> class="submenucurrent" <?php } ?>>
	releases</div></a></li>
	<li><a href="<?php echo $root?>/download/rotd.html">
	<div <?php if($include=="rotd.inc"){ ?> class="submenucurrent" <?php } ?>>
	release of the day (snapshot)</div></a></li>
	</ul><?php
	}
	?>
<a href="<?php echo $root?>/documentation/documentation.html"><li <?php if($menu == 'Documentation'){ ?> class="current" <?php } ?> >Documentation</li></a>
	<?php
	if($menu == "Documentation") { ?>
	<ul class="submenu">
	<li><a href="<?php echo $root?>/documentation/papers.html">
	<div <?php if($include=="papers.inc"){ ?> class="submenucurrent" <?php } ?>>
	papers</div></a></li>
	<li><a href="<?php echo $root?>/documentation/deep_demo.html">
	<div <?php if($include=="deep_demo.inc"){ ?> class="submenucurrent" <?php } ?>>
	deep profiler</div></a></li>
	</ul><?php
	}
	?>
<a href="<?php echo $root?>/development.html"><li <?php if($menu == 'Development'){ ?> class="current" <?php } ?> >Development</li></a>
	<?php
	if($menu == "Development") { ?>
	<ul class="submenu">
	<li><a href="<?php echo $root?>/development/contributions.html">
	<div <?php if($include=="contributions.inc"){ ?> class="submenucurrent" <?php } ?>>
	contributing</div></a></li>
	<li><a href="<?php echo $root?>/development/people.html">
	<div <?php if($include=="people.inc"){ ?> class="submenucurrent" <?php } ?>>
	the team</div></a></li>
	<li><a href="<?php echo $root?>/development/developer.html">
	<div <?php if($include=="developer.inc"){ ?> class="submenucurrent" <?php } ?>>
	developer documentation</div></a></li>
	</ul><?php
	}
	?>
<a href="<?php echo $root?>/contact.html"><li <?php if($menu == 'Contact'){ ?> class="current" <?php } ?> >Contact</li></a>
<br/><br/>
<a href="https://bugs.mercurylang.org/"><li style="font-family: georgia; line-height: 1.2em">Bug Tracker</li></a>
</ul>
