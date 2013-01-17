<h2>About Mercury<span class="submenutitle">/ back-ends </span></h2>
<p>
The Mercury implementation compiles to a wide variety of target
languages on a wide variety of platforms.
Several of these back-ends are quite mature, other have been
released but are still immature, while others are under development.
</p>

<p class="backendssubsec">
Mature
</p>

<div style="float:left; max-width: 420px; margin-right: 50px;">
<h3>Low level C.</h3>
<p>
	Our original back-end.  This one compiles
	Mercury source to low-level C code.  It works by converting
	Mercury source into code for an abstract machine, and then
	converting the abstract machine instructions into C code
	with macros for the abstract machine registers and instructions.
	We use C's conditional compilation (<code>#ifdef</code>)
	to define these macros as either standard ANSI/ISO C code, or as
	GNU C code that makes uses of GNU C extensions such as
	global register variables, computed gotos, and inline assembler.
	</p><p>
	For more information on the low-level C back-end, see the
	<a href="<?php echo $root?>/documentation/papers.html">papers</a>
	section of the web site, in particular the papers titled "The
	execution algorithm of Mercury: an efficient purely declarative
	logic programming language", "Code generation for Mercury",
	and "Compiling logic programs to C using GNU C as a portable
	assembler".
</p>
</div>
<div style="float: left; max-width: 420px;">
<h3>High level C.</h3>
	<p>
	This back-end compiles Mercury code to fairly high-level C
	code, more like the kind that a C programmer might write.
	</p>
	<p>
	For more information on the high-level C back-end see the
	<a href="<?php echo $root?>/documentation/papers.html">papers</a>
	section of the web site, in particular the paper titled
	"Compiling Mercury to high-level C code".
	</p>

<div class="quote" style="max-width: 350px; float: left; margin: 20px 20px 20px 20px; border: 1px solid white;" align="left">
<h2 style="font-size: 19px;color: #2e3192; font-style: italic;">
“ Several of these back-ends are quite mature, other have been released but are still immature, while others are under development.
</h2>
</div>
</div>

<div style="clear: left;"></div>
<p class="backendssubsec">
Beta-release quality
</p>
<div style="float: left; max-width: 260px; margin-right: 50px; border: 0px solid black">
	<h3>Java.</h3>
	<p>
	This back-end compiles Mercury to Java.
	</p>
	<p>
	The compiler support is complete,
	it includes good support for interfacing with Java
	(see the language reference manual for details),
	and the standard library is fairly reasonable.
	There is support for Mercury-level debugging, but there is
	not yet support for Mercury-level profiling.
	</p><p>
	For a guide to installing and using the Java grade, refer to
	README.Java and the User's Guide. You will need Mercury release 10.04
	or later.
	</p>
</div>
<div style="float: left; max-width: 260px; margin-right: 50px; border: 0px solid black">
	<h3>C#.</h3>
	<p>
	This back-end compiles Mercury to C#.
	</p>
	<p>
	The compiler support is complete,
	it includes good support for interfacing with C#
	(see the language reference manual for details),
	and the standard library is fairly reasonable.
	There is support for Mercury-level debugging, but there is
	not yet support for Mercury-level profiling.
	</p>
	<p>
	For a guide to installing and using the C# grade, refer to
	README.CSharp and the User's Guide. You will need Mercury release 11.01
	or later.
	</p>
	<div style="margin-bottom: 50px;"></div>
</div>
<div style="float: left; max-width: 260px; border: 0px solid black">
    <h3>Erlang.</h3>
	<p>
	This back-end compiles Mercury to Erlang.
	</p>
	<p>
	The compiler support is in good shape,
	it includes good support for interfacing with Erlang
	(see the language reference manual for details),
	and the standard library is fairly reasonable.
	There is support for Mercury-level debugging, but there is not
	yet support for Mercury-level profiling.
	</p>
	<p>
	For a guide to installing and using the Erlang grade, refer to
	README.Erlang and the User's Guide. You will need Mercury release 10.04
	or later.
	</p>
</div>


<div style="clear: left;"></div>
<p class="backendssubsec">
Dormant, not currently under development
</p>
<div style="float: left; max-width: 260px; margin-right: 50px;">
	<h3><a name="bytecode">Mercury byte-code.</a></h3>
	<p>
	We have our own bytecode format,
	a back-end which generates it, and an interpreter
	which runs it.  This is designed to interoperate
	with our low-level C back-end.  The main aim here
	is to get better turn-around time for debugging.
	</p>
	<p>
	This one still needs quite a bit of work to integrate it
	with the rest of the Mercury implementation.
	Read the source.
	</p>

</div>
<div style="float: left; max-width: 260px; margin-right: 50px;">
    <h3>Native code</h3>
	<p>
	This back-end compiles to assembler, using the GCC back-end.
	</p>
	<p>
	Click <a href="<?php echo $root?>/download/gcc-backend.html">here</a> for more
	</p>
</div>
<div style="float: left; max-width: 260px;">	
	<h3>Microsoft's .NET</h3>
	<p>
	This back-end generates IL, the Intermediate Language
	used by Microsoft's .NET Common Language Runtime.
	</p>
	<p>
	Click <a href="<?php echo $root?>/dotnet.html">here</a> for more
	</p>
</div>

