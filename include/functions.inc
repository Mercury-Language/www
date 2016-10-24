<?php
function newsitem($date, $item) {

	list($title, $news) = $item;
	
	echo "<li>";
	echo "<h3>";
	echo $title;
	echo "</h3>";
	echo "<p>";
	echo $news;
	echo "</p>";
	list($day, $month, $year) = explode(" ",$date);
	echo "<span class='newsdate'>";
	printf("%02d&nbsp;$month&nbsp;$year", $day);
	echo "</span>";
	echo "</li>";
}

function rssitem($date, $item) {

	list($title, $news) = $item;
	list($day, $month, $year) = explode(" ",$date);
	$month = substr($month, 0, 3);
	$news = htmlspecialchars($news);

	echo "<item>\n";
	echo "<guid>http://mercurylang.org/rss.xml#".
		md5($title.$news.$date)."</guid>\n";
	echo "<title>$title</title>\n";
	echo "<description>$news</description>\n";
	echo "<pubDate>$day $month $year 00:00 +1000</pubDate>\n";
	echo "<link>http://mercurylang.org/</link>\n";
	echo "</item>\n";
}

function reportitem($date, $item) {
	global $root;

	list($filename, $descr) = $item;
	echo "<tr>";
	list($day, $month, $year) = explode(" ",$date);

	echo "<td valign=top><tt>[";
	printf("%02d&nbsp;$month&nbsp;$year", $day);
	echo "]</tt></td>";

	echo "<td><strong><a href=\"$root/information/reports/";
	echo $filename;
	echo "\">$descr</a></strong><br>\n";
	echo "</td></tr>";
}
?>
