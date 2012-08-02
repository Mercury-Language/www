<?php

#
# This is PHP3 code.  On Debian systems (e.g. venus.cs.mu.oz.au),
# see /usr/share/doc/php3-doc/html/index.html for documentation on PHP3.
#

$aus_ftp = "ftp://$ftp_domain/pub/mercury/";
$aus_http = "http://$www_domain/download/files/";
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

#
# XXX These sites should be enabled once the release has been uploaded to
# them
#
$Sunsite = "no";
$Sourceforge = "no";

function link_to ($directory, $filename, $description)
{
	echo "<a href = \"" . $directory . $filename .
		"\">" . $description . "</a>\n";
	echo "&nbsp;&nbsp;&nbsp;\n";
}

function links_to_file ($filename, $onSunsite)
{
	global $aus_ftp, $aus_http, $usa_sourceforge_http, $usa_sunsite_ftp,
		$usa_sunysb_ftp, $sweden_ftp;
	global $Uppsala, $Stonybrook;
	global $Sunsite, $SourceForge;

	link_to ($aus_ftp, $filename, "Australia (FTP)");
	link_to ($aus_http, $filename, "Australia (HTTP)");
	if ($onSunsite == "yes" && $Sunsite == "yes") {
		link_to ($usa_sunsite_ftp, $filename, "USA (Sunsite FTP)");
	}
	if ($Sourceforge == "yes") {
		link_to ($usa_sourceforge_http, $filename, 
			"USA (SourceForge HTTP)");
	}
	if ($Uppsala == "yes") {
		link_to ($usa_sunysb_ftp, $filename, "USA (Stonybrook FTP)");
	}
	if ($Stonybrook == "yes") {
		link_to ($sweden_ftp, $filename, "Sweden (FTP)");
	}
}

?>
<h2><a name="info">Current Release</a></h2>

Mercury 11.07.2 was released on August 3, 2012.

<h3>Information</h3>

<ul>
<li> <a href = "release-11.07.html">
     Release notes for 11.07
     </a>
<li> <a href = "release-11.07-contents.html">
     Contents of release 11.07 distribution
     </a>
<li> <a href = "release-11.07-bugs.html">
     Known problems with release 11.07
     </a>
<li> <a href = "limitations.html">
     Limitations of the current release.
     </a>
</ul>

<h3>Supported Platforms</h3>

The latest release is known to work on the following platforms:

<p>

<ul>
    <li> x86 and x86-64 machines running Linux 
    <li> x86 and x86-64 machines running Microsoft Windows XP 3, Windows 7
         and Windows Server 2008 R2.
    <li> Apple Intel machines (both x86 and x86-64) running Mac OS X 10.6
</ul>

<p>

It should be pretty easy to port to any sufficiently Unix-like system.

<h3>What do I need?</h3>

<ul>
<li> For Unix systems, you will need the following:<p>
    <ol>
    <li> <a href="http://gcc.gnu.org">GNU C (gcc)</a>
	 <p>
	 We recommend using GCC version 4.2 or later, although most
         versions from 3.4.X onwards should work.
         <p>
         The following versions of GCC will definitely NOT work: 3.0, 3.3.1, 4.0.
	 They have bugs that cause internal compiler errors when compiling the C code generated
         by the Mercury compiler.
         <p>
         Avoid GCC 2.96 (distributed with Red Hat Linux 7.x) and any
         other unofficial releases of GCC.  Also avoid versions of GCC less 
	 than GCC 2.95.X.
         <p>
	 It is also possible to use other C compilers, such as
	 <a href="http://clang.llvm.org/">clang</a>.
	 <!--
         It is also possible to use other C compilers, such as
         <a href="http://www.cs.princeton.edu/software/lcc/">lcc</a>,
         but we don't recommend that.
	 -->
         <p>
    <li> GNU make (version 3.69 or higher).
    </ol>

    <p>

<li> For Windows,<p>
     <ol>
     <li> To compile the source distribution on Windows you 
          will need either <a href=http://www.cygwin.com/>Cygwin</a>,
          which you can download
          <a href=http://www.cygwin.com/setup.exe>here</a>,
	  or <a href="http://www.mingw.org">MSYS</a>. 
          Both Cygwin and MSYS include GNU C and GNU Make.<p>
     <li> You can optionally use
          <a href="http://msdn.microsoft.com/en-us/library/60k1461a.aspx">
          Microsoft Visual C</a> rather than GNU C (though Cygwin
	  or MSYS is still required).<p>
     </ol>

<li> To compile Mercury programs to Java, you will need the
     <a href="http://java.sun.com/javase/downloads/index.jsp#jdk">Java SDK</a>
     version 5.0 or higher.
     <p>

<li> To compile Mercury programs to Erlang, you will need the
     <a href="http://erlang.org/download.html">Erlang OTP</a>.
     <p>

<li> To compile Mercury programs to C#, you will need the
     <a href="http://msdn.microsoft.com/en-us/netframework">Microsoft .NET Framework</a>
     version 2.0 or later, or
     <a href="http://www.mono-project.com/">Mono</a> version 2.8 or later.

</ul>

<h3><a name="source">Source Distribution</a></h3>

The main "mercury-compiler" source distribution is about 25 Mb.
This includes the compiler, standard library,
debugger, profilers, and other tools.

<p>

There is also a "mercury-extras" distribution which contains a number
of useful additional libraries.  This is distributed separately,
mainly for copyright reasons (some of the additional libraries do
not meet the Debian Free Software Guidelines).
We recommend that everyone who downloads the "compiler"
distribution should also download the "extras" distribution.

<p>

Finally there is also a "mercury-tests" distribution which contains our
test suite.  This may be useful if you are modifying the compiler,
or porting it to a new system.

<dl>
<dt> Compiler (25 Mb)
<dd> 
<?php links_to_file("mercury-compiler-11.07.2.tar.gz", "yes") ?>
<p>

<dt> Extras (750 kb)
<dd>
<?php links_to_file("mercury-extras-11.07.2.tar.gz", "no") ?>
<p>

<dt> Tests (1 Mb)
<dd>
<?php links_to_file("mercury-tests-11.07.2.tar.gz", "no") ?>
</dl>

<h3><a name="binaries">Binary Distributions</a></h3>

There are no binary distributions for 11.07.2 currently available.
