<?php include "$root/include/functions.inc" ?>
<?php include "$root/include/globals.inc" ?>

<TITLE>The Mercury Project: <?php echo $title?></TITLE>
<BODY bgcolor="#ABCDEF" text="#000000">

<TABLE border="0" cellpadding="5" cellspacing="0" width="100%">
<TR>
    <TD>
    <CENTER><H1>The Mercury Project<br>
    <?php echo $title ?>
    </H1></CENTER>
    </TD>

    <TD width="10%">
    <?php $size = GetImageSize("$root/images/merclogo_small.jpg"); ?>
    <IMG SRC="<?php echo $root?>/images/merclogo_small.jpg" border="2"
        hspace="10" <?php echo $size[3]; ?>
	ALT="[Mercury Logo]">
    </TD>
</TR>
</TABLE>

<TABLE border="0" cellpadding="5" cellspacing="0" width="100%">
<TR>
    <TD valign="top" bgcolor="#fcf4d4" width="15%">
    <?php include "$root/include/menubar.inc" ?>
    </TD>
    <TD valign="top">
    <?php include "$root/$dir/include/$include" ?>
    </TD>
</TR>
</TABLE>

<?php
/*
 * This allows us to track the popularity of our website via Google
 * Analytics.
 */
?>
<script type="text/javascript">

  var _gaq = _gaq || [];
  _gaq.push(['_setAccount', 'UA-39671467-1']);
  _gaq.push(['_trackPageview']);

  (function() {
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
  })();
</script>

</BODY>
