<?php echo "<?xml version=\"1.0\"?>\n" ?>
<rss version="2.0">
<channel>
  <title>The Mercury Project</title>
  <link>http://mercurylang.org/</link>
  <description>News from the Mercury programming language project.</description>
<?php

$root = "";

include "include/globals.inc";
include "include/functions.inc";
include "news/newsdb.inc";

while ( (list($date, $newsitem) = each($newsdb))) {
	rssitem($date, $newsitem);
}

?>
</channel>
</rss>
