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

The current version of the Mercury native code compiler should be
considered a beta release.  It is based on an unreleased snapshot
version of the GCC back-end.  Currently it has only been tested on
i686-pc-linux-gnu (Intel x86 PCs running GNU/Linux).

<p>

For more information, see the file gcc/mercury/README
in the mercury-gcc distribution (see below).

<p>
<H3>Sources</H2>

The sources for the Mercury native code compiler come in three parts:

<ul>
<li>
The first part is the usual <b>mercury-compiler</b> distribution.
This contains the Mercury compiler front-end (about 225,000 lines
of Mercury), as well as the Mercury standard library (about 50,000
lines of Mercury), runtime system (about 30,000 lines of C), etc.
You'll need either version 0.10 (not yet released at the time of
writing), or a release-of-the-day version dated February 2001 or
later.  You can get this from the <a href="<?echo
$root?>/download.html">Download</a> section of the Mercury web site.

<li>
The second part is the <b>gcc</b> distribution (about 450,000 lines of C).
You'll need version 3.0 (not yet released at the time of writing),
or a snapshot version dated February 2001 or later.
The gcc distribution is available from the <A HREF="http://gcc.gnu.org">
GCC web site</A>.  Or you can get it from the
<A HREF="ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/beta-releases/">
Mercury ftp site</A>.
One small <A HREF="http://gcc.gnu.org/ml/gcc-patches/2001-01/msg00577.html">
patch</a> must be applied to the GCC sources
to make them work with the Mercury compiler.

<li>
The third part is the <b>mercury-gcc</b> distribution, which provides
some C code that interfaces between the Mercury compiler front-end
and the GCC back-end.  We hope to eventually make this part of
the GCC distribution, but currently it is distributed separately,
via the <A HREF="ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/beta-releases/">
Mercury ftp site</A>.
</ul>

Unfortunately the interface to the GCC back-end changes quite frequently,
so you need to be careful that you get matching versions of all of the
above.

<H3>Binaries</H3>

Some of our release-of-the-day binary distributions --
specifically the ones named "*i686-pc-linux-gnu-O4*"
(but NOT the ones named "*i686-pc-linux-gnu-O4-hlc")
currently include the native-code compiler.

We also hope to include the native-code compiler in the
binary distributions for Mercury 0.10.

