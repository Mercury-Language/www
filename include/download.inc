<H2>How to get Mercury</H2>
<?php $next_beta_version="11.07.2-beta" ?>

The Mercury compiler is free software, and is distributed under the
terms of the GNU General Public License.
<p>
There are <?php echo($next_beta_version == "" ? "two" : "three"); ?> 
main versions of Mercury available at the moment.

<H3> Current stable release </H3>

The most stable release will be a <em>numbered release</em>,
such as 0.10.1, 0.13.0 or 10.04.
These releases have been extensively tested, and often have 
pre-compiled binary packages for easy installation.
<p>
The stable release naming scheme was 0.1 up to 0.13 for the first thirteen stable releases.
In February 2010 the Mercury project decided to name each stable release by using the year and month of the release.
For example 10.04 is for a release made in April 2010.
<p>
The <a href="download/release.html">current stable release</a>
is version <?php echo $current_release; ?>.

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

<H3> Release of the day </H3>
<p>
To cater for those who need access to the latest features of Mercury,
we release a daily snapshot of the development system.
This is called a "release of the day (ROTD)".
Each ROTD is given a version number
"rotd-YYYY-MM-DD" according to the date on which it was built.  
<p>
The <a href="download/rotd.html">current release of the day</a>
is version <?php echo $rotd_version; ?>.

<h3>Anonymous CVS access</h3>
<p>
Anonymous access to our CVS repository is also available.                                                                  
See the <a href="information/developers/remote_cvs.html">CVS access</a>
page for details.
</p>

