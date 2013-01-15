<?php include "$root/include/functions.inc" ?>
<?php include "$root/include/globals.inc" ?>
<head>
<TITLE>The Mercury Project: <?php echo $title?></TITLE>
<link rel="stylesheet" type="text/css" href="css/common.css"/>
<link rel="icon" type="image/ico" href="../favicon.ico"/>
</head>
<body>

<div class="header">
<div class="headercontainer">
<a class="logo" href="home.html"><img src="images/mercurylogo.png"/></a>
<div class="headersearchbar">
<form class="searchbar" method="get" action="http://www.google.com/search">
<table border="0" cellpadding="0">
<tr>
<td>
<input class="textbox" type="text"   name="q" size="25" maxlength="255" value="" />
<input class="submit" type="submit" value="Search" />
</td>
</tr>
<tr>
<td align="left" style="font-size:75%; opacity: 0;">
<input type="checkbox"  name="sitesearch" value="mercurylang.org" checked /> only Mercury Website<br />
</td>
</tr>
</table>
</form>
</div>
</div>
</div>

<div class="container">
<!--Menu-->
<?php include "$root/include/menubar.inc" ?>

<!--Sidebar-->
<div class="sidebar">
<div class="sidebarbox">
</div>
<div class="sidebarbox">
</div>
</div>

<!--Content-->
<div class="content">
<?php include "$root/$dir/include/$include" ?>
</div>

<!--footer-->
<?php include "$root/include/footer.inc" ?>

</div>


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

</body>
