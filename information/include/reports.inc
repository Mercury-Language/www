<h2>Mercury Reports</h2>

<i>Looking for technical reports?</i>  See the 
<a href="papers.html">papers</a> of the web site.

<p>

Please note that Mercury meetings are not always regularly scheduled --
the absence of a meeting probably indicates people travelling, busy
writing papers or implementing the system.  It's also possible that we
just didn't write any minutes for the meeting. 
The <a href="<? echo $root ?>/mailing-lists/mailing-lists.html"> mailing
list archives</a> are the best place to go to check the activity of the
developers.

<p>

<table>
<?
include "$root/news/reportsdb.inc";
while ( (list($date, $item) = each($reportsdb))) {
		reportitem($date, $item);
}
?>
</table>

<p>
