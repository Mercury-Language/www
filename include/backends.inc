<h2> Back-ends </h2>

The Mercury implementation compiles to a wide variety of target
languages on a wide variety of platforms.

<p>

Several of these back-ends are quite mature, other have been
released but are still immature, while others are under development.

<p>

<ul>
<li><i>Mature:</i>
<p>
<dl>
        <dt><a name=low_level_c><b>Low level C.</b></a></dt>
	<dd>
	Our original back-end.  This one compiles
	Mercury source to low-level C code.  It works by converting
	Mercury source into code for an abstract machine, and then
	converting the abstract machine instructions into C code
	with macros for the abstract machine registers and instructions.
	We use C's conditional compilation (<code>#ifdef</code>)
	to define these macros as either standard ANSI/ISO C code, or as
	GNU C code that makes uses of GNU C extensions such as
	global register variables, computed gotos, and inline assembler.
	<p>
	For more information on the low-level C back-end, see the
	<a href="<?echo $root?>/information/papers.html">papers</a>
	section of the web site, in particular the papers titled "The
	execution algorithm of Mercury: an efficient purely declarative
	logic programming language", "Code generation for Mercury",
	and "Compiling logic programs to C using GNU C as a portable
	assembler".
	</dd>
<p>
        <dt><a name="high_level_c"><b>High level C.</b></a></dt>
	<dd>
	This back-end compiles Mercury code to fairly high-level C
	code, more like the kind that a C programmer might write.
	<p>
	For more information on the high-level C back-end see the
	<a href="<?echo $root?>/information/papers.html">papers</a>
	section of the web site, in particular the paper titled
	"Compiling Mercury to high-level C code".
	</dd>
</dl>
<p>
<li><i>Beta-release quality:</i>
<p>
<dl>
        <dt><a name="java"><b>Java.</b></a></dt>
	<dd>
	This back-end compiles Mercury to Java.
	<p>
	The compiler support is complete,
	it includes good support for interfacing with Java
	(see the language reference manual for details),
	and the standard library is fairly reasonable.
	There is support for Mercury-level debugging, but there is
	not yet support for Mercury-level profiling.
	<p>
	For a guide to installing and using the Java grade, refer to
	README.Java and the User's Guide. You will need Mercury release 10.04
	or later.
	</dd>
<p>
        <dt><a name="csharp"><b>C#.</b></a></dt>
	<dd>
	This back-end compiles Mercury to C#.
	<p>
	The compiler support is complete,
	it includes good support for interfacing with C#
	(see the language reference manual for details),
	and the standard library is fairly reasonable.
	There is support for Mercury-level debugging, but there is
	not yet support for Mercury-level profiling.
	<p>
	For a guide to installing and using the C# grade, refer to
	README.CSharp and the User's Guide. You will need Mercury release 11.01
	or later.
	</dd>
<p>
        <dt><a name="erlang"><b>Erlang.</b></a></dt>
	<dd>
	This back-end compiles Mercury to Erlang.
	<p>
	The compiler support is in good shape,
	it includes good support for interfacing with Erlang
	(see the language reference manual for details),
	and the standard library is fairly reasonable.
	There is support for Mercury-level debugging, but there is not
	yet support for Mercury-level profiling.
	<p>
	For a guide to installing and using the Erlang grade, refer to
	README.Erlang and the User's Guide. You will need Mercury release 10.04
	or later.
	</dd>
</dl>
<p>
<li><i>Dormant, not currently under development:</i>
<p>
<dl>
        <dt>
        <a name="dotnet" href="<?echo $root?>/dotnet.html">
	<b>Microsoft's .NET</b></a>
	</dt>
	<dd>
	This back-end generates IL, the Intermediate Language
	used by Microsoft's .NET Common Language Runtime.
	</dd>
<p>
        <dt>
        <a name="gcc" href="<?echo $root?>/download/gcc-backend.html">
	<b>Native code</b></a>
	</dt>
	<dd>
	This back-end compiles to assembler, using the GCC back-end.
	</dd>
<p>
	<dt><a name="bytecode"><b>Mercury byte-code.</b></a></dt>
	<dd>
	We have our own bytecode format,
	a back-end which generates it, and an interpreter
	which runs it.  This is designed to interoperate
	with our low-level C back-end.  The main aim here
	is to get better turn-around time for debugging.
	<p>
	This one still needs quite a bit of work to integrate it
	with the rest of the Mercury implementation.
	Read the source.
	</dd>
</dl>
</ul>
