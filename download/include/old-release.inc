<?

#
# This is PHP3 code.  On Debian systems (e.g. venus.cs.mu.oz.au),
# see /usr/share/doc/php3-doc/html/index.html for documentation on PHP3.
#

$aus_ftp = "ftp://ftp.mercury.cs.mu.oz.au/pub/mercury/";
$aus_http = "http://www.cs.mu.oz.au/mercury/download/files/";
$usa_sourceforge_http = "http://prdownloads.sourceforge.net/mercury/";
$usa_sunsite_ftp = "ftp://sunsite.unc.edu/pub/Linux/devel/lang/mercury/";
$usa_sunysb_ftp = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/";
$sweden_ftp = "ftp://ftp.csd.uu.se/pub/Mercury/";

#
# XXX The stuff for the Uppsala and Stonybrook ftp sites is disabled,
# since those sites are not working/updated at the moment.
#
$Uppsala = "no";
$Stonybrook = "no";

function link_to ($directory, $filename, $description)
{
	echo "<a href = \"" . $directory . $filename .
		"\">" . $description . "</a>\n";
	echo "&nbsp;&nbsp;&nbsp;\n";
}

function links_to_file ($filename, $release, $Sunsite)
{
	global $aus_ftp, $aus_http, $usa_sourceforge_http, $usa_sunsite_ftp,
		$usa_sunysb_ftp, $sweden_ftp;
	global $Uppsala, $Stonybrook;

	$aus_ftp_dir = $aus_ftp . "old-releases/" . $release . "/";
	$aus_http_dir = $aus_http . "old-releases/" . $release . "/";

	link_to ($aus_ftp_dir, $filename, "Australia (FTP)");
	link_to ($aus_http, $filename, "Australia (HTTP)");
	if ($Sunsite == "yes") {
		link_to ($usa_sunsite_ftp, $filename, "USA (Sunsite FTP)");
	}
	link_to ($usa_sourceforge_http, $filename, "USA (SourceForge HTTP)");
	if ($Uppsala == "yes") {
		link_to ($usa_sunysb_ftp, $filename, "USA (Stonybrook FTP)");
	}
	if ($Stonybrook == "yes") {
		link_to ($sweden_ftp, $filename, "Sweden (FTP)");
	}
}

?>

<h2>Old Releases</h2>

The Mercury distribution has been released to the public several times.
The release information pages for these older releases may contain
useful information, including release notes and known problems,
sometimes with work-arounds or patches.   If you are experiencing
problems with these releases, it might be worth installing the <a
href="release.html">current release</a>
<p>

Please note, however, that the source and binaries for these
releases are often no longer available from the FTP site.

<h3>Release 0.10</h3>

<h4>Information</h4>

<ul>
<li> <a href = "release-0.10.html">
     Release notes for 0.10.1 and 0.10
     </a>
<li> <a href = "release-0.10-contents.html">
     Contents of release 0.10.1 distribution
     </a>
<li> <a href = "release-0.10-bugs.html">
     Known problems with release 0.10.1
     </a>
<li> <a href = "limitations.html">
     Limitations of the current release.
     </a>
</ul>

<h4><a name="source">Source Distribution</a></h4>

The main "mercury-compiler" source distribution is about 10 Mb.
This includes the compiler, standard library,
debugger, profiler, and other tools.
(Note that this does <em>not</em> include all the sources needed to build
the <a href="<?echo $root?>/download/gcc-backend.html">
native-code back-end</a>; for that you also need the
"mercury-gcc" and "gcc" distributions.
See <a href="<?echo $root?>/download/gcc-backend.html">here</a>
for details.)

<p>

There is also a small "mercury-extras" distribution which contains a number
of useful additional libraries.  This is distributed separately,
mainly for copyright reasons (some of the additional libraries do
not meet the Debian Free Software Guidelines).
We strongly recommend that everyone who downloads the "compiler"
distribution should also download the "extras" distribution.

<p>

Finally there is also a "mercury-tests" distribution which contains our
test suite.  This may be useful if you are modifying the compiler,
or porting it to a new system.

<dl>
<dt> Compiler (10 Mb)
<dd> 
<? links_to_file("mercury-compiler-0.10.tar.gz", "0.10", "yes") ?>
<p>
Sunsite also has many 
<a href="http://sunsite.unc.edu/pub/Linux/MIRRORS.html">mirrors</a>.<br>
The Mercury compiler source distribution is available in the
/pub/Linux/devel/lang/mercury directory on Sunsite,
or its equivalent place on the mirrors.
<p>

<dt> Extras (580 kb)
<dd>
<? links_to_file("mercury-extras-0.10.tar.gz", "0.10", "no") ?>
<p>

<dt> Tests (381 kb)
<dd>
<? links_to_file("mercury-tests-0.10.tar.gz", "0.10", "no") ?>
</dl>

<h3><a name="binaries">Binary Distribution</a></h3>

Binary distributions of Mercury 0.10:
<br>
(Note that some of these URLs will be dangling links until we have
installed all the binary distributions.)
<p>

<dl>
    <dt>x86 machines running Microsoft Windows 95, 98, 98SE, ME, NT, or 2000.
	<dd> Compiler + Extras + Tests (about 20 Mb): <br>
<? links_to_file("mercury-0.10.i686-pc-windows-cygwin.tar.gz", "0.10", "no"); ?>
	<p>

    <dt>x86 machines running Linux (ELF executable format, libc 6.1)
	<dd> Note that these binary distributions work ONLY with libc 6.1.x.
	     Unfortunately they do NOT work with libc 6.0. This is due
	     to incompatibilities between libc versions 6.0 and 6.1
	     (i.e. glibc 2.0 and 2.1).
	     <p>

	     Ordinary package (*.tar.gz) <br>
	     Compiler + Extras + Tests (about 30 Mb): <br>
<? links_to_file("mercury-0.10.i686-pc-linux-libc2.1-gnu-O5.tar.gz", "0.10", "no"); ?>
	<p>

    <dt>Sun SPARC machines running Solaris 2.x and SunOS 5.6
	<dd> Compiler + Extras + Tests (about 35 Mb): <br>
<? links_to_file("mercury-0.10.sparc-sun-solaris2.7.tar.gz", "0.10", "no"); ?>
	<br>
	<em> <strong>WARNING:</strong> 
We've had reports that some users have had trouble untarring some of
the binary distributions for Solaris, with tar reporting
"directory checksum error".  This appears to be due to a bug in
Sun tar.  If you encounter this problem, then (1) let us know
and (2) use GNU tar. </em>
	<p>

    <dt>DEC Alpha machines running OSF/1 or Digital Unix
	<dd> Compiler + Extras + Tests (about 66 Mb): <br>
<? links_to_file("mercury-0.10.alpha-dec-osf3.2.tar.gz", "0.10", "no"); ?>

</dl>


<h3>Release 0.9.1</h3>

Mercury 0.9.1 was released on January 26, 2000.
<p>
The NEWS file, detailing differences since the release of 0.8.1,
is available <a href="release-0.9.html">here</a>.

<a name="known">
<h4>Information</h4>
</a>

<ul>
	<li>
	<a href = "release-0.9.html">
	Release notes for 0.9.1
	</a>

	<li>
	<a href = "release-0.9-contents.html">
	Contents of release 0.9.1 distribution
	</a>

	<li>
	<a href = "release-0.9-bugs.html">
	Known problems with release 0.9.1
	</a>

	<li>
	<a href = "limitations.html">
	Limitations of the current release.
	</a>
</ul>

<h4>Source Distribution</h4>

The main "compiler" source distribution is about 8 Mb.
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
<dt> Compiler (8 Mb)
<dd> 
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.9.1/mercury-compiler-0.9.1.tar.gz">Australia</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/old-releases/0.9.1/mercury-compiler-0.9.1.tar.gz">Sweden</a>
<dt> Extras (387 kb)
<dd>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.9.1/mercury-extras-0.9.1.tar.gz">Australia</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/old-releases/0.9.1/mercury-extras-0.9.1.tar.gz">Sweden</a>
<dt> Tests (330 kb)
<dd>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.9.1/mercury-tests-0.9.1.tar.gz">Australia</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/old-releases/0.9.1/mercury-tests-0.9.1.tar.gz">Sweden</a>
</dl>

<h4>Binary Distribution</h4>

Binary distributions of Mercury 0.9.1:
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
	     We have separate binaries distributions for libc 6.1 below.
	     <p>
	     Debian Package (*.deb) <br>
	     Compiler only (about 18 Mb): <br>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.9.1/mercury_0.9.1-1_i386.deb">Australia</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/old-releases/0.9.1/mercury_0.9.1-1_i386.deb">Sweden</a>
	     <br>
	     If you get this package, we suggest that you also download
	     the "extras" source distribution.
	     <p>
	     RedHat Package (*.rpm) <br>
	     Compiler only (about 18 Mb): <br>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.9.1/mercury-compiler-0.9.1-1.i386.rpm">Australia</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/old-releases/0.9.1/mercury-compiler-0.9.1-1.i386.rpm">Sweden</a>
	     <br>
	     If you get this package, we suggest that you also download
	     the "extras" source distribution. 
             <p>
	     Ordinary package (*.tar.gz) <br>
	     Compiler + Extras + Tests (about 20 Mb): <br>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.9.1/mercury-0.9.1.i686-pc-linux-libc2.0-gnu.tar.gz">Australia</a>
<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/mercury-0.9.1.i686-pc-linux-libc2.0-gnu.tar.gz">USA</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/old-releases/0.9.1/mercury-0.9.1.i686-pc-linux-libc2.0-gnu.tar.gz">Sweden</a>
	<p>

    <dt>x86 machines running Linux (ELF executable format, libc 6.1)
	<dd> Note that these binary distributions work ONLY with libc 6.1.x.
	     Unfortunately they do NOT work with libc 6.0. This is due
	     to incompatibilities between libc versions 6.0 and 6.1
	     (i.e. glibc 2.0 and 2.1).
	     We have separate binaries distributions for libc 6.0 above.
	     <p>
	     Debian Package (*.deb) <br>
	     Compiler only (about 18 Mb): <br>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.9.1/mercury_0.9.1-1_i386.deb">Australia</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/old-releases/0.9.1/mercury-0.9.1-1_i386.deb">Sweden</a>
	     <br>
	     If you get this package, we suggest that you also download
	     the "extras" source distribution.
	     <p>
	     RedHat Package (*.rpm) <br>
	     Compiler only (about 18 Mb): <br>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.9.1/mercury-compiler-0.9.1-1.i386.rpm">Australia</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/old-releases/0.9.1/mercury-compiler-0.9.1-1.i386.rpm">Sweden</a>
	     <br>
	     If you get this package, we suggest that you also download
	     the "extras" source distribution. 
             <p>
	     Ordinary package (*.tar.gz) <br>
	     Compiler + Extras + Tests (about 20 Mb): <br>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.9.1/mercury-0.9.1.i686-pc-linux-libc2.1-gnu.tar.gz">Australia</a>
<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/mercury-0.9.1.i686-pc-linux-libc2.1-gnu.tar.gz">USA</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/old-releases/0.9.1/mercury-0.9.1.i686-pc-linux-libc2.1-gnu.tar.gz">Sweden</a>
	<p>

    <dt>Sun SPARC machines running Solaris 2.x and SunOS 5.6
	<dd> Compiler + Extras + Tests (about 23 Mb): <br>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.9.1/mercury-0.9.1.sparc-sun-solaris2.6.tar.gz">Australia</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/old-releases/0.9.1/mercury-0.9.1.sparc-sun-solaris2.6.tar.gz">Sweden</a>
<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/mercury-0.9.1.sparc-sun-solaris2.6.tar.gz">USA</a><br>
	<em> <strong>WARNING:</strong> 
We've had reports that some users have had trouble untarring some of
the binary distributions for Solaris, with tar reporting
"directory checksum error".  This appears to be due to a bug in
Sun tar.  If you encounter this problem, then (1) let us know
and (2) use GNU tar. </em>
	<p>
    <dt>DEC Alpha machines running OSF/1 or Digital Unix
	<dd> Compiler + Extras + Tests (about 44 Mb): <br>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.9.1/mercury-0.9.1.alpha-dec-osf3.2.tar.gz">Australia</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/old-releases/0.9.1/mercury-0.9.1.alpha-dec-osf3.2.tar.gz">Sweden</a>
<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/0.9.1/mercury-0.9.1.alpha-dec-osf3.2.tar.gz">USA</a>

	<p>
    <dt>x86 machines running Windows 95 or Windows NT
	<dd> Compiler + Extras + Tests (about 20 Mb): <br>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.9.1/mercury-0.9.1.pc-windows-cygwin-b20.1.tar.gz">Australia</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/old-releases/0.9.1/mercury-0.9.1.pc-windows-cygwin-b20.1.tar.gz">Sweden</a>
<a href =
"ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/mercury-0.9.1.pc-windows-cygwin-b20.1.tar.gz">USA</a>

</dl>

<h3>Release 0.9</h3>

Mercury 0.9 was released on December 18, 1998.
<p>
The NEWS file, detailing differences since the release of 0.8.1,
is available <a href="release-0.9.html">here</a>.
Source distributions of release 0.9 are available 
at the following site(s):

<dl>
<dt> Australia 
<dd> <a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.9.1/">
     ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.9.1/</a><br>
     The Mercury ftp site in Melbourne, Australia.
<dt> Sweden
<dd> <a href = "ftp://ftp.csd.uu.se/pub/Mercury/">
     ftp://ftp.csd.uu.se/pub/Mercury/old-releases/</a><br>
     Uppsala University, Sweden.
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


<h3>Release 0.8.1</h3>

Mercury 0.8.1 was released on December 13, 1998.
The only change in this release was that we fixed some
problems with the scripts for building the binary release;
apart from that it was identical to 0.8.

Source and binary distributions of release 0.8.1, and
a patch file containing the diffs between 0.8 and 0.8.1,
are available at the following site(s):

<dl>
<dt> Australia 
<dd> <a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.8.1/">
     ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.8.1/</a><br>
     The Mercury ftp site in Melbourne, Australia.
<dt> Sweden
<dd> <a href = "ftp://ftp.csd.uu.se/pub/Mercury/old-releases/">
     ftp://ftp.csd.uu.se/pub/Mercury/</a><br>
     Uppsala University, Sweden.
</dl>

<h3>Release 0.8</h3>

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
<h4>Information</h4>
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

<h4>Source Distribution</h4>

<dl>
<dt> Compiler (6M)
<dd> 
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.8.1/mercury-compiler-0.8.1.tar.gz">Australia</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/old-releases/0.8.1/mercury-compiler-0.8.1.tar.gz">Sweden</a>
<dt> Extras (377k)
<dd>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.8.1/mercury-extras-0.8.1.tar.gz">Australia</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/old-releases/0.8.1/mercury-extras-0.8.1.tar.gz">Sweden</a>
<dt> Tests (233k)
<dd>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/0.8.1/old-releases/mercury-tests-0.8.1.tar.gz">Australia</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/old-releases/0.8.1/mercury-tests-0.8.1.tar.gz">Sweden</a>
</dl>

<h4>Binary Distribution</h4>

Binary distributions of Mercury 0.8.1:
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
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.8.1/mercury_0.8.1-1.i386.deb">Australia</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/old-releases/0.8.1/mercury_0.8.1-1.i386.deb">Sweden</a>
	     <br>
	     If you get this package, we suggest that you also download
	     the "extras" source distribution.
	     <p>
	     RedHat Package (*.rpm) <br>
	     Compiler only (about 11.6 Mb): <br>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.8.1/mercury-compiler-0.8.1-1.i386.rpm">Australia</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/old-releases/0.8.1/mercury-compiler-0.8.1-1.i386.rpm">Sweden</a>
	     <br>
	     If you get this package, we suggest that you also download
	     the "extras" source distribution. 
             <p>
	     Ordinary package (*.tar.gz) <br>
	     Compiler + Extras + Tests (about 14.5 Mb): <br>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.8.1/mercury-0.8.1.i686-pc-linux-gnu.tar.gz">Australia</a>
<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/mercury-0.8.1.i686-pc-linux-gnu.tar.gz">USA</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/old-releases/0.8.1/mercury-0.8.1.i686-pc-linux-gnu.tar.gz">Sweden</a>
	<p>

    <dt>x86 machines running FreeBSD 3.0
	<dd> Compiler only, minus sample programs (about 14.5 Mb): <br>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.8/mercury-compiler-0.8.i386-pc-freebsd3.0.tar.gz">Australia</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/old-releases/0.8/mercury-compiler-0.8.i386-pc-freebsd3.0.tar.gz">Sweden</a>
<br>
	If you get this distribution, we suggest you also download
	the "compiler" and "extras" source distributions,
	so that you can look at some sample programs.
	<p>

    <dt>Sun SPARC machines running Solaris 2.x and SunOS 5.6
	<dd> Compiler + Extras + Tests (about 17.9 Mb): <br>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.8.1/mercury-0.8.1.sparc-sun-solaris2.6.tar.gz">Australia</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/old-releases/0.8.1/mercury-0.8.1.sparc-sun-solaris2.6.tar.gz">Sweden</a>
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
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.8.1/mercury-0.8.1.alpha-dec-osf3.2.tar.gz">Australia</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/old-releases/0.8.1/mercury-0.8.1.alpha-dec-osf3.2.tar.gz">Sweden</a>
<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/mercury-0.8.1.alpha-dec-osf3.2.tar.gz">USA</a>

	<p>
    <dt>x86 machines running Windows 95 or Windows NT
	<dd> Compiler + Extras + Tests (about 14 Mb): <br>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/Nld-releases/mercury-0.8.1.pc-windows-cygwin-b20.1.tar.gz">Australia</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/old-releases/0.8.1/mercury-0.8.1.pc-windows-cygwin-b20.1.tar.gz">Sweden</a>

</dl>

<h3>Release 0.7.3</h3>

On the 1st November, 1997, we released Mercury 0.7.3. Some installation
problems with Windows, problems with the profiler and compatibility with
GNU Make versions &gt;= 3.76 were fixed.  A few features were also added.

<h3>Release 0.7.2</h3>

On the 13th October, 1997 we released Mercury 0.7.2. This release fixed
a few bugs, and added quite a few new features. Support was added
for user-defined equality predicates and generalized trailing.
We also split the distribution into "core" and "extras".

<h3>Release 0.7</h3>

On 15th August, 1997 we released Mercury 0.7.<p>

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

<h4>Source Distribution of Mercury 0.7</h4>

<dl>
<dt>
The full source distribution is 4.8Mb.<br>
<dd> Distribution:
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.7/mercury-0.7.tar.gz">Australia</a>
<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/mercury-0.7.tar.gz">USA</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/old-releases/0.7/mercury-0.7.tar.gz">Europe</a>
</dl>

<h4>Binary Distribution of Mercury 0.7</h4>

<dl>
    <dt>x86 machines running Linux (ELF executable format) (4.9Mb):
	<dd> Distribution:
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.7/mercury-0.7.i386-linux-ELF.tar.gz">Australia</a>
<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/mercury-0.7.i386-linux-ELF.tar.gz">USA</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/old-releases/0.7/mercury-0.7.i386-linux-ELF.tar.gz">Europe</a>
	<p>

    <dt>Sun SPARC machines running Solaris 2.x and SunOS 5.x (5.5Mb):
	<dd> Distribution:
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.7/mercury-0.7.sparc-sun-solaris.tar.gz">Australia</a>
<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/mercury-0.7.sparc-sun-solaris.tar.gz">USA</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/old-releases/0.7/mercury-0.7.sparc-sun-solaris.tar.gz">Europe</a>

	<p>
    <dt>DEC Alpha machines running OSF/1 or Digital Unix (11.2Mb):
	<dd> Distribution:
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.7/mercury-0.7.alpha-dec-osf.tar.gz">Australia</a>
<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/mercury-0.7.alpha-dec-osf.tar.gz">USA</a>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/old-releases/0.7/mercury-0.7.alpha-dec-osf.tar.gz">Europe</a>

	<p>
    <dt>x86 machines running Windows 95 or Windows NT (2.9Mb):
	<dd> Distribution:
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.7/mercury-0.7.i386-windows.tar.gz">Australia</a>

</dl>

<h4>FTP Sites for Mercury 0.7</h4>
<dl>
	<dt> Australia: 

	<dd>
	<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/0.7/">
	ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/old-releases/</a>

	<dt> USA:
	<dd>
	<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/">
	ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/</a>

	<dt> Europe:
	<dd>
	<a href = "ftp://ftp.csd.uu.se/pub/Mercury/old-releases/">
	ftp://ftp.csd.uu.se/pub/Mercury/old-releases/</a>
</dl>

<h3>Release 0.6.2-1</h3>

On the 2nd of June, 1997, Debian GNU/Linux 1.3 was released, including a
slightly modified Mercury 0.6.2 as one of the stable development
packages.  Thanks to Milan Zamazal (pdm@fi.muni.cz) for preparing this
package.  This package can be obtained at any of the Debian mirrors -
see the <a href="http://www.debian.org">Debian Web Site</a> for more
information on Debian.  It will also be available on any official Debian
1.3 CDs.  Please note: this Debian version "mercury 0.6.2-1" uses a
different name for the Mercury compiler `mc' due to name clashes with
another package, so the documentation (user's guide in particular)
should read `mercury' instead of `mc'.  This problem will be fixed in
Mercury 0.7.

<h3>Release 0.6.2</h3>

On the 14th of January, 1997 an updated version of the binary
distribution of Mercury for Windows 95/NT was released.  That was
still a beta release of Windows support.  That release was version 0.6.2.<p>

<h3>Release 0.6.1</h3>

On 26th of August, 1996, a patch for a problem with integer
multiplication and division was made available (see the <a href=
"release-0.6-bugs.html">known problems list</a> for details, and patches
for both the source and binary distributions).  
The version of Mercury 0.6 with these patches applied to is referred to
as 0.6.1.<p>

<h3>Release 0.6</h3>

This distribution of Mercury was released on 2nd of August, 1996.<p>

<ul>
	<li>
	<a href = "release-0.6.html">
	Release notes for 0.6
	</a>

	<li>
	<a href = "release-0.6-contents.html">
	Contents of release 0.6 distribution
	</a>

	<li>
	<a href = "release-0.6-bugs.html">
	Known problems with release 0.6
	</a>
</ul>

<h3>Release 0.5.1</h3>

This distribution of Mercury was a bug fix release, for problems found
in 0.5.

<ul>
	<li>
	<a href = "release-0.5.1.html">
	Release notes for 0.5.1 
	</a>

	<li>
	<a href = "release-0.5.1-bugs.html">
	Known problems with release 0.5.1
	</a>
</ul>

<h3>Release 0.5</h3>

This distribution of Mercury was released on 15 February 1996.

<ul>
	<li>
	<a href = "release-0.5.html">
	Release notes for 0.5
	</a>

	<li>
	<a href = "release-0.5-contents.html">
	Contents of release 0.5 distribution
	</a>

	<li>
	<a href = "release-0.5-bugs.html">
	Known problems with release 0.5
	</a>
</ul>

<h3>Release 0.4</h3>

This distribution of Mercury was released on 15 September 1995.

<ul>
	<li>
	<a href = "release-0.4.html">
	Release notes for 0.4
	</a>

	<li>
	<a href = "release-0.4-contents.html">
	Contents of release 0.4 distribution
	</a>

	<li>
	<a href = "release-0.4-bugs.html">
	Known problems with release 0.4 
	</a>
</ul>

<h3>Release 0.3 (beta)</h3>

This beta distribution of Mercury was released on 18 July 1995.<br>
It was the first public release.

<ul>
	<li>
	<a href = "release-0.3.html">
	Release notes for 0.3
	</a>

	<li>
	<a href = "release-0.3-contents.html">
	Contents of release 0.3 distribution
	</a>

	<li>
	<a href = "release-0.3-bugs.html">
	Known problems with release 0.3
	</a>
</ul>
