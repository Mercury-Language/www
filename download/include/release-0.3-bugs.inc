<h2>Release 0.3 - Known Problems</h2>

The following is collected email of reported problems with release
0.3 of the Mercury distribution. Included, where possible, are
patches.

<p>
<hr>
<p>
The `asm_jump.gc' grade doesn't seem to work on Linux, or at least not
on all Linux systems.  The work-around is to use the less efficient but
more portable `none.gc' mode.<p>

<pre>
Add the line `GRADE=none.gc' to the (empty) file `Mmake.params'
before installing.  After installation, replace the line

		DEFAULT_GRADE=${MERCURY_DEFAULT_GRADE=asm_jump.gc}

	with

		DEFAULT_GRADE=${MERCURY_DEFAULT_GRADE=none.gc}

	in the installed scripts `mc', `ml', `mgnuc', and `mmake'
	in /usr/local/bin.
</pre>

<p>
<hr>
<p>
The command `mmake <foo>.check' doesn't work.  We changed the
command-line interface to `mc', and forgot to update the `Mmake.rules'
file accordingly.  To fix this, apply this 
<a href="patches/patch-0.3-check">patch</a>.

<p>
<hr>
<p>
The file `calculator.m' in the samples directory doesn't
compile.  This will be fixed in the next release.
