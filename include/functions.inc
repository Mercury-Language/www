<?
function newsitem($date, $item) {

	list($title, $news) = $item;

	echo "<tr>";
	list($day, $month, $year) = split(" ",$date);

	echo "<td valign=top><tt>[";
	printf("%02d&nbsp;$month&nbsp;$year", $day);
	echo "]</tt></td>";

	echo "<td><strong>";
	echo $title;
	echo "</strong><br>\n";
	echo $news;
	echo "</td></tr>";
}

function rssitem($date, $item) {

	list($title, $news) = $item;
	list($day, $month, $year) = split(" ",$date);
	$month = substr($month, 0, 3);
	$news = htmlspecialchars($news);

	echo "<item>\n";
	echo "<guid>http://www.mercury.csse.unimelb.edu.au/rss.xml#".
		md5($title.$news.$date)."</guid>\n";
	echo "<title>$title</title>\n";
	echo "<description>$news</description>\n";
	echo "<pubDate>$day $month $year 00:00 +1000</pubDate>\n";
	echo "<link>http://www.mercury.csse.unimelb.edu.au/</link>\n";
	echo "</item>\n";
}

function reportitem($date, $item) {
	global $root;

	list($filename, $descr) = $item;
	echo "<tr>";
	list($day, $month, $year) = split(" ",$date);

	echo "<td valign=top><tt>[";
	printf("%02d&nbsp;$month&nbsp;$year", $day);
	echo "]</tt></td>";

	echo "<td><strong><a href=\"$root/information/reports/";
	echo $filename;
	echo "\">$descr</a></strong><br>\n";
	echo "</td></tr>";
}
?>
