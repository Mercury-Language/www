<TITLE>The Mercury Project: <?echo $title?></TITLE>
<BODY bgcolor="#ABCDEF" text="#000000">

<TABLE border="0" cellpadding="5" cellspacing="0" width="100%">
    <TD>
    <CENTER><H1>The Mercury Project</H1></CENTER>
    </TD>

    <TD width="10%">
    <? $size = GetImageSize("$root/images/merclogo_small.jpg"); ?>
    <IMG SRC="<?echo $root?>/images/merclogo_small.jpg" border="2"
        hspace="10" <? echo $size[3]; ?> >
    </TD>
</TABLE>

<TABLE border="0" cellpadding="5" cellspacing="0" width="100%">
<TR>
    <TD valign="top" bgcolor="#fcf4d4" width="15%">
    <? include "$root/include/menubar.inc" ?>
    </TD>
    <TD valign="top">
    <? include "$root/$dir/include/$include" ?>
    </TD>
</TR>
</TABLE>

</BODY>
