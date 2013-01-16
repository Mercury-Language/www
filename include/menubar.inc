<ul class="menu">
<a href="<?php echo $root?>/about.html"><li <?php if($menu == 'About'){ ?> class="current" <?php } ?> >About</li></a>
	<?php
	if($menu == "About") { ?>
	<ul class="submenu">
	<li><a href="<?php echo $root?>/about/overview.html">overview</a></li>
	<hr/>
	<li><a href="<?php echo $root?>/about/features.html">features</a></li>
	<hr/>
	<li><a href="<?php echo $root?>/about/benchmarks.html">benchmarks</a></li>
	<hr/>
	<li><a href="<?php echo $root?>/about/backends.html">back ends</a></li>
	<hr/>
	<li><a href="<?php echo $root?>/about/related.html">related</a></li>
	</ul><?php
	}
	?>
<a href="<?php echo $root?>/news.html"><li <?php if($menu == 'News'){ ?> class="current" <?php } ?> >News</li></a>
<a href="<?php echo $root?>/download.html"><li <?php if($menu == 'Download'){ ?> class="current" <?php } ?> >Download</li></a>
	<?php
	if($menu == "Download") { ?>
	<ul class="submenu">
	<li><a href="">license</a></li>
	<hr/>
	<li><a href="">releases</a></li>
	<hr/>
	<li><a href="">release of the day(snapshot)</a></li>
	<hr/>
	<li><a href="">beta releases</a></li>
	</ul><?php
	}
	?>
<a href="<?php echo $root?>/information/documentation.html"><li <?php if($menu == 'Documentation'){ ?> class="current" <?php } ?> >Documentation</li></a>
	<?php
	if($menu == "Documentation") { ?>
	<ul class="submenu">
	<li><a href="<?php echo $root?>/information/papers.html">papers</a></li>
	<hr/>
	<li><a href="<?php echo $root?>/information/deep_demo.html">deep profiler</a></li>
	</ul><?php
	}
	?>
<a href=""><li <?php if($menu == 'Development'){ ?> class="current" <?php } ?> >Development</li></a>
	<?php
	if($menu == "Development") { ?>
	<ul class="submenu">
	<li><a href="<?php echo $root?>/information/developer.html">developers documentation</a></li>
	<hr/>
	<li><a href="http://bugs.mercury.csse.unimelb.edu.au">bugs database</a></li>
	<hr/>
	<li><a href="<?php echo $root?>/contact/people.html">the team</a></li>
	<hr/>
	<li><a href="<?php echo $root?>/contributions.html">contributing</a></li>
	</ul><?php
	}
	?>
<a href="<?php echo $root?>/contact.html"><li <?php if($menu == 'Contact'){ ?> class="current" <?php } ?> >Contact</li></a>
</ul>