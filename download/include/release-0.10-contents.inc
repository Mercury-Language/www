<h2>Release 0.10.0 - Contents</h2>

The Mercury distribution is split into three parts.
The "mercury-compiler" distribution contains:
<ul>
	<li> an autoconfiguration script
	<li> the Mercury source for the compiler
	<li> the Mercury source for the standard library
	<li> the automatically generated C source for the compiler
	     and the standard library
	<li> the runtime system (written in C)
	<li> Hans Boehm's conservative garbage collector for C
	<li> a debugger
	<li> a profiler
	<li> some utility programs, including a make front-end for
	     Mercury with automatic dependency recomputation
	<li> the Mercury language reference manual
	<li> the Mercury library reference manual
	<li> the Mercury user's guide
	<li> the Mercury frequently asked questions list
	<li> the Prolog to Mercury transition guide
	<li> some sample Mercury programs
</ul>
<p>
The "mercury-extras" distribution contains some extra libraries for:
	<ul>
	<li> lazy evaluation
	<li> dynamic linking
	<li> backtrackable (trailed) destructive update
	<li> concurrency
	<li> arithmetic:
	     <ul>
		<li> arithmetic on complex and imaginary numbers
		<li> a CLP(R) interface,
		     i.e. constraint solving over real numbers
	     </ul>
	<li> a set of generic stream type classes
	<li> UIs:
	     <ul>
		<li> graphics using Tk and OpenGL
		<li> text interfaces using curses
		<li> processing HTML forms using the CGI interface
	     </ul>
	<li> interfacing:
	     <ul>
		<li> XML parsing
		<li> POSIX interface
		<li> an ODBC database interface
	     </ul>
	<li> the Morphine trace analysis system
	<li> Moose, a parser generator for Mercury
	</ul>
<p>
The "mercury-tests" distribution contains a test suite.
