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

function links_to_file ($filename, $Sunsite)
{
	global $aus_ftp, $aus_http, $usa_sourceforge_http, $usa_sunsite_ftp,
		$usa_sunysb_ftp, $sweden_ftp;
	global $Uppsala, $Stonybrook;

	link_to ($aus_ftp, $filename, "Australia (FTP)");
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
<h2><a name="info">Current Release</a></h2>

Mercury 0.10.1 was released on April 4, 2001.
<p>
Mercury 0.10 was released on February 25, 2001.
<p>
The NEWS file, detailing differences since the release of 0.9.1,
is available <a href="release-0.10.html">here</a>.
<p>

<h3>Information</h3>

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

<h3>Supported Platforms</h3>

The latest release is known to work on the following platforms:

<p>

<ul>
    <li> x86 machines running Debian Linux 
    <li> x86 machines running SuSE Linux 
    <li> x86 machines running Microsoft Windows 95
    <li> x86 machines running Microsoft Windows 2000
         (this release also includes
	 <a href="<?echo $root?>/dotnet.html">preliminary support for .NET</a>)
    <li> Sun SPARC machines running Solaris 2.x and SunOS 5.x
    <li> DEC Alpha machines running OSF/1 (Digital Unix)
</ul>

<p>

Mercury should also work on the following platforms, although we have
not tested the latest release on these:

<p>

<ul>
    <li> x86 machines running other versions of Microsoft Windows
         (98, 98SE, ME, NT)
    <li> x86 machines running other versions of Linux
         (however, there are some known problems with the version of GNU C
	 that shipped with Red Hat Linux 7.0)
    <li> x86 machines running FreeBSD 3.0
    <li> x86 machines running other BSD Unix systems
    <li> PowerPC machines running Linux
    <li> DEC Alpha machines running Linux
    <li> Sun SPARC machines running SunOS 4.x
    <li> HP PA machines running HPUX
    <li> IBM RS/6000 machines running AIX
    <li> DEC Mips machines running ULTRIX
    <li> SGI Mips machines running IRIX 5.x
</ul>

<p>

It should be pretty easy to port to any sufficiently Unix-like system.

<h3>What do I need?</h3>

<ul>
<li> For Unix systems, you will need the following:<p>
    <ol>
    <li> <a href="http://gcc.gnu.org">GNU C (gcc)</a>
         (version 2.7.2 or higher; 2.6.3 might work too, but it is
         known to have problems compiling Mercury on some architectures,
	 e.g. SPARC).
	 <p>
	 It is also possible to use other C compilers, such as
         <a href="http://www.cs.princeton.edu/software/lcc/">lcc</a>,
	 but we don't recommend that.
	 <p>
    <li> GNU make (version 3.69 or higher).
    </ol>

    <p>

<li> For Windows,<p>
     <ol>
     <li> You will need <a href=http://sources.redhat.com/cygwin/>Cygwin</a>,
          which you can download
          <a href=http://sources.redhat.com/cygwin/setup.exe>here</a>.
          Cygwin includes GNU C and GNU Make.<p>
     <li> You can optionally use
          <a href="http://msdn.microsoft.com/visualc/default.asp">
          Microsoft Visual C</a> rather than GNU C.<p>
     <li> If you want to take a look at our preliminary support for .NET,
          you also need 
	  <ol>
	      <li> the Microsoft .NET Beta 1 SDK, available from
                   <a href="http://msdn.microsoft.com/net/">MSDN</a>.
	           If you are an MSDN Universal subscriber you can
		   also order CDs as part of your subscription.
	      <li> A windows system suitable for development with
	           Microsoft .NET (Windows 2000 is the most likely).
		   Microsoft advises not to install the .NET Beta 1 SDK
		   onto a production machine.  Consider using a separate
		   boot partition, or a virtual environment such as
		   <a href="http://www.vmware.com">VMWare</a>.  
	  </ol>
     </ol>
</ul>

<h3>How to get the distribution</h3>

You can go to our FTP sites or mirrors, or directly
download the source or binary distributions.

<p>

Note that although the source distribution is much smaller than
the binary distribution, the compilation process will
almost always take more time than is saved by the smaller
download.

<h3><a name="source">Source Distribution</a></h3>

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
<? links_to_file("mercury-compiler-0.10.1.tar.gz", "yes") ?>
<p>
Sunsite also has many 
<a href="http://sunsite.unc.edu/pub/Linux/MIRRORS.html">mirrors</a>.<br>
The Mercury compiler source distribution is available in the
/pub/Linux/devel/lang/mercury directory on Sunsite,
or its equivalent place on the mirrors.
<p>

<dt> Extras (580 kb)
<dd>
<? links_to_file("mercury-extras-0.10.1.tar.gz", "no") ?>
<p>

<dt> Tests (381 kb)
<dd>
<? links_to_file("mercury-tests-0.10.1.tar.gz", "no") ?>
</dl>

<h3><a name="binaries">Binary Distribution</a></h3>

Binary distributions of Mercury 0.10.1:
<br>
(Note that some of these URLs will be dangling links until we have
installed all the binary distributions.)
<p>

<dl>
    <dt>x86 machines running Microsoft Windows 95, 98, 98SE, ME, NT, or 2000.
	<dd> Compiler + Extras + Tests (about 20 Mb): <br>
<? links_to_file("mercury-0.10.1.i686-pc-windows-cygwin.tar.gz", "no"); ?>
	<p>

    <dt>x86 machines running Linux (ELF executable format, libc 6.1)
	<dd> Note that these binary distributions work ONLY with libc 6.1.x.
	     Unfortunately they do NOT work with libc 6.0. This is due
	     to incompatibilities between libc versions 6.0 and 6.1
	     (i.e. glibc 2.0 and 2.1).
	     <p>

	     Debian Package (*.deb) <br>
	     Compiler only (about 28 Mb): <br>
<? links_to_file("mercury_0.10.1-1_i386.deb", "no"); ?>
	     <br>
	     If you get this package, we suggest that you also download
	     the "extras" source distribution.
	     <p>

	     RedHat Package (*.rpm) <br>
	     Compiler only (about 28 Mb): <br>
<? links_to_file("mercury-compiler-0.10.1-1.i386.rpm", "no"); ?>
	     <br>
	     If you get this package, we suggest that you also download
	     the "extras" source distribution. 
             <p>

	     Ordinary package (*.tar.gz) <br>
	     Compiler + Extras + Tests (about 30 Mb): <br>
<? links_to_file("mercury-0.10.1.i686-pc-linux-libc2.1-gnu-O5.tar.gz", "no"); ?>
	<p>

    <dt>Sun SPARC machines running Solaris 2.x and SunOS 5.6
	<dd> Compiler + Extras + Tests (about 35 Mb): <br>
<? links_to_file("mercury-0.10.1.sparc-sun-solaris2.7.tar.gz", "no"); ?>
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
<? links_to_file("mercury-0.10.1.alpha-dec-osf3.2.tar.gz", "no"); ?>

</dl>

<h3>FTP Download Sites</h3>
<dl>
	<dt> Australia (primary site)
	<dd>
	<a href = "<?echo $aus_ftp?>">
	<?echo $aus_ftp?></a>

<? if ($Uppsala == "yes") { ?>
	<dt> Sweden (automatically updated mirror)
	<dd>
	<a href = "<?echo $sweden_ftp?>">
	<?echo $sweden_ftp?></a>
<? } ?>

<? if ($Stonybrook == "yes") { ?>
	<dt> USA (Stonybrook; manually updated mirror)
	<dd>
	<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/">
	ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/</a>
<? } ?>

</dl>

<h3>HTTP Download Sites</h3>
<dl>
	<dt> Australia (primary site)
	<dd>
	<a href = "<?echo $aus_http?>">
	<?echo $aus_http?></a>

	<dt> USA (SourceForge)
	<dd> <a href = "http://sourceforge.net/projects/mercury/">
	http://sourceforge.net/projects/mercury/</a>
</dl>
