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
?>
