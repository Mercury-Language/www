<H2>Native code compiler</H2>

The Mercury compiler can now generate assembler directly, rather than
compiling to assembler via C.  This is implemented by linking the
Mercury compiler front-end with the GNU Compiler Collection back-end.
The GNU Compiler Collection back-end is a fairly portable,
relatively language-independent, and mostly target-independent
optimizing compiler that has been ported to a very wide variety of
platforms, and which has front-ends for a variety of languages,
including C, C++, Ada, Fortran, Java, and now Mercury.

<p>
<H3>Status</H3>

<em> 2009-09-25: This back-end has not been tested in a while and may not work.
</em>

<p>

The version of the native code compiler in our CVS repository and our
release-of-the-day distributions (after 2002-09-11) is based on GCC 3.2.

<p>

It bootstraps, and passes all of the appropriate
tests in our test suite.  It is essentially ready for an official release.

<p>

However, currently it has only been tested on
i686-pc-linux-gnu (Intel x86 PCs running GNU/Linux).
We have don't know if it works on other systems.

<p>

The version of the Mercury native code compiler that was included in
Mercury 0.10.1 and 0.10.2-beta-* should be considered a beta release.
It does not support nested modules or tabled evaluation.  It was based on an
unreleased snapshot version of the GCC back-end, and it does not
work with any officially released version of GCC.

<p>

The version of the GCC back-end interface included in Mercury 0.10
was also a beta release.  As well as the issues with 0.10.1, it also
had a bug that often caused the compiler to abort.  The work-around
for that is to compile with `--no-optimize-initializations'.
This was fixed in Mercury 0.10.1.

<p>

For more information, see the file mercury-gcc/README
in the mercury-gcc distribution (see below).

<p>
<H3>Sources</H3>

The sources for the Mercury native code compiler come in three parts:

<ul>
<li>
The first part is the usual <b>mercury-compiler</b> distribution.
This contains the Mercury compiler front-end (about 225,000 lines
of Mercury), as well as the Mercury standard library (about 50,000
lines of Mercury), runtime system (about 30,000 lines of C), etc.
You'll need version 0.10, version 0.10.1, version 0.10.2-beta-*,
or (preferably) a release-of-the-day version dated 2002-09-11 or later.
You can get this from the <a href="<?echo
$root?>/download.html">Download</a> section of the Mercury web site.
Or you can use
<a href="<?echo $root?>/information/developers/remote_cvs.html">CVS</a>.
It is in the "mercury" directory of the Mercury repository, so it can
be checked out using "cvs checkout mercury".

<li>
The second part is the <b>gcc</b> distribution (about 450,000 lines of C).
The gcc distribution is available from the <A HREF="http://gcc.gnu.org">
GCC web site</A>.  Or you can get it from the
<A HREF="ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/">
Mercury ftp site</A>.
For current release-of-the-day versions of Mercury, you'll need GCC 3.1 or 3.2.
For Mercury 0.10, 0.10.1, or 0.10.2-beta-*,
you'll need the 20010129 shapshot of gcc,
which you can get from the GCC cvs repository
(use the option `-rgcc_ss_20010129' when checking it out),
or from the
<A HREF="ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/beta-releases/">
Mercury ftp site</A>.
A small
<A HREF="http://gcc.gnu.org/ml/gcc-patches/2001-01/msg00577.html">
patch</a> must be applied to this snapshot of the GCC sources
to make them work with the Mercury compiler.

<li>
The third part is the <b>mercury-gcc</b> distribution, which provides
some C code that interfaces between the Mercury compiler front-end
and the GCC back-end.  We hope to eventually make this part of
the GCC distribution, but currently it is distributed separately,
via the <A HREF="ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/beta-releases/">
Mercury ftp site</A>.
For Mercury 0.10, 0.10.1, or 0.10.2-beta-*, get mercury-gcc-0.10.1.tar.gz.
For release-of-the-day distributions, get mercury-gcc-rotd-*.tar.gz.
Alternatively, you can also get this using
<a href="<?echo $root?>/information/developers/remote_cvs.html">CVS</a>;
it is in the "mercury-gcc" directory of the Mercury repository, so it can
be checked out using "cvs checkout mercury-gcc".
</ul>

<p>

Unfortunately the interface to the GCC back-end changes quite frequently,
so you need to be very careful that you get matching versions of all of the
above.

<p>

For directions on how to build from these sources, see the file
mercury-gcc/README in the mercury-gcc distribution.

<H3>Binaries</H3>

The native-code compiler is included in some of our binary distributions
for 0.10, 0.10.1, 0.10.2-beta, and the release-of-the-day releases.
The distributions that include the native-code compiler are
the ones named "*i686-pc-linux-gnu-O4*"
(but NOT the ones named "*i686-pc-linux-gnu-O4-hlc").

