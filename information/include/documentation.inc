<h2><? echo $subtitle ?></h2>

This page contains documentation for 
<a href=<? echo $root ?>/download/release.html>Mercury version <? echo $current_release ?></a>,
and for the latest
<a href=<? echo $root ?>/download/rotd.html>development snapshot</a>.
<p>

The HTML versions are set up for browsing, however, if you'd prefer a
copy of the entire document, links to postscript copies are provided.
Please note that the postscript files are compressed using gzip and are
in a4 format.
<p>
<ul>
	<li> <a href="mailto:rafe@cs.mu.oz.au">Ralph Becket</a>'s
	     <strong>Mercury tutorial</strong><br>
	A beginner's introduction to Mercury.
	This is still under development. 
	Feedback would be appreciated.
	<p>

	Available in
	<a href="../tutorial/index.html">HTML</a> only.
	<p>

	<li> <strong>Mercury Language Reference Manual</strong> <br>
	Information on the Mercury programming language
	itself, including syntax, types and modes, determinism, 
	the module system, foreign language interface and higher-order
	programming.<p>

	<dl compact>
	<dt> Version <? echo $current_release ?>: <dd>
	<a href="<? echo $ref_man_release ?>">HTML</a> or
	<a href="doc-release/reference_manual.ps.gz">Postscript</a>.
	<dt> Snapshot: <dd>
	<a href="<? echo $ref_man_latest ?>">HTML</a> or
	<a href="doc-latest/reference_manual.ps.gz">Postscript</a>.
	</dl>
	<p>

	<li> <strong>Mercury User's Guide</strong><br>
	Information on the Mercury compiler, including
	how to compile, using multiple modules, profiling, debugging,
	and compilation options. <p>

	<dl compact>
	<dt> Version <? echo $current_release ?>: <dd>
	<a href="<? echo $user_guide_release ?>">HTML</a> or
	<a href="doc-release/user_guide.ps.gz">Postscript</a>.
	<dt> Snapshot: <dd>
	<a href="<? echo $user_guide_latest ?>">HTML</a> or
	<a href="doc-latest/user_guide.ps.gz">Postscript</a>.
	</dl>
	<p>

	<li> <strong>Mercury Library Reference Manual</strong><br>
	Descriptions of the interfaces to the library
	which comes with the Mercury distribution.<p>

	<dl compact>
	<dt> Version <? echo $current_release ?>: <dd>
	<a href="<? echo $library_man_release ?>">HTML</a> or
	<a href="doc-release/library.ps.gz">Postscript</a>.
	<dt> Snapshot: <dd>
	<a href="<? echo $library_man_latest ?>">HTML</a> or
	<a href="doc-latest/library.ps.gz">Postscript</a>.
	</dl>
	<p>

	<li> <strong>Prolog to Mercury Transition Guide</strong><br>
	Information to assist programmers to move Prolog
	programs to Mercury. Includes information on differences in
	the languages and common programming styles.<p>

	<dl compact>
	<dt> Version <? echo $current_release ?>: <dd>
	<a href="<? echo $trans_guide_release ?>">HTML</a> or
	<a href="doc-release/transition_guide.ps.gz">Postscript</a>.
	<dt> Snapshot: <dd>
	<a href="<? echo $trans_guide_latest ?>">HTML</a> or
	<a href="doc-latest/transition_guide.ps.gz">Postscript</a>.
	</dl>
	<p>

	<li> <strong>Comparing Mercury and Haskell</strong><br>
	A point-by-point comparison of some of the differences
	between Mercury and Haskell 98, in particular with
	regard to their type systems.<p>

	Available in 
	<a href="comparison_with_haskell.html">HTML</a> only.<p>

</ul>
