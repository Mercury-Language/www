<? echo "<?xml version=\"1.0\"?>\n" ?>
<rss version="2.0">
<channel>
  <title>The Mercury Project</title>
  <link>http://www.mercury.csse.unimelb.edu.au/</link>
  <description>News from the Mercury programming language project.</description>
<? 

include "include/functions.inc";
include "news/newsdb.inc";

while ( (list($date, $newsitem) = each($newsdb))) {
	rssitem($date, $newsitem);
}

?>
</channel>
</rss>
