<h2>Current Release</h2>

The current stable release is Mercury 0.7. See below for details
on this release.<p>

The current development release is Mercury 0.7.3. The NEWS file,
detailing differences since the release of 0.7 is available <a
href="release-0.7.3.html">here</a>. We don't provide binary packages for
development releases, so you will need to compile some C code to use
this release.

The Mercury 0.7.3 source distribution is available for download from the
following sites:

<dl>
<dt> Australia 
<dd> <a href = "ftp://turiel.cs.mu.OZ.AU/pub/mercury">
     ftp://turiel.cs.mu.OZ.AU/pub/mercury</a><br>
     The Mercury ftp site in Melbourne, Australia.
<dt> USA
<dd> USA <a href = "ftp://sunsite.unc.edu/pub/Linux/devel/lang">
     ftp://sunsite.unc.edu/pub/Linux/devel/lang</a><br>
     Sunsite in the USA. 
<dt> Elsewhere	
<dd> Sunsite has many 
     <a href="http://sunsite.unc.edu/pub/Linux/MIRRORS.html">mirrors</a>.
     <br>
     Mercury is available in the /pub/Linux/devel/lang directory, or
     its equivalent place on the mirrors.
</dl>

<h3>Release 0.7.3</h3>

On the 1st November, 1997, we released Mercury 0.7.3. Some installation
problems with Windows, problems with the profiler and compatibility with
GNU Make versions >= 3.76 were fixed. A few features have also been
added.

<h3>Release 0.7.2</h3>

On the 13th October, 1997 we released Mercury 0.7.2. This release fixed
a few bugs, and added quite a few new features. Support was added
for user-defined equality predicates and generalized trailing.
We also split the distribution into "core" and "extras".

<h3>Release 0.7</h3>

On 15th August, 1997 we released Mercury 0.7.<p>

<a name="known">
<h3>Information</h3>
</a>

<ul>
	<li>
	<a href = "release-0.7.html">
	Release notes for 0.7
	</a>

	<li>
	<a href = "release-0.7-contents.html">
	Contents of release 0.7 distribution
	</a>

	<li>
	<a href = "release-0.7-bugs.html">
	Known problems with release 0.7
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
    <li> Sun SPARC machines running Solaris 2.x and SunOS 5.x
    <li> DEC Alpha machines running OSF/1 (Digital Unix)
    <li> SGI Mips machines running IRIX 5.x
    <li> x86 machines running Windows 95 or Windows NT
</ul>
<p>
Mercury has also worked on the following platforms, although we have
not tested the latest release on these:
<p>
<ul>
    <li> Sun SPARC machines running SunOS 4.x
    <li> x86 machines running BSD Unix
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
you will also need gnu-win32, version b17.1 or later.

<h3>How to get the distribution</h3>

You can go to our FTP sites or mirrors, or directly
download the source or binary distributions.



<h3>Source Distribution</h3>

<dl>
<dt>
The full source distribution is 4.8Mb.<br>
<dd> Distribution:
<a href = "ftp://turiel.cs.mu.OZ.AU/pub/mercury/mercury-0.7.tar.gz">Australia</a>
<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/mercury-0.7.tar.gz">USA</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/mercury-0.7.tar.gz">Europe</a>
</dl>

<h3>Binary Distribution</h3>

Binary distributions of Mercury 0.7:
<br>
(Note that some of these URLs may be dangling links until the mirrors
are fully updated.)
<p>

<dl>
    <dt>x86 machines running Linux (ELF executable format) (4.9Mb):
	<dd> Distribution:
<a href = "ftp://turiel.cs.mu.OZ.AU/pub/mercury/mercury-0.7.i386-linux-ELF.tar.gz">Australia</a>
<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/mercury-0.7.i386-linux-ELF.tar.gz">USA</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/mercury-0.7.i386-linux-ELF.tar.gz">Europe</a>
	<p>

    <dt>Sun SPARC machines running Solaris 2.x and SunOS 5.x (5.5Mb):
	<dd> Distribution:
<a href = "ftp://turiel.cs.mu.OZ.AU/pub/mercury/mercury-0.7.sparc-sun-solaris.tar.gz">Australia</a>
<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/mercury-0.7.sparc-sun-solaris.tar.gz">USA</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/mercury-0.7.sparc-sun-solaris.tar.gz">Europe</a>

	<p>
    <dt>DEC Alpha machines running OSF/1 or Digital Unix (11.2Mb):
	<dd> Distribution:
<a href = "ftp://turiel.cs.mu.OZ.AU/pub/mercury/mercury-0.7.alpha-dec-osf.tar.gz">Australia</a>
<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/mercury-0.7.alpha-dec-osf.tar.gz">USA</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/mercury-0.7.alpha-dec-osf.tar.gz">Europe</a>

<!--
	<p>
    <dt>x86 machines running Windows 95 or Windows NT (2.9Mb):
	<dd> Distribution:
<a href = "ftp://turiel.cs.mu.OZ.AU/pub/mercury/mercury-0.7.i386-windows.tar.gz">Australia</a>

-->

</dl>

<h3>FTP Sites</h3>
<dl>
	<dt> Australia: 

	<dd>
	<a href = "ftp://turiel.cs.mu.OZ.AU/pub/mercury">
	ftp://turiel.cs.mu.OZ.AU/pub/mercury</a>

	<dt> USA:
	<dd>
	<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury">
	ftp://ftp.cs.sunysb.edu/pub/XSB/mercury</a>

	<dt> Europe:
	<dd>
	<a href = "ftp://ftp.csd.uu.se/pub/Mercury">
	ftp://ftp.csd.uu.se/pub/Mercury</a>
</dl>
