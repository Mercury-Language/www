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
<dd> <a href = "ftp://turiel.cs.mu.OZ.AU/pub/mercury/">
     ftp://turiel.cs.mu.OZ.AU/pub/mercury</a><br>
     The Mercury ftp site in Melbourne, Australia.
</dl>

Mercury 0.8 was released on November 18, 1998.

The NEWS file, detailing differences since the release of 0.7.3,
is available <a href="release-0.8.html">here</a>.
Source distributions of release 0.8 are available 
at the following site(s):

<dl>
<dt> Australia 
<dd> <a href = "ftp://turiel.cs.mu.OZ.AU/pub/mercury/">
     ftp://turiel.cs.mu.OZ.AU/pub/mercury</a><br>
     The Mercury ftp site in Melbourne, Australia.
<dt> USA
<dd> <a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/">
     ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/</a><br>
     Stonybrook University in New York, USA. 
<dt> USA
<dd> USA <a href = "ftp://sunsite.unc.edu/pub/Linux/devel/lang/">
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
    <li> Sun SPARC machines running Solaris 2.x and SunOS 5.x
    <li> DEC Alpha machines running OSF/1 (Digital Unix)
    <li> SGI Mips machines running IRIX 5.x
</ul>
<p>
Mercury has also worked on the following platforms, although we have
not tested the latest release on these:
<p>
<ul>
    <li> x86 machines running Windows 95 or Windows NT
    <li> x86 machines running BSD Unix
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
you will also need gnu-win32, version b17.1 or later.

<h3>How to get the distribution</h3>

You can go to our FTP sites or mirrors, or directly
download the source or binary distributions.



<h3>Source Distribution</h3>

<dl>
<dt>
The full source distribution is about 6 Mb.<br>
<dd> Distribution:
<a href = "ftp://turiel.cs.mu.OZ.AU/pub/mercury/mercury-0.8.1.tar.gz">Australia</a>
</dl>

<h3>Binary Distribution</h3>

Binary distributions of Mercury 0.8.1:
<br>
(Note that some of these URLs will be dangling links until we have
installed all the binary distributions.)
<p>

<dl>
    <dt>x86 machines running Linux (ELF executable format, libc 6) (about 14.5 Mb):
	<dd> Distribution:
<a href = "ftp://turiel.cs.mu.OZ.AU/pub/mercury/mercury-0.8.1.i686-pc-linux-gnu.tar.gz">Australia</a>
<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/mercury-0.8.1.i686-pc-linux-gnu.tar.gz">USA</a>
	<p>

    <dt>Sun SPARC machines running Solaris 2.x and SunOS 5.6 (about 17.9 Mb):
	<dd> Distribution:
<a href = "ftp://turiel.cs.mu.OZ.AU/pub/mercury/mercury-0.8.1.sparc-sun-solaris2.6.tar.gz">Australia</a>
<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/mercury-0.8.1.sparc-sun-solaris2.6.tar.gz">USA</a>

	<p>
    <dt>DEC Alpha machines running OSF/1 or Digital Unix (about 36 Mb):
	<dd> Distribution:
<a href = "ftp://turiel.cs.mu.OZ.AU/pub/mercury/mercury-0.8.1.alpha-dec-osf3.2.tar.gz">Australia</a>
<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/mercury-0.8.1.alpha-dec-osf3.2.tar.gz">USA</a>

<!--
	<p>
    <dt>x86 machines running Windows 95 or Windows NT (size unknown):
	<dd> Distribution:
<a href = "ftp://turiel.cs.mu.OZ.AU/pub/mercury/mercury-0.8.1.i386-windows.tar.gz">Australia</a>

-->

</dl>

<h3>FTP Sites</h3>
<dl>
	<dt> Australia: 
	<dd>
	<a href = "ftp://turiel.cs.mu.OZ.AU/pub/mercury/">
	ftp://turiel.cs.mu.OZ.AU/pub/mercury/</a>

	<dt> USA:
	<dd>
	<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/">
	ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/</a>

<!--
	<dt> Europe:
	<dd>
	<a href = "ftp://ftp.csd.uu.se/pub/Mercury/">
	ftp://ftp.csd.uu.se/pub/Mercury/</a>
-->
</dl>
