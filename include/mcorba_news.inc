<table>
<? 

include "$root/news/mcorba_newsdb.inc";

while ( (list($date, $newsitem) = each($mcorba_newsdb))) {
	newsitem($date, $newsitem);
}

?>
</table>
