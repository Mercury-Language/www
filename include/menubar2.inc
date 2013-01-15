<B><a href="<?php echo $root?>/index.html">Home</a></B>

<P>

<B><a href="<?php echo $root?>/news.html">News</a></B>

<P>

<B><a href="<?php echo $root?>/information.html">Information</a></B><BR>
<?php
if($menu == "About") {
?>
<SMALL>
  &nbsp;&nbsp;<a href="<?php echo $root?>/information/motivation.html">Overview</a>
    <BR>
  &nbsp;&nbsp;<a href="<?php echo $root?>/information/features.html">Features</a>
    <BR>
  &nbsp;
    <a href="<?php echo $root?>/information/benchmarks.html">Benchmarks</a>
    <BR>
  &nbsp;&nbsp;<a href="<?php echo $root?>/information/papers.html">Papers</a>
    <BR>
  &nbsp;&nbsp;<a href="<?php echo $root?>/information/deep_demo.html">Deep profiler</a>
    <BR>
  &nbsp;&nbsp<a href="<?php echo $root?>/information/developer.html">Developers</a>
    <BR>
</SMALL>
<?php
}
?>

<P>

<B><a href="<?php echo $root?>/information/documentation.html">Documentation</a>
</B><BR>
<?php
if($menu == "Documentation") { 
?>
<SMALL>
  &nbsp;&nbsp;<a href="<?php echo $root?>/tutorial/index.html">Tutorial</a><BR>
  &nbsp;&nbsp;Reference Manual<BR>
  &nbsp;&nbsp;&nbsp&nbsp<a href="<?php echo $ref_man_release?>">Version <?php echo $current_release?></a><BR>
  &nbsp;&nbsp;&nbsp&nbsp<a href="<?php echo $ref_man_latest?>">Snapshot</a><BR>
  &nbsp;&nbsp;User's Guide<BR>
  &nbsp;&nbsp;&nbsp;&nbsp;<a href="<?php echo $user_guide_release?>">Version <?php echo $current_release?></a><BR>
  &nbsp;&nbsp;&nbsp;&nbsp;<a href="<?php echo $user_guide_latest?>">Snapshot</a><BR>
  &nbsp;&nbsp;Library Reference<BR>
  &nbsp;&nbsp;&nbsp;&nbsp;<a href="<?php echo $library_man_release?>">Version <?php echo $current_release?></a><BR>
  &nbsp;&nbsp;&nbsp;&nbsp;<a href="<?php echo $library_man_latest?>">Snapshot</a><BR>
  &nbsp;&nbsp;cf. Prolog<BR>
  &nbsp;&nbsp;&nbsp;&nbsp;<a href="<?php echo $trans_guide_release?>">Version <?php echo $current_release?></a><BR>
  &nbsp;&nbsp;&nbsp;&nbsp;<a href="<?php echo $trans_guide_latest?>">Snapshot</a><BR>
  &nbsp;&nbsp;<a href="<?php echo $root?>/information/comparison_with_haskell.html">cf. Haskell</a><BR>
  &nbsp;&nbsp;FAQ<BR>
  &nbsp;&nbsp;&nbsp&nbsp<a href="<?php echo $faq_release?>">Version <?php echo $current_release?></a><BR>
  &nbsp;&nbsp;&nbsp&nbsp<a href="<?php echo $faq_latest?>">Snapshot</a><BR>
</SMALL>
<?php
}
?>

<P>

<B><a href="<?php echo $root?>/mailing-lists/mailing-lists.html">Mailing Lists</a></B><BR>
<?php
if($menu == "Mailing Lists") {
?>
<SMALL>
  &nbsp;&nbsp;<a href="<?php echo $root?>/mailing-lists/mercury-developers/list.html">Developers</a><BR>
  &nbsp;&nbsp;<a href="<?php echo $root?>/mailing-lists/mercury-reviews/list.html">Reviews</a><BR>
  &nbsp;&nbsp;<a href="<?php echo $root?>/mailing-lists/mercury-users/list.html">Users</a><BR>
</SMALL>
<?php
}
?>

<P>

<B><a href="<?php echo $root?>/backends.html">Back-ends</a></B><BR>
<?php
if($menu == "Back-ends") {
?>
<SMALL>
  &nbsp;&nbsp;<a href="<?php echo $root?>/backends.html#low_level_c">Low-level&nbsp;C</a><BR>
  &nbsp;&nbsp;<a href="<?php echo $root?>/download/release-0.10.html#hlc">High-level&nbsp;C</a><BR>
  &nbsp;&nbsp;<a href="<?php echo $root?>/backends.html#java">Java</a><BR>
  &nbsp;&nbsp;<a href="<?php echo $root?>/backends.html#csharp">C#</a><BR>
  &nbsp;&nbsp;<a href="<?php echo $root?>/backends.html#erlang">Erlang</a><BR>
  &nbsp;&nbsp;<a href="<?php echo $root?>/dotnet.html">Microsoft .NET</a><BR>
  &nbsp;&nbsp;<a href="<?php echo $root?>/download/gcc-backend.html">Native code</a><BR>
  &nbsp;&nbsp;<a href="<?php echo $root?>/backends.html#bytecode">Mercury&nbsp;Bytecode</a><BR>
</SMALL>
<?php
}
?>

<P>

<B><a href="<?php echo $root?>/download.html">Download</a></B><BR>
<?php
if($menu == "Download") {
?>
<SMALL>
  &nbsp;&nbsp;<a href="<?php echo $root?>/download/release.html">Current&nbsp;Release</a>
    <BR>
  <?php
  if ($submenu == "Current Release") {
  ?>
  &nbsp;&nbsp;&nbsp;&nbsp;<a href="<?php echo $root?>/download/release.html#info">Info</a><BR>
  &nbsp;&nbsp;&nbsp;&nbsp;<a href="<?php echo $root?>/download/release.html#source">Source</a><BR>
  &nbsp;&nbsp;&nbsp;&nbsp;<a href="<?php echo $root?>/download/release.html#binaries">Binaries</a><BR>
  <?php
  }
  ?>
  &nbsp;&nbsp;<a href="<?php echo $root?>/download/rotd.html">Snapshot</a><BR>
  &nbsp;&nbsp;<a href="<?php echo $root?>/download/old-release.html">Old&nbsp;Releases
    </a><BR>
</SMALL>
<?php
}
?>

<P>

<B><a href="<?php echo $root?>/information/related.html">Related</a></B><BR>
<?php
if($menu == "Related") {
?>
<SMALL>
  &nbsp;&nbsp;<a href="<?php echo $root?>/applications.html">Applications</a><BR>
  &nbsp;&nbsp;<a href="<?php echo $root?>/mcorba.html">MCORBA</a> <BR>
  &nbsp;&nbsp;<a href="<?php echo $root?>/contributions.html">Contributing&nbsp;Code</a> <BR>
</SMALL>
<?php
}
?>

<P>

<B><a href="<?php echo $root?>/contact.html">Contact</a></B><BR>
<?php
if($menu == "Contact") {
?>
<SMALL>
  &nbsp;&nbsp;<a href="<?php echo $root?>/contact/email.html">Email Addresses</a><BR>
  &nbsp;&nbsp;<a href="<?php echo $root?>/contact/people.html">People</a> <BR>
  &nbsp;&nbsp;<a href="<?php echo $root?>/mailing-lists/mailing-lists.html">Mailing Lists</a> <BR>
</SMALL>
<?php
}
?>

<P>

<B><a href="<?php echo $root?>/search.html">Search</a></B><BR>

<P>

<B><a href="http://bugs.mercury.csse.unimelb.edu.au">Bug Database</a></B>

<P>
