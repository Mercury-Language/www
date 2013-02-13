<?php

#
# This is PHP3 code.  On Debian systems (e.g. venus.cs.mu.oz.au),
# see /usr/share/doc/php3-doc/html/index.html for documentation on PHP3.
#

$aus_ftp = "ftp://$ftp_domain/pub/mercury/";
$aus_http = "http://$www_domain/download/files/";
$usa_sourceforge_http = "http://prdownloads.sourceforge.net/mercury/";
$usa_sunsite_ftp = "ftp://sunsite.unc.edu/pub/Linux/devel/lang/mercury/";
$usa_sunysb_ftp = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/";
$sweden_ftp = "ftp://ftp.csd.uu.se/pub/Mercury/";

#
# XXX The stuff for the Uppsala and Stonybrook ftp sites is disabled,
# since those sites are not working/updated at the moment.
#
$Uppsala = "no";
$Stonybrook = "no";

#
# XXX These sites should be enabled once the release has been uploaded to
# them
#
$Sunsite = "no";
$Sourceforge = "no";

function link_to ($directory, $filename, $description)
{
	echo "<a href = \"" . $directory . $filename .
		"\">" . $description . "</a>\n";
	echo "&nbsp;&nbsp;&nbsp;\n";
}

function links_to_file ($filename, $onSunsite)
{
	global $aus_ftp, $aus_http, $usa_sourceforge_http, $usa_sunsite_ftp,
		$usa_sunysb_ftp, $sweden_ftp;
	global $Uppsala, $Stonybrook;
	global $Sunsite, $SourceForge;

	link_to ($aus_ftp, $filename, "Australia (FTP)");
	link_to ($aus_http, $filename, "Australia (HTTP)");
	if ($onSunsite == "yes" && $Sunsite == "yes") {
		link_to ($usa_sunsite_ftp, $filename, "USA (Sunsite FTP)");
	}
	if ($Sourceforge == "yes") {
		link_to ($usa_sourceforge_http, $filename, 
			"USA (SourceForge HTTP)");
	}
	if ($Uppsala == "yes") {
		link_to ($usa_sunysb_ftp, $filename, "USA (Stonybrook FTP)");
	}
	if ($Stonybrook == "yes") {
		link_to ($sweden_ftp, $filename, "Sweden (FTP)");
	}
}

?>
<h2>Download<span class="submenutitle">/ releases</span></h2>
<p>
The Mercury distribution has been released to the public several times. The release information pages for these older releases may contain useful information, including release notes and known problems, sometimes with work-arounds or patches. If you are experiencing problems with these releases, it might be worth installing the current release.
</p>

<div class="quote" style="max-width: 400px; min-width: 210px;float: right; margin: 50px 50px 40px 40px; border: 1px solid white;" align="left">
<h2 style="font-size: 24px;color: #808080; font-style: italic;">
&ldquo;In February 2010 the Mercury project decided to name each stable release by using the year and month of the release.</h2>
</div>

<table class="releases">
<tr>
<td>
current release: 
</td>
<td>
<a href="<?php $root ?>/download/release-<?php echo $current_release ?>.html"><?php echo $current_release?></a>
<button class="button">Download</button>
</td>
</tr>
<tr>
<td>
old releases:
</td>
<td>
<a href="old-release.php#11.01">11.01</a><br/>
<a href="old-release.php#10.04.2">10.04.2</a><br/>
<a href="old-release.php#0.13.1">0.13.1</a><br/>
<a href="old-release.php#0.11">0.11</a><br/>
<a href="old-release.php#0.9.1">0.9.1</a><br/>
<a href="old-release.php#0.9">0.9</a><br/>
<a href="old-release.php#0.8.1">0.8.1</a><br/>
<a href="old-release.php#0.8">0.8</a><br/>
</td> 
</tr>
</table>

<p>
The stable release naming scheme was 0.1 up to 0.13 for the first thirteen stable releases. In February 2010 the Mercury project decided to name each stable release by using the year and month of the release. For example 10.04 is for a release made in April 2010. 
</p>
