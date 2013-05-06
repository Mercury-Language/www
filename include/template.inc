<?php include "$root/include/functions.inc" ?>
<?php include "$root/include/globals.inc" ?>
<head>
<TITLE>The Mercury Project: <?php echo $title?></TITLE>
<link rel="stylesheet" type="text/css" href="<?php echo $root?>/css/common.css"/>
<link rel="icon" type="image/ico" href="../favicon.ico"/>
</head>
<body>

<div class="header">
<div class="headercontainer">
<a class="logo" href="<?php echo $root?>/index.html"><img src="<?php echo $root?>/images/mercurylogo.png"/></a>
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
<td>
<input type="hidden"  name="sitesearch" value="mercurylang.org"/>
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

<!--Sidebar
<div class="sidebar">
<div class="sidebarbox">
</div>
<div class="sidebarbox">
</div>
</div>
-->

<!--Content-->
<div class="content">
<?php include "$root/$dir/include/$include" ?>
</div>

<!--footer-->
<?php include "$root/include/footer.inc" ?>

</div>


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

</body>
