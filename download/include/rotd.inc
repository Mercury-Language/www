<H2>Release of the Day</H2>

Mercury can have up to three different releases at any given point.
<p>
The most stable release will be a <em>numbered</em> release, such as 0.6 or
0.7.3.   These releases have been extensively tested, and often have 
pre-compiled binary packages for easy installation.
<p>
To cater for those who need access to the latest cutting edge features
of Mercury, but would still like some stability, we release a daily
snapshot of the development system.  This is called a "release of the
day (ROTD)" and is given a version number "rotd-YYYY-MM-DD" according to
the date it was built.  When the compiler passes all its tests, a ROTD
is put into the beta-releases directory.
<p>
<B>Download releases of the day:</b>
<ul>
<li> <A HREF="<? echo $root; ?>/download/files/beta-releases/">
Mercury web site</A><br>
<li> <A HREF="ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/beta-releases/">
Mercury ftp site</A>
</ul>

<H3> Unstable ROTDS </H3>

For some people, the cutting edge is not enough, and they want the
bleeding edge.  To help these developers, we have an <em>unstable</em>
release of the day.  This is just like a ROTD, but may not have passed
all its tests.  It is marked with a version number
"rotd-YYYY-MM-DD-unstable".
<p>
<B>Download unstable releases of the day:</b>
<ul>
<li> <A HREF="<? echo $root; ?>/download/files/beta-releases/">
Mercury web site</A><br>
<li> <A HREF="ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/beta-releases/">
Mercury ftp site</A>
</ul>

<H3> Contents of the ROTDS </H3>

The Mercury compiler is written in Mercury, and compiles Mercury into C
code.  These releases contain the Mercury code and the generated C code
for the compiler.  You need a C compiler (such as gcc) to build the
compiler and runtime system.  Once built, the Mercury compiler is
capable of generating its own C code (the process of getting a compiler
to compile itself is called <em>bootstrapping</em>, because it is like
the compiler lifting itself up by its own boot straps).
<p>
Numbered releases often have binary packages created, where even the
C code has been pre-compiled, and you simply need to install the
libraries and executables.
If we have enough processing power, we may someday do the same for
releases of the day, but at the moment you need to do the final step
of compilation yourself.
<p>
Please treat ROTDs with caution -- although they are often very
useful and reasonably stable, they are not widely tested, and
may have unfinished features and rough edges.  We are still interested
in feedback and bug reports on the ROTDs.

