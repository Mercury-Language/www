<h2>News</h2>
<p>
If you see a feature that has been added and that you would like to try
out, you can download our <a href="download/rotd.html">release of the day</a>.
</p>

<ul class="nonindentlist2" id="newslist">
<?php 

include "$root/news/newsdb.inc";

while ( (list($date, $newsitem) = each($newsdb))) {
	newsitem($date, $newsitem);
}

?>
</ul>
