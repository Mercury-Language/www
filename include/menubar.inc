<B><a href="<?echo $root?>/index.html">Home</a></B>

<P>

<B><a href="<?echo $root?>/news.html">News</a></B>

<P>

<B><a href="<?echo $root?>/information.html">Information</a></B><BR>
<?
if($menu == "Information") {
?>
<SMALL>
  &nbsp;&nbsp;<a href="<?echo $root?>/information/motivation.html">Overview</a>
    <BR>
  &nbsp;&nbsp;<a href="<?echo $root?>/information/features.html">Features</a>
    <BR>
  &nbsp;
    <a href="<?echo $root?>/information/benchmarks.html">Benchmarks</a>
    <BR>
  &nbsp;&nbsp;<a href="<?echo $root?>/information/papers.html">Papers</a>
    <BR>
  &nbsp;&nbsp;<a href="<?echo $root?>/information/deep_demo.html">Deep profiler</a>
    <BR>
  &nbsp;&nbsp<a href="<?echo $root?>/information/developer.html">Developers</a>
    <BR>
</SMALL>
<?
}
?>

<P>

<B><a href="<?echo $root?>/information/documentation.html">Documentation</a>
</B><BR>
<?
if($menu == "Documentation") { 
?>
<SMALL>
  &nbsp;&nbsp;<a href="<?echo $root?>/tutorial/index.html">Tutorial</a><BR>
  &nbsp;&nbsp;Reference Manual<BR>
  &nbsp;&nbsp;&nbsp&nbsp<a href="<?echo $ref_man_release?>">Version <?echo $current_release?></a><BR>
  &nbsp;&nbsp;&nbsp&nbsp<a href="<?echo $ref_man_latest?>">Snapshot</a><BR>
  &nbsp;&nbsp;User's Guide<BR>
  &nbsp;&nbsp;&nbsp;&nbsp;<a href="<?echo $user_guide_release?>">Version <?echo $current_release?></a><BR>
  &nbsp;&nbsp;&nbsp;&nbsp;<a href="<?echo $user_guide_latest?>">Snapshot</a><BR>
  &nbsp;&nbsp;Library Reference<BR>
  &nbsp;&nbsp;&nbsp;&nbsp;<a href="<?echo $library_man_release?>">Version <?echo $current_release?></a><BR>
  &nbsp;&nbsp;&nbsp;&nbsp;<a href="<?echo $library_man_latest?>">Snapshot</a><BR>
  &nbsp;&nbsp;cf. Prolog<BR>
  &nbsp;&nbsp;&nbsp;&nbsp;<a href="<?echo $trans_guide_release?>">Version <?echo $current_release?></a><BR>
  &nbsp;&nbsp;&nbsp;&nbsp;<a href="<?echo $trans_guide_latest?>">Snapshot</a><BR>
  &nbsp;&nbsp;<a href="<?echo $root?>/information/comparison_with_haskell.html">cf. Haskell</a><BR>
  &nbsp;&nbsp;FAQ<BR>
  &nbsp;&nbsp;&nbsp&nbsp<a href="<?echo $faq_release?>">Version <?echo $current_release?></a><BR>
  &nbsp;&nbsp;&nbsp&nbsp<a href="<?echo $faq_latest?>">Snapshot</a><BR>
</SMALL>
<?
}
?>

<P>

<B><a href="<?echo $root?>/mailing-lists/mailing-lists.html">Mailing Lists</a></B><BR>
<?
if($menu == "Mailing Lists") {
?>
<SMALL>
  &nbsp;&nbsp;<a href="<?echo $root?>/mailing-lists/mercury-developers/list.html">Developers</a><BR>
  &nbsp;&nbsp;<a href="<?echo $root?>/mailing-lists/mercury-reviews/list.html">Reviews</a><BR>
  &nbsp;&nbsp;<a href="<?echo $root?>/mailing-lists/mercury-users/list.html">Users</a><BR>
  &nbsp;&nbsp;<a href="http://www.google.com/coop/cse?cx=012477532374267650353%3Aiclg2f0j3-s">Search</a><BR>
</SMALL>
<?
}
?>

<P>

<B><a href="<?echo $root?>/backends.html">Back-ends</a></B><BR>
<?
if($menu == "Back-ends") {
?>
<SMALL>
  &nbsp;&nbsp;<a href="<?echo $root?>/backends.html#low_level_c">Low-level&nbsp;C</a><BR>
  &nbsp;&nbsp;<a href="<?echo $root?>/download/release-0.10.html#hlc">High-level&nbsp;C</a><BR>
  &nbsp;&nbsp;<a href="<?echo $root?>/dotnet.html">Microsoft .NET</a><BR>
  &nbsp;&nbsp;<a href="<?echo $root?>/download/gcc-backend.html">Native code</a><BR>
  &nbsp;&nbsp;<a href="<?echo $root?>/backends.html#java">Java</a><BR>
  &nbsp;&nbsp;<a href="<?echo $root?>/backends.html#bytecode">Mercury&nbsp;Bytecode</a><BR>
</SMALL>
<?
}
?>

<P>

<B><a href="<?echo $root?>/download.html">Download</a></B><BR>
<?
if($menu == "Download") {
?>
<SMALL>
  &nbsp;&nbsp;<a href="<?echo $root?>/download/release.html">Current&nbsp;Release</a>
    <BR>
  <?
  if ($submenu == "Current Release") {
  ?>
  &nbsp;&nbsp;&nbsp;&nbsp;<a href="<?echo $root?>/download/release.html#info">Info</a><BR>
  &nbsp;&nbsp;&nbsp;&nbsp;<a href="<?echo $root?>/download/release.html#source">Source</a><BR>
  &nbsp;&nbsp;&nbsp;&nbsp;<a href="<?echo $root?>/download/release.html#binaries">Binaries</a><BR>
  <?
  }
  ?>
  &nbsp;&nbsp;<a href="<?echo $root?>/download/rotd.html">Snapshot</a><BR>
  &nbsp;&nbsp;<a href="<?echo $root?>/download/old-release.html">Old&nbsp;Releases
    </a><BR>
</SMALL>
<?
}
?>

<P>

<B><a href="<?echo $root?>/information/related.html">Related</a></B><BR>
<?
if($menu == "Related") {
?>
<SMALL>
  &nbsp;&nbsp;<a href="<?echo $root?>/applications.html">Applications</a><BR>
  &nbsp;&nbsp;<a href="<?echo $root?>/mcorba.html">MCORBA</a> <BR>
  &nbsp;&nbsp;<a href="<?echo $root?>/contributions.html">Contributing&nbsp;Code</a> <BR>
</SMALL>
<?
}
?>

<P>

<B><a href="<?echo $root?>/contact.html">Contact</a></B><BR>
<?
if($menu == "Contact") {
?>
<SMALL>
  &nbsp;&nbsp;<a href="<?echo $root?>/contact/email.html">Email Addresses</a><BR>
  &nbsp;&nbsp;<a href="<?echo $root?>/contact/people.html">People</a> <BR>
  &nbsp;&nbsp;<a href="<?echo $root?>/mailing-lists/mailing-lists.html">Mailing Lists</a> <BR>
</SMALL>
<?
}
?>

<P>

<B><a href="<?echo $root?>/search.html">Search</a></B><BR>

<P>

<B><a href="http://bugs.mercury.csse.unimelb.edu.au">Bug Database</a></B>

<P>
