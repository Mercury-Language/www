<h1>
Mercury Web Site Search</H1>
<hr noshade size=4>
This search will allow you to search the contents of
the Mercury web site <B>excluding</B> the mailing lists.
<A HREF="mailing-lists/search.html">Click here</A> to search
the mailing list archive.
<br>
<p>
<form method="post" action="http://hydra.cs.mu.oz.au/cgi-bin/htsearch">
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
<input type=hidden name=config value=htdig>
<input type=hidden name=restrict value="">
<input type=hidden name=exclude value="">
<br>
Search:
<input type="text" size="30" name="words" value="">
<input type="submit" value="Search">
<a href="http://htdig.sdsu.edu"><IMG SRC="<?echo $root?>/images/htdig.gif" align=bottom alt="ht://Dig" border=0></a>
</form>
<hr noshade size=4>
