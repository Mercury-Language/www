<b>Documents $(FIRSTDISPLAYED) - $(LASTDISPLAYED) of $(MATCHES) matches.
More <img src="/doc/htdig/images/star.gif" alt="*">'s indicate a better match.
</b>
<hr noshade size=1>
---- cut here ----
$(PAGEHEADER)
$(PREVPAGE) $(PAGELIST) $(NEXTPAGE)
<hr noshade size=4>
<form method="get" action="$(CGI)">
<font size=-1>
<input type=hidden name=config value=$(CONFIG)>
<input type=hidden name=restrict value="$(RESTRICT)">
<input type=hidden name=exclude value="$(EXCLUDE)">
Match: $(METHOD)
Format: $(FORMAT)
Sort by: $(SORT)
<br>
Refine search:
<input type="text" size="30" name="words" value="$(WORDS)">
<input type="submit" value="Search">
</select>
</font>
</form>
<hr noshade size=4>
<a href="http://www.htdig.org">
<img src="/doc/htdig/images/htdig.gif" border=0>ht://Dig $(VERSION)</a>
