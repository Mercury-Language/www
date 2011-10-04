<?

#
# This is PHP3 code.  On Debian systems (e.g. saturn.cs.mu.oz.au),
# see /usr/share/doc/php3-doc/html/index.html for documentation on PHP3.
#

$aus_ftp = "ftp://$ftp_domain/pub/mercury/beta-releases/rotd/";
$aus_http = "http://$www_domain/download/files/beta-releases/rotd/";

function link_to ($directory, $filename, $description)
{
	echo "<a href = \"" . $directory . $filename .
		"\">" . $description . "</a>\n";
	echo "&nbsp;&nbsp;&nbsp;\n";
}

function links_to_file ($filename)
{
	global $aus_ftp, $aus_http;

	link_to ($aus_ftp, $filename, "Australia (FTP)");
	link_to ($aus_http, $filename, "Australia (HTTP)");
}

?>
<h2><a name="info">Release of the day</a></h2>

The latest release of the day is version <b><? echo $rotd_version; ?></b>.
<p>
Please treat ROTDs with caution -- although they are often very
useful and reasonably stable, they are not widely tested, and
may have unfinished features and rough edges.  We are still interested
in feedback and bug reports on the ROTDs.  Please file bug reports in our
<a href="http://bugs.mercury.csse.unimelb.edu.au">bug database</a>.

<h3>Information</h3>

<ul>
<li> <a href = "<? echo $root; 
?>/download/files/beta-releases/rotd/mercury-NEWS-<? echo $rotd_version; 
?>-unstable.txt">
     Changes since version <? echo $current_release; ?>
     </a>
<li> <a href = "<? echo $root; 
?>/download/files/beta-releases/rotd/mercury-INSTALL-<? echo $rotd_version; 
?>-unstable.txt">
     Instructions for installing from the source distribution
     </a>
<li> <a href = "<? echo $root; 
?>/download/files/beta-releases/rotd/mercury-test-failures-<? echo $rotd_version; 
?>-unstable.txt">
     Failing test cases for the current ROTD
     </a>
</ul>

<h3>Supported Platforms</h3>

The latest release of the day is known to work on the following platforms:

<p>

<ul>
    <li> x86 and x86-64 machines running Linux 
    <li> Apple Intel machines (both x86 and x86-64) running Mac OS X 10.6.
</ul>

<p>

Mercury should also work on the following platforms, although this is not
tested for every release of the day.

<p>

<ul>
    <li> x86 machines running Microsoft Windows NT, 2000, XP, Vista, 7,
         or Server 2008 R2.
    <li> x86 machines running FreeBSD 3.0
    <li> x86 machines running other BSD Unix systems
    <li> x86 machines running SunOS 5.x
    <li> PowerPC machines running Linux
    <li> PowerPC machines running Mac OS 10.3 and above
    <li> Sun SPARC machines running SunOS 4.x and 5.x
    <li> HP PA machines running HPUX
    <li> IBM RS/6000 machines running AIX
    <li> DEC Mips machines running ULTRIX
    <li> DEC Alpha machines running OSF/1 (Digital Unix)
    <li> DEC Alpha machines running Linux
    <li> SGI Mips machines running IRIX 5.x
</ul>

<p>

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

<!--
<li> The .NET back-end currently does not work. However,
     if you want to take a look at our preliminary support for .NET,
     you also need 
      <ol>
	  <li> the Microsoft .NET SDK version 1, available from
	       <a href="http://msdn.microsoft.com/netframework/">
	       MSDN</a>.
	       If you are an MSDN Universal subscriber you can
	       also order CDs as part of your subscription.
	  <li> A Windows system suitable for development with
	       Microsoft .NET, such as Windows XP.
      </ol>
-->

</ul>

<p>

<h3><a name="source">Source Distribution</a></h3>

The main "mercury-compiler" source distribution includes the compiler, 
standard library, debugger, profilers, and other tools.

<p>

There is also a "mercury-extras" distribution which contains a number
of useful additional libraries.  This is distributed separately,
mainly for copyright reasons (some of the additional libraries do
not meet the Debian Free Software Guidelines).

<p>

Finally there is also a "mercury-tests" distribution which contains our
test suite.  This may be useful if you are modifying the compiler,
or porting it to a new system.

<dl>
<dt> Compiler
<dd> 
<? links_to_file("mercury-compiler-$rotd_version-unstable.tar.gz") ?>
<p>

<dt> Extras
<dd>
<? links_to_file("mercury-extras-$rotd_version-unstable.tar.gz") ?>
<p>

<dt> Tests
<dd>
<? links_to_file("mercury-tests-$rotd_version-unstable.tar.gz") ?>
</dl>

