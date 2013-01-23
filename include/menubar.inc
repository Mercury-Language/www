<ul class="menu">
<a href="<?php echo $root?>/about.php"><li <?php if($menu == 'About'){ ?> class="current" <?php } ?> >About</li></a>
	<?php
	if($menu == "About") { ?>
	<ul class="submenu">
	<li><a href="<?php echo $root?>/about/overview.php">
	<div <?php if($include=="overview.inc"){ ?> class="submenucurrent" <?php } ?>>
	overview</div></a></li>
	<hr/>
	<li><a href="<?php echo $root?>/about/features.php">
	<div <?php if($include=="features.inc"){ ?> class="submenucurrent" <?php } ?>>
	features</div></a></li>
	<hr/>
	<li><a href="<?php echo $root?>/about/benchmarks.php">
	<div <?php if($include=="benchmarks.inc"){ ?> class="submenucurrent" <?php } ?>>
	benchmarks</div></a></li>
	<hr/>
	<li><a href="<?php echo $root?>/about/backends.php">
	<div <?php if($include=="backends.inc"){ ?> class="submenucurrent" <?php } ?>>
	back ends</div></a></li>
	<hr/>
	<li><a href="<?php echo $root?>/about/related.php">
	<div <?php if($include=="related.inc"){ ?> class="submenucurrent" <?php } ?>>
	related</div></a></li>
	</ul><?php
	}
	?>
<a href="<?php echo $root?>/news.php"><li <?php if($menu == 'News'){ ?> class="current" <?php } ?> >News</li></a>
<a href="<?php echo $root?>/download.php"><li <?php if($menu == 'Download'){ ?> class="current" <?php } ?> >Download</li></a>
	<?php
	if($menu == "Download") { ?>
	<ul class="submenu">
	<li><a href="<?php echo $root?>/download/license.php">
	<div <?php if($include=="license.inc"){ ?> class="submenucurrent" <?php } ?>>
	license</div></a></li>
	<hr/>
	<li><a href="<?php echo $root?>/download/releases.php">
	<div <?php if($include=="releases.inc"){ ?> class="submenucurrent" <?php } ?>>
	releases</div></a></li>
	<hr/>
	<li><a href="<?php echo $root?>/download/rotd.php">
	<div <?php if($include=="rotd.inc"){ ?> class="submenucurrent" <?php } ?>>
	release of the day(snapshot)</div></a></li>
	</ul><?php
	}
	?>
<a href="<?php echo $root?>/documentation/documentation.php"><li <?php if($menu == 'Documentation'){ ?> class="current" <?php } ?> >Documentation</li></a>
	<?php
	if($menu == "Documentation") { ?>
	<ul class="submenu">
	<li><a href="<?php echo $root?>/documentation/papers.php">
	<div <?php if($include=="papers.inc"){ ?> class="submenucurrent" <?php } ?>>
	papers</div></a></li>
	<hr/>
	<li><a href="<?php echo $root?>/documentation/deep_demo.php">
	<div <?php if($include=="deep_demo.inc"){ ?> class="submenucurrent" <?php } ?>>
	deep profiler</div></a></li>
	</ul><?php
	}
	?>
<a href="<?php echo $root?>/development.php"><li <?php if($menu == 'Development'){ ?> class="current" <?php } ?> >Development</li></a>
	<?php
	if($menu == "Development") { ?>
	<ul class="submenu">
	<li><a href="<?php echo $root?>/development/contributions.php">
	<div <?php if($include=="contributions.inc"){ ?> class="submenucurrent" <?php } ?>>
	contributing</div></a></li>
	<hr/>
	<li><a href="<?php echo $root?>/development/people.php">
	<div <?php if($include=="people.inc"){ ?> class="submenucurrent" <?php } ?>>
	the team</div></a></li>
	<hr/>
	<li><a href="<?php echo $root?>/development/developer.php">
	<div <?php if($include=="developer.inc"){ ?> class="submenucurrent" <?php } ?>>
	developer documentation</div></a></li>
	</ul><?php
	}
	?>
<a href="<?php echo $root?>/contact.php"><li <?php if($menu == 'Contact'){ ?> class="current" <?php } ?> >Contact</li></a>
<br/><br/>
<a href="http://bugs.mercury.csse.unimelb.edu.au"><li style="font-family: georgia; line-height: 1.2em">Bug Tracker</li></a>
</ul>