<ul class="menu">
<a href="<?php echo $root?>/about.php"><li <?php if($menu == 'About'){ ?> class="current" <?php } ?> >About</li></a>
	<?php
	if($menu == "About") { ?>
	<ul class="submenu">
	<li><a href="<?php echo $root?>/about/overview.php">overview</a></li>
	<hr/>
	<li><a href="<?php echo $root?>/about/features.php">features</a></li>
	<hr/>
	<li><a href="<?php echo $root?>/about/benchmarks.php">benchmarks</a></li>
	<hr/>
	<li><a href="<?php echo $root?>/about/backends.php">back ends</a></li>
	<hr/>
	<li><a href="<?php echo $root?>/about/related.php">related</a></li>
	</ul><?php
	}
	?>
<a href="<?php echo $root?>/news.php"><li <?php if($menu == 'News'){ ?> class="current" <?php } ?> >News</li></a>
<a href="<?php echo $root?>/download.php"><li <?php if($menu == 'Download'){ ?> class="current" <?php } ?> >Download</li></a>
	<?php
	if($menu == "Download") { ?>
	<ul class="submenu">
	<li><a href="<?php echo $root?>/download/license.php">license</a></li>
	<hr/>
	<li><a href="<?php echo $root?>/download/releases.php">releases</a></li>
	<hr/>
	<li><a href="<?php echo $root?>/download/rotd.php">release of the day(snapshot)</a></li>
	<hr/>
	<li><a href="<?php echo $root?>/download/betareleases.php">beta releases</a></li>
	</ul><?php
	}
	?>
<a href="<?php echo $root?>/documentation/documentation.php"><li <?php if($menu == 'Documentation'){ ?> class="current" <?php } ?> >Documentation</li></a>
	<?php
	if($menu == "Documentation") { ?>
	<ul class="submenu">
	<li><a href="<?php echo $root?>/documentation/papers.php">papers</a></li>
	<hr/>
	<li><a href="<?php echo $root?>/documentation/deep_demo.php">deep profiler</a></li>
	</ul><?php
	}
	?>
<a href=""><li <?php if($menu == 'Development'){ ?> class="current" <?php } ?> >Development</li></a>
	<?php
	if($menu == "Development") { ?>
	<ul class="submenu">
	<li><a href="<?php echo $root?>/information/developer.php">developers documentation</a></li>
	<hr/>
	<li><a href="http://bugs.mercury.csse.unimelb.edu.au">bugs database</a></li>
	<hr/>
	<li><a href="<?php echo $root?>/contact/people.php">the team</a></li>
	<hr/>
	<li><a href="<?php echo $root?>/contributions.php">contributing</a></li>
	</ul><?php
	}
	?>
<a href="<?php echo $root?>/contact.php"><li <?php if($menu == 'Contact'){ ?> class="current" <?php } ?> >Contact</li></a>
</ul>