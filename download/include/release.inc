<?
#
# The stuff for the Uppsala ftp site is disabled,
# since that site is not working at the moment.
# Change this to "yes" to re-enable it.
#
$Uppsala = "no"
?>
<h2><a name="info">Current Release</a></h2>

Mercury 0.10 was released on February 25, 2001.
<p>
The NEWS file, detailing differences since the release of 0.9.1,
is available <a href="release-0.10.html">here</a>.
<p>

<h3>Information</h3>

<ul>
<li> <a href = "release-0.10.html">
     Release notes for 0.10
     </a>
<li> <a href = "release-0.10-contents.html">
     Contents of release 0.10 distribution
     </a>
<li> <a href = "release-0.10-bugs.html">
     Known problems with release 0.10
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
    <li> GNU make (version 3.69 or higher).
    </ol>

    <p>

<li> For Windows,
     <ol>
     <li> You will need <a href=http://sources.redhat.com/cygwin/>Cygwin</a>,
          which you can download
          <a href=http://sources.redhat.com/cygwin/setup.exe>here</a>.
          Cygwin includes GNU C and GNU Make.
     <li> You can optionally use
          <a href="http://msdn.microsoft.com/visualc/default.asp">
          Microsoft Visual C</a> rather than GNU C.
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

<h3><a name="source">Source Distribution</a></h3>

The main "mercury-compiler" source distribution is about 10 Mb.
This includes the compiler, standard library,
debugger, profiler, and other tools.
(Note that this does <em>not</em> include all the sources needed to build
the <a href="<?echo $root?>/download/gcc_backend.html">
native-code back-end</a>; for that you also need the
"mercury-gcc" and "gcc" distributions.
See <a href="<?echo $root?>/download/gcc_backend.html">here</a>
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
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/mercury-compiler-0.10.tar.gz">Australia</a>
<? if ($Uppsala == "yes") { ?>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/mercury-compiler-0.10.tar.gz">Sweden</a>
<? } ?>
<a href = "ftp://sunsite.unc.edu/pub/Linux/devel/lang/mercury/mercury-compiler-0.10.tar.gz">USA (Sunsite)</a>
<br>
<p>
Sunsite also has many 
<a href="http://sunsite.unc.edu/pub/Linux/MIRRORS.html">mirrors</a>.<br>
The Mercury compiler source distribution is available in the
/pub/Linux/devel/lang/mercury directory on Sunsite,
or its equivalent place on the mirrors.
<p>

<dt> Extras (580 kb)
<dd>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/mercury-extras-0.10.tar.gz">Australia</a>
<? if ($Uppsala == "yes") { ?>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/mercury-extras-0.10.tar.gz">Sweden</a>
<? } ?>
<p>
<dt> Tests (381 kb)
<dd>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/mercury-tests-0.10.tar.gz">Australia</a>
<? if ($Uppsala == "yes") { ?>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/mercury-tests-0.10.tar.gz">Sweden</a>
<? } ?>
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
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/mercury-0.10.i686-pc-windows-cygwin.tar.gz">Australia</a>
<? if ($Uppsala == "yes") { ?>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/mercury-0.10.i686-pc-windows-cygwin.tar.gz">Sweden</a>
<? } ?>
<a href =
"ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/mercury-0.10.i686-pc-windows-cygwin.tar.gz">USA</a>
	<p>

    <dt>x86 machines running Linux (ELF executable format, libc 6.1)
	<dd> Note that these binary distributions work ONLY with libc 6.1.x.
	     Unfortunately they do NOT work with libc 6.0. This is due
	     to incompatibilities between libc versions 6.0 and 6.1
	     (i.e. glibc 2.0 and 2.1).
	     <p>
	     Debian Package (*.deb) <br>
	     Compiler only (about 28 Mb): <br>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/mercury_0.10-1.deb">Australia</a>
<? if ($Uppsala == "yes") { ?>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/mercury-0.10-1.deb">Sweden</a>
<? } ?>
	     <br>
	     If you get this package, we suggest that you also download
	     the "extras" source distribution.
	     <p>
	     RedHat Package (*.rpm) <br>
	     Compiler only (about 28 Mb): <br>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/mercury_0.10.rpm">Australia</a>
<? if ($Uppsala == "yes") { ?>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/mercury-0.10.rpm">Sweden</a>
<? } ?>
	     <br>
	     If you get this package, we suggest that you also download
	     the "extras" source distribution. 
             <p>
	     Ordinary package (*.tar.gz) <br>
	     Compiler + Extras + Tests (about 30 Mb): <br>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/mercury-0.10.i686-pc-linux-libc2.1-gnu-O5.tar.gz">Australia</a>
<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/mercury-0.10.i686-pc-linux-libc2.1-gnu-O5.tar.gz">USA</a>
<? if ($sweden == "yes") { ?>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/mercury-0.10.i686-pc-linux-libc2.1-gnu-O5.tar.gz">Sweden</a>
<? } ?>
	<p>

    <dt>Sun SPARC machines running Solaris 2.x and SunOS 5.6
	<dd> Compiler + Extras + Tests (about 35 Mb): <br>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/mercury-0.10.sparc-sun-solaris2.7.tar.gz">Australia</a>
<? if ($sweden == "yes") { ?>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/mercury-0.10.sparc-sun-solaris2.7.tar.gz">Sweden</a>
<? } ?>
<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/mercury-0.10.sparc-sun-solaris2.7.tar.gz">USA</a><br>
	<em> <strong>WARNING:</strong> 
We've had reports that some users have had trouble untarring some of
the binary distributions for Solaris, with tar reporting
"directory checksum error".  This appears to be due to a bug in
Sun tar.  If you encounter this problem, then (1) let us know
and (2) use GNU tar. </em>
	<p>

    <dt>DEC Alpha machines running OSF/1 or Digital Unix
	<dd> Compiler + Extras + Tests (about 66 Mb): <br>
<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/mercury-0.10.alpha-dec-osf3.2.tar.gz">Australia</a>
<? if ($sweden == "yes") { ?>
<a href = "ftp://ftp.csd.uu.se/pub/Mercury/mercury-0.10.alpha-dec-osf3.2.tar.gz">Sweden</a>
<? } ?>
<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/mercury-0.10.alpha-dec-osf3.2.tar.gz">USA</a>

</dl>

<h3>FTP Sites</h3>
<dl>
	<dt> Australia (primary site)
	<dd>
	<a href = "ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/">
	ftp://ftp.mercury.cs.mu.OZ.AU/pub/mercury/</a>

<? if ($sweden == "yes") { ?>
	<dt> Sweden (automatically updated mirror)
	<dd>
	<a href = "ftp://ftp.csd.uu.se/pub/Mercury/">
	ftp://ftp.csd.uu.se/pub/Mercury/</a>
<? } ?>

	<dt> USA (manually updated mirror)
	<dd>
	<a href = "ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/">
	ftp://ftp.cs.sunysb.edu/pub/XSB/mercury/</a>
</dl>
