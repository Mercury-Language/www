<?
function newsitem($date, $item) {
	echo "<tr>";
	list($day, $month, $year) = split(" ",$date);

	echo "<td valign=top><tt>[";
	printf("%02d $month $year", $day);
	echo "]</tt></td>";

	echo "<td><strong>";
	echo $item;
	echo "</strong></td></tr>";
}
?>
