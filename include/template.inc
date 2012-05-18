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
 * This allows the university to track the popularity of our website via Google
 * Analytics.
 */
?>
<script type="text/javascript">
    var gaJsHost = (("https:" == document.location.protocol) ?
        "https://ssl." : "http://www.");
    document.write(unescape("%3Cscript src='" + gaJsHost +
        "google-analytics.com/ga.js' type='text/javascript'%3E%3C/script%3E"));
</script>
<script type="text/javascript">
    try {
        var pageTracker = _gat._getTracker("UA-2808341-16");
        pageTracker._setDomainName(".csse.unimelb.edu.au");
        pageTracker._trackPageview();
    } catch(err) {
    }
</script>

</BODY>
