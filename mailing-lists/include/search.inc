<h1>
Mercury Mailing List Search</H1>
<hr noshade size=4>
You can use either our
<a href="http://www.google.com/coop/cse?cx=012477532374267650353%3Aiclg2f0j3-s">
Google custom search engine
</a>
or the HtDig interface below to search the contents of
the Mercury mailing lists.
<br>
<p>
<form method="post" action="http://www.mercury.cs.mu.oz.au/cgi-bin/htsearch">
<font size=-1>
Match: <select name=method>
<option value=and>All
<option value=or>Any
</select>
Format: <select name=format>
<option value=builtin-long>Long
<option value=builtin-short>Short
</select>
</font>
<input type=hidden name=config value=htdig-mercury>
<input type=hidden name=restrict value="mailing-lists">
<input type=hidden name=exclude value="">
<br>
Search:
<input type="text" size="30" name="words" value="">
<input type="submit" value="Search">
<a href="http://htdig.sdsu.edu"><IMG SRC="<?php echo $root?>/images/htdig.gif" align=bottom alt="ht://Dig" border=0></a>
</form>
<hr noshade size=4>
