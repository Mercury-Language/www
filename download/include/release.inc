<h2>Current Release</h2>

Mercury 0.8.1 was released on December 13, 1998.
The only change in this release was that we fixed some
problems with the scripts for building the binary release;
apart from that it is identical to 0.8.
There is no need for users who already have 0.8 to upgrade.

Source and binary distributions of release 0.8.1, and
a patch file containing the diffs between 0.8 and 0.8.1,
are available at the following site(s):

<dl>
<dt> Australia 
<dd> <a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/">
     ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury</a><br>
     The Mercury ftp site in Melbourne, Australia.
<dt> Greece
<dd> <a href = "ftp://ftp.ntua.gr/pub/lang/mercury/">
     ftp://ftp.ntua.gr/pub/lang/mercury/</a><br>
     National Technical University of Athens, Greece.
<dt> Sweden
<dd> <a href = "ftp://ftp.csd.uu.se/pub/Mercury/">
     ftp://ftp.csd.uu.se/pub/Mercury/</a><br>
     Uppsula University, Sweden.
</dl>

Mercury 0.8 was released on November 18, 1998.

The NEWS file, detailing differences since the release of 0.7.3,
is available <a href="release-0.8.html">here</a>.
Source distributions of release 0.8 are available 
at the sites mentioned above, and also at the following site(s):

<dl>
<dt> USA
<dd> <a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/">
     ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/</a><br>
     Stonybrook University in New York, USA. 
<dt> USA
<dd> <a href = "ftp://sunsite.unc.edu/pub/Linux/devel/lang/">
     ftp://sunsite.unc.edu/pub/Linux/devel/lang/mercury/</a><br>
     Sunsite in the USA. 
<dt> Elsewhere	
<dd> Sunsite has many 
     <a href="http://sunsite.unc.edu/pub/Linux/MIRRORS.html">mirrors</a>.
     <br>
     Mercury is available in the /pub/Linux/devel/lang/mercury directory, or
     its equivalent place on the mirrors.
</dl>

<a name="known">
<h3>Information</h3>
</a>

<ul>
	<li>
	<a href = "release-0.8.html">
	Release notes for 0.8
	</a>

	<li>
	<a href = "release-0.8-contents.html">
	Contents of release 0.8 distribution
	</a>

	<li>
	<a href = "release-0.8-bugs.html">
	Known problems with release 0.8
	</a>

	<li>
	<a href = "limitations.html">
	Limitations of the current release.
	</a>
</ul>

<h3>Supported Platforms</h3>

The latest release is known to work on the following platforms:
<p>
<ul>
    <li> x86 machines running Linux 
    <li> x86 machines running FreeBSD 3.0
    <li> x86 machines running Windows 95
    <li> Sun SPARC machines running Solaris 2.x and SunOS 5.x
    <li> DEC Alpha machines running OSF/1 (Digital Unix)
    <li> SGI Mips machines running IRIX 5.x
</ul>
<p>
Mercury has also worked on the following platforms, although we have
not tested the latest release on these:
<p>
<ul>
    <li> x86 machines running Windows NT
    <li> x86 machines running other BSD Unix systems
    <li> PowerPC machines running Linux
    <li> DEC Alpha machines running Linux
    <li> Sun SPARC machines running SunOS 4.x
    <li> HP PA machines running HPUX
    <li> IBM RS/6000 machines running AIX
    <li> DEC Mips machines running ULTRIX
</ul>
<p>
It should be pretty easy to port to any sufficiently Unix-like system.

<h3>What do I need?</h3>

You need gcc (version 2.7.2 or higher; 2.6.3 might work too, but it is
known to have problems compiling Mercury on some architectures, e.g. SPARC)
and GNU make (version 3.69 or higher).
If you are installing the Windows 95 or Windows NT version,
you will also need gnu-win32, version b17.1, b18, or b20.1 or later.

<h3>How to get the distribution</h3>

You can go to our FTP sites or mirrors, or directly
download the source or binary distributions.



<h3>Source Distribution</h3>

The main "compiler" source distribution is about 6 Mb.
This includes the compiler, standard library,
debugger, profiler, and other tools.

There is also a small "extras" distribution which contains a number
of useful additional libraries.  This is distributed separately,
mainly for copyright reasons (some of the additional libraries do
not meet the Debian Free Software Guidelines).
We strongly recommend that everyone who downloads the "compiler"
distribution should also download the "extras" distribution.

Finally there is also a "tests" distribution which contains our
test suite.  This may be useful if you are modifying the compiler,
or porting it to a new system.

<dl>
<dt> Compiler (6M)
<dd> 
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/mercury-compiler-0.8.1.tar.gz">Australia</a>
<a href = "ftp://ftp.ntua.gr/pub/lang/mercury/mercury-compiler-0.8.1.tar.gz">Greece</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/mercury-compiler-0.8.1.tar.gz">Sweden</a>
<dt> Extras (377k)
<dd>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/mercury-extras-0.8.1.tar.gz">Australia</a>
<a href = "ftp://ftp.ntua.gr/pub/lang/mercury/mercury-extras-0.8.1.tar.gz">Greece</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/mercury-extras-0.8.1.tar.gz">Sweden</a>
<dt> Tests (233k)
<dd>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/mercury-tests-0.8.1.tar.gz">Australia</a>
<a href = "ftp://ftp.ntua.gr/pub/lang/mercury/mercury-tests-0.8.1.tar.gz">Greece</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/mercury-tests-0.8.1.tar.gz">Sweden</a>
</dl>

<h3>Binary Distribution</h3>

Binary distributions of Mercury 0.8.1:
<br>
(Note that some of these URLs will be dangling links until we have
installed all the binary distributions.)
<p>

<dl>
    <dt>x86 machines running Linux (ELF executable format, libc 6.0)
	<dd> Note that these binary distributions work ONLY with libc 6.0.x.
	     Unfortunately they do NOT work with libc 6.1. This is due
	     to incompatibilities between libc versions 6.0 and 6.1
	     (i.e. glibc 2.0 and 2.1).
	     <p>
	     Debian Package (*.deb) <br>
	     Compiler only (about 11.6 Mb): <br>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/mercury_0.8.1-1.deb">Australia</a>
<a href = "ftp://ftp.ntua.gr/pub/lang/mercury/mercury_0.8.1-1.deb">Greece</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/mercury-tests-0.8.1-1.deb">Sweden</a>
	     <br>
	     If you get this package, we suggest that you also download
	     the "extras" source distribution.
	     <p>
	     RedHat Package (*.rpm) <br>
	     Compiler only (about 11.6 Mb): <br>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/mercury_0.8.1-1.deb">Australia</a>
<a href = "ftp://ftp.ntua.gr/pub/lang/mercury/mercury_0.8.1-1.deb">Greece</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/mercury-tests-0.8.1-1.deb">Sweden</a>
	     <br>
	     If you get this package, we suggest that you also download
	     the "extras" source distribution. 
             <p>
	     Ordinary package (*.tar.gz) <br>
	     Compiler + Extras + Tests (about 14.5 Mb): <br>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/mercury-0.8.1.i686-pc-linux-gnu.tar.gz">Australia</a>
<a href = "ftp://ftp.ntua.gr/pub/lang/mercury/mercury-0.8.1.i686-pc-linux-gnu.tar.gz">Greece</a>
<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/mercury-0.8.1.i686-pc-linux-gnu.tar.gz">USA</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/mercury-0.8.1.i686-pc-linux-gnu.tar.gz">Sweden</a>
	<p>

    <dt>x86 machines running FreeBSD 3.0
	<dd> Compiler only, minus sample programs (about 14.5 Mb): <br>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/mercury-compiler-0.8.i386-pc-freebsd3.0.tar.gz">Australia</a>
<a href = "ftp://ftp.ntua.gr/pub/lang/mercury/mercury-compiler-0.8.i386-pc-freebsd3.0.tar.gz">Greece</a> 
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/mercury-compiler-0.8.i386-pc-freebsd3.0.tar.gz">Sweden</a>
<br>
	If you get this distribution, we suggest you also download
	the "compiler" and "extras" source distributions,
	so that you can look at some sample programs.
	<p>

    <dt>Sun SPARC machines running Solaris 2.x and SunOS 5.6
	<dd> Compiler + Extras + Tests (about 17.9 Mb): <br>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/mercury-0.8.1.sparc-sun-solaris2.6.tar.gz">Australia</a>
<a href = "ftp://ftp.ntua.gr/pub/lang/mercury/mercury-0.8.1.sparc-sun-solaris2.6.tar.gz">Greece</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/mercury-0.8.1.sparc-sun-solaris2.6.tar.gz">Sweden</a>
<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/mercury-0.8.1.sparc-sun-solaris2.6.tar.gz">USA</a><br>
	<em> <strong>WARNING:</strong> 
We've had reports that some users have had trouble untarring some of
the binary distributions for Solaris, with tar reporting
"directory checksum error".  This appears to be due to a bug in
Sun tar.  If you encounter this problem, then (1) let us know
and (2) use GNU tar. </em>
	<p>
    <dt>DEC Alpha machines running OSF/1 or Digital Unix
	<dd> Compiler + Extras + Tests (about 36 Mb): <br>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/mercury-0.8.1.alpha-dec-osf3.2.tar.gz">Australia</a>
<a href = "ftp://ftp.ntua.gr/pub/lang/mercury/mercury-0.8.1.alpha-dec-osf3.2.tar.gz">Greece</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/mercury-0.8.1.alpha-dec-osf3.2.tar.gz">Sweden</a>
<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/mercury-0.8.1.alpha-dec-osf3.2.tar.gz">USA</a>

	<p>
    <dt>x86 machines running Windows 95 or Windows NT
	<dd> Compiler + Extras + Tests (about 14 Mb): <br>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/mercury-0.8.1.pc-windows-cygwin-b20.1.tar.gz">Australia</a>
<a href = "ftp://ftp.ntua.gr/pub/lang/mercury/mercury-0.8.1.pc-windows-cygwin-b20.1.tar.gz">Greece</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/mercury-0.8.1.pc-windows-cygwin-b20.1.tar.gz">Sweden</a>

</dl>

<h3>FTP Sites</h3>
<dl>
	<dt> Australia (primary site)
	<dd>
	<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/">
	ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/</a>

	<dt> Greece (automatically updated mirror)
	<dd>
	<a href = "ftp://ftp.ntua.gr/pub/lang/mercury/">
        ftp://ftp.ntua.gr/pub/lang/mercury/</a>

	<dt> Europe (automatically updated mirror)
	<dd>
	<a href = "ftp://ftp.csd.uu.se/pub/Mercury/">
	ftp://ftp.csd.uu.se/pub/Mercury/</a>

	<dt> USA (manually updated mirror)
	<dd>
	<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/">
	ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/</a>
</dl>
