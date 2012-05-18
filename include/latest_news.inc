<?php

include "$root/news/newsdb.inc";

$i = 0;

while ( (list($date, $newsitem) = each($newsdb)) && $i < 5 ) {
	$i++;
	newsitem($date, $newsitem);
}

?>



