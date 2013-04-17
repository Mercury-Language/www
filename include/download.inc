<h2>How to get Mercury</h2>

<p>
The Mercury system is free software, and is distributed under the
terms of the GNU General Public License.
</p>

<p>
Source downloads are available from
<a href="http://dl.mercurylang.org/index.html">our downloads page</a>.
This page is temporary as we are in the process of reorganising the
project's hosting,
we hope to improve this in the future.
</p>

<h3>About Mercury's versions</h3>

<?php $next_beta_version="" ?>

<p>
There are <?php echo($next_beta_version == "" ? "two " : "three "); ?>
main versions of Mercury available at the moment.
<p/>

<h4> Current stable release </h4>

<p>
The most stable release will be a <em>numbered release</em>,
such as 0.10.1, 0.13.0 or 10.04.
These releases have been extensively tested, and often have
pre-compiled binary packages for easy installation.
</p>
<p>
The stable release naming scheme was 0.1 up to 0.13 for the first thirteen
stable releases.
In February 2010 the Mercury project decided to name each stable release by
using the year and month of the release.
For example 10.04 is for a release made in April 2010.
</p>

<p>
The current stable release is version <?php echo $current_release; ?>.
See
<a href="http://dl.mercurylang.org/index.html">our downloads page</a>.
</p>

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

<h4> Release of the day </h4>

<p>
To cater for those who need access to the latest features of Mercury,
we release a periodic snapshot of the development system.
This is called a "release of the day (ROTD)".
Each ROTD is given a version number
"rotd-YYYY-MM-DD" according to the date on which it was built.
ROTDs are not necessarily daily.
</p>
<p>
The current release of the day is version <?php echo $rotd_version; ?>.
See
<a href="http://dl.mercurylang.org/index.html">our downloads page</a>.
</p>

<h3>Anonymous git access</h3>

<p>
Anonymous access to our git repository is also available
via github at
<a href="https://github.com/Mercury-Language">
https://github.com/Mercury-Language</a>.
</p>

<p>
Note that you need Mercury installed in order to build Mercury from git.
In other words,
you must bootstrap using one of the source distributions above.
When building the latest revision from git,
you should use the most recent ROTD source distribution;
while older ROTDs may work, there is no guarantee that they will.
Generally you should bootstrap using an ROTD that approximately matches the
age of the git revision that you want to build.
See
<a href="https://github.com/Mercury-Language/mercury/blob/master/README.bootstrap">
README.bootstrap</a> for more details.
</p>

