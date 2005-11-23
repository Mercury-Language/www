<H2>How to get Mercury</H2>

The Mercury compiler is free software, and is distributed under the
terms of the GNU General Public License.
<p>
There are <? echo($next_beta_version == "" ? "two" : "three"); ?> 
main versions of Mercury available at the moment.

<H3> Current stable release </H3>

The most stable release will be a <em>numbered release</em>,
such as 0.10.1, 0.11.0 or 0.12.1.
These releases have been extensively tested, and often have 
pre-compiled binary packages for easy installation.
<p>
The <a href="download/release.html">current stable release</a>
is version <? echo $current_release; ?>.

<? if ($next_beta_version != "") { ?>
	<H3> Beta release </H3>

	A beta version of the next release is also available.
	The current beta release is version <? echo $next_beta_version; ?>. 
	The source distribution for this beta release is available for download
	from: 
	<ul>
	<li> 
	<A
	HREF="<?
		echo "http://$www_domain/download/files/beta-releases/";
		echo "$next_beta_version/index.html";
	?>"> the Mercury web site</A> or
	<li> <A HREF="<?
		echo "ftp://$ftp_domain/pub/mercury/beta-releases/";
		echo "$next_beta_version";
	?>">the Mercury ftp site</A>.
	</ul>
<? } ?>

<H3> Release of the day </H3>
<p>
To cater for those who need access to the latest features of Mercury,
we release a daily snapshot of the development system.
This is called a "release of the day (ROTD)".
Each ROTD is given a version number
"rotd-YYYY-MM-DD" according to the date on which it was built.  
<p>
The <a href="download/rotd.html">current release of the day</a>
is version <? echo $rotd_version; ?>.
