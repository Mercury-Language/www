<h1>
Mercury Web Site Search</H1>
<hr noshade size=4>
This search will allow you to search the contents of
the Mercury web site <B>excluding</B> the mailing lists.
<A HREF="mailing-lists/search.html">Click here</A> to search
the mailing list archive.
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
<input type=hidden name=restrict value="">
<input type=hidden name=exclude value="mailing-lists">
<br>
Search:
<input type="text" size="30" name="words" value="">
<input type="submit" value="Search">
<a href="http://htdig.sdsu.edu"><IMG SRC="<?echo $root?>/images/htdig.gif" align=bottom alt="ht://Dig" border=0></a>
</form>
<hr noshade size=4>

You may also wish to try searching this site using Google.

<!-- Search Google -->
<center>
<FORM method=GET action=http://www.google.com/search>
<TABLE bgcolor=#FFFFFF cellspacing=3 border=2>
<tr valign=top><td>
<A HREF=http://www.google.com/search>
<IMG SRC=http://www.google.com/logos/Logo_40wht.gif border=0 ALT=Google
align=middle></A>
</td>
<td>
<INPUT TYPE=text name=q size=31 maxlength=255 value="">
<INPUT type=submit name=sa VALUE="Google Search">
<input type=hidden name=domains
value="www.mercury.cs.mu.oz.au"><br><input type=radio name=sitesearch
value=""> Search WWW <input type=radio name=sitesearch
value="www.mercury.cs.mu.oz.au" checked> Search www.mercury.cs.mu.oz.au <br>
</td></tr></TABLE>
</FORM>
</center>
<!-- Search Google --> 

<hr noshade size=4>
