<h2>Main Features</h2>

Mercury is a new, purely declarative logic programming language.  Like
Prolog and other existing logic programming languages, it is a very
high-level language that allows programmers to concentrate on the
problem rather than the low-level details such as memory management.
Unlike Prolog, which is oriented towards exploratory programming,
Mercury is designed for the construction of large, reliable, efficient
software systems by teams of programmers. As a consequence, programming
in Mercury has a different flavour than programming in Prolog.
<p>

The main features of Mercury are:
<p>
<ul>
	<li> Mercury is purely declarative: predicates and functions in
	Mercury do not have non-logical side effects.  
	<p>

	Mercury does I/O through built-in and library predicates that
	take an old state of the world and some other parameters, and
	return a new state of the world and possibly some other
	results. The language requires that the input argument
	representing the old state of the world be the last reference
	to the old state of the world, thus allowing the state of
	the world to be updated destructively. The language also
	requires that I/O take place only in parts of the program where
	backtracking will not be needed.
	<p>

	Mercury handles dynamic data structures not through Prolog's
	assert/retract but by providing several abstract data types in
	the standard Mercury library that manage collections of items
	with different operations and tradeoffs.
	<p>


	<li> Mercury is a strongly typed language. Mercury's type system
	is based on many-sorted logic with parametric polymorphism, very
	similar to the type systems of modern functional languages such
	as ML and Haskell. Programmers must declare the types they need
	using declarations such as

	<pre>
	:- type list(T) --->	[] ; [T | list(T)].
	:- type maybe(T) --->	yes(T) ; no.
	</pre>

	They must also declare the type signatures of the predicates they
	define, for example
	<pre>
	:- pred append(list(T), list(T), list(T)).
	</pre>
	The compiler infers the types of all variables in the program.
	Type errors are reported at compile time.
	<p>


	<li> Mercury is a strongly moded language. The programmer must
	declare the instantiation state of the arguments of predicates
	at the time of the call to the predicate and at the time of the
	success of the predicate. Currently only a subset of the
	intended mode system is implemented. This subset effectively
	requires arguments to be either fully input (ground at the time
	of call and at the time of success) or fully output (free at
	the time of call and ground at the time of success).
	<p>

	A predicate may be usable in more than one mode. For example,
	append is usually used in at least these two modes:

	<pre>
	:- mode append(in, in, out).
	:- mode append(out, out, in).
	</pre>

	If a predicate has only one mode, the mode information can be
	given in the predicate declaration.

	<pre>
	:- pred factorial(int::in, int::out).
	</pre>

	The compiler will infer the mode of each call, unification and
	other builtin in the program. It will reorder the bodies of
	clauses as necessary to find a left to right execution order;
	if it cannot do so, it rejects the program. Like type-checking,
	this means that a large class of errors are detected at
	compile time.
	<p>


	<li> Mercury has a strong determinism system. For each mode of each
	predicate, the programmer should declare whether the predicate
	will succeed exactly once (det), at most once (semidet), at
	least once (multi) or an arbitrary number of times (nondet).
	These declarations are attached to mode declarations like
	this:

	<pre>
	:- mode append(in, in, out) is det.
	:- mode append(out, out, in) is multi.

	:- pred factorial(int::in, int::out) is det.
	</pre>

	The compiler will try to prove the programmer's determinism
	declaration using a simple, predictable set of rules that seems
	sufficient in practice (the problem in general is undecidable).
	If it cannot do so, it rejects the program.
	<p>

	As with types and modes, determinism checking catches many
	program errors at compile time. It is particularly useful if
	some deterministic (det) predicates each have a clause for each
	function symbol in the type of one of their input arguments,
	and this type changes; you will get determinism errors for all
	of these predicates, telling you to put in code to cover the
	case when the input argument is bound to the newly added
	function symbol.
	<p>

	<li> Mercury has a module system. Programs consist of one or more
	modules. Each module has an interface section that contains
	the declarations for the types, functions and predicates
	exported from the module, and an implementation section that
	contains the definitions of the exported entities and also
	definitions for types and predicates that are local to the
	module. A type whose name is exported but whose definition is
	not, can be manipulated only by predicates in the defining
	module; this is how Mercury implements abstract data types.
	For predicates and functions that are not exported, Mercury
	supports automatic type, mode, and determinism inference.
	<p>

	<li> Mercury supports higher-order programming,
	with closures, currying, and lambda expressions.
	<p>

	<li> Mercury is very efficient (in comparison with existing logic
	programming languages). Strong types, modes, and determinism
	provide the compiler with the information it needs to generate
	very efficient code.
</ul>

<p>
The Mercury compiler is written in Mercury itself. It was bootstrapped
using NU-Prolog and SICStus Prolog. This was possible because after
stripping away the declarations of a Mercury program, the syntax of the
remaining part of the program is mostly compatible with Prolog syntax.
<p>
The Mercury compiler compiles Mercury programs to C, which it uses as a
portable assembler. The system can exploit some GNU C extensions to the
C language, if they are available: the ability to declare global
register variables, the ability to take the addresses of labels, and
the ability to use inline assembler. Using these extensions, it
generates code that is significantly better than all previous Prolog
systems known to us. However, the system does not need these
extensions, and will work in their absence.
