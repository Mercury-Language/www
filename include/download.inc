<H2>Download</H2>
<?php $next_beta_version="12.08-beta" ?>
<p>
The Mercury compiler is free software, and is distributed under the
terms of the GNU General Public License.
</p>

<H3> Stable Release </H3>

<p>
The current stable release is version <a href="download/release.html"><?php echo $current_release; ?></a>.
<a href=""><button class="button">Download</button></a>
</p>
<p>
The most stable release will be a <em>numbered release</em>,
such as 0.10.1, 0.13.0 or 10.04.
These releases have been extensively tested, and often have 
pre-compiled binary packages for easy installation.
</p><p>
The stable release naming scheme was 0.1 up to 0.13 for the first thirteen stable releases.
In February 2010 the Mercury project decided to name each stable release by using the year and month of the release.
For example 10.04 is for a release made in April 2010.
</p>

<?php if ($next_beta_version != "") { ?>
	<H3> Beta release </H3>
	<p>
	The current beta release is version <?php echo $next_beta_version; ?>. 
	<a href=""><button class="button">Download</button></a>
	</p>
<?php } ?>

<h3> Release of the day </h3>
<p>
The current release of the day
is version <a href="download/rotd.html"><?php echo $rotd_version; ?></a>.
<a href=""><button class="button">Download</button></a>
</p>
<p>
To cater for those who need access to the latest features of Mercury,
we release a daily snapshot of the development system.
This is called a "release of the day (ROTD)".
Each ROTD is given a version number
"rotd-YYYY-MM-DD" according to the date on which it was built.  
</p>

