<?php
    include "$root/include/whatis.inc";
?>
<h3>Latest News</h3>

<table>
<?php
    include "$root/include/latest_news.inc";
?>
</table>

<p>

This list contains only the latest news items.<br>
For older news items, see the
(<a href="<?php echo $root ?>/news.html">complete news archive</a>).

<p>

News is also available as an RSS feed
<a href="<?php echo $root; ?>/rss.xml">here</a>.
