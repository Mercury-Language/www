<h2>Release 0.11 - Known Problems</h2>

The following is collected email of reported problems with release
0.11 of the Mercury distribution.
Included, where possible, are patches or work-arounds.
There is also a
<a href="http://sourceforge.net/bugs/?group_id=1126">Mercury bugs page</a>
on SourceForge.
<p>
In addition to the bugs mentioned here, some bugs related
to the implementation of particular languages features
(nested modules, tabling)
are also mentioned in the language reference manual, and some
problems related to using Mercury on specific operating systems
are described in the README.* files in the distribution.
See also the LIMITATIONS file.
<p>
Note: please do not be alarmed by the fact that this software has some bugs.
ALL useful software has bugs.  During the development of the Mercury
implementation we have found bugs in gcc, as, ld, the dynamic loader,
and even the OS kernel.  We hope that by listing the known outstanding bugs
here we are doing our users a service.  It would be disappointing if
anyone were to infer the wrong thing from it.
<p>
<hr>
<p>
Subject: GCC internal error
<br>
Date: Tue, 26 June 2001
<p>
<pre>
random.c: In function `random_module6':
random.c:412: fixed or forbidden register 3 (bx) was spilled for class
GENERAL_REGS.
This may be due to a compiler bug or to impossible asm
statements or clauses.
</pre>
<p>
This problem occurs with several different combinations of
GCC version and C source file.
<p>
This seems to be a bug in GCC's handling of global register variables.
The GCC maintainers have shown no interest in fixing it. They appear
to consider global register variables to be a deprecated feature,
even though it isn't documented as such in the GCC manual.
<p>
If this problem occurs when compiling the source distribution, install
from the binary distribution instead.
<p>
If a similar problem occurs when compiling your program, there are a
few possible work-arounds:
<ul>
<li>
	Use a lower level of C compiler optimization for the affected
	C files (add `CFLAGS-foo = -O1' or `CFLAGS-foo = -O0' to your
	Mmakefile for each affected C file).
<li>
	Use a high-level C code compilation grade (add `GRADE = hlc.gc'
	to your Mmakefile). These grades do not use the GCC extensions
	which trigger this problem. Unfortunately, mdb does not yet work
	with the high-level C back-end.
<li>
	Use `asm_jump.*' compilation grades instead of `asm_fast.*' grades.
	Note that `asm_jump.*' grades are not usually installed.
<li>
	Try a newer version of GCC. Avoid GCC version 2.96 (distributed by
	Red Hat) and any other unofficial releases of GCC.
<ul>
<p>
<hr>
<p>
Subject: bug report - Inf and NaN
<br>
Date: Wed, 4 Oct 1995
<p>
The following module causes an "undefined variable Inf" error in the
generated C code, because 1E400 == Infinity, which gets printed as `Inf'.
<p>
<pre>
:- module hello.
:- interface.
:- import_module io.

:- pred main(io__state::di, io__state::uo) is det.

:- implementation.

main -->
	io__write_float(1E400),
	io__write_string("\n").
</pre>
<p>
<hr>
<p>
Subject: NaN behaviour
<br>
Date: Mon, 21 Oct 2002
<p>
The mercury standard library tends to avoid producing NaN (e.g. throwing
an exception in many places where libc would return NaN), but it's still
possible from arithmetic functions (e.g. 0.0*Inf, Inf - Inf, Inf + -Inf,
Inf / Inf), sin,cos,tan when passed infinity, and perhaps other things (I
haven't done a full search).  Presumably it can also arise from using the
foreign language interface.
<p>
When NaN does arise, we have a problem that `=' (and unification) aren't
reflexive.  From a logical point of view, this is a fairly serious problem.
<p>
A lesser problem is that `&lt;' doesn't induce a total order on floats.
<p>
<hr>
<p>
Subject: nit in error msg
<br>
Date: Thu, 16 May 1996
<p>
Here's another small error in an error message.  If you comment out
the [] clause for the functions car/1 or cdr/1, you get this message:
<p>
<pre>
fntest.m:023: In `car(in) = out':
fntest.m:023:   Error: determinism declaration not satisfied.
fntest.m:023:   Declared `det', inferred `semidet'.
fntest.m:023:   in argument 1 of clause head:
fntest.m:023:   unification of `HeadVar__1' and `[X | V_4]' can fail.
</pre>
<p>
It says Declared `det', inferred `semidet', but I never declared it at
all.  It's a bit misleading.  Certainly not a major problem, and the
later part of the message makes it quite clear what the problem is,
but I thought I'd point it out to you before I forgot it.

<p>
<hr>
<p>
Subject: missed mode error
<br>
Date: Tue, 28 May 1996
<p>
Another one for the bug report file:
<p>
The goal `some [X, Y] X \= Y' should be a mode error,
but the current mode checker doesn't report an error.
Instead, the compiler goes on to generate code which gives
the wrong answer.  For example, the following program prints out `no'.
The same problem also occurs with `some [X, Y] (X = Y -> fail ; true)'.
<p>
<pre>
:- module bug.
:- interface.
:- import_module io.

:- pred main(io__state::di, io__state::uo) is det.

:- implementation.

main --> 
	( { p } -> io__write_string("yes\n") ; io__write_string("no\n") ).

:- pred p is semidet.
p :-
	some [X, Y] X \= Y.
</pre>
<p>
The bug occurs only when the variables being unified inside a negated
context are not live, i.e. when it is the last occurrence of those variables.

<p>
<hr>
<p>
Subject: bug with PC values on Alpha
<br>
Date: Wed, 12 Jun 1996
<p>
On the alpha, if the Mercury runtime catches a signal, it
sometimes prints out the wrong value for the PC (program counter).
<p>
<hr>
Subject: inter-module optimization and abstract exported equivalence types.
<br>
Date: Thu, 19 Feb 1998
<p>
In some cases the compiler reports spurious ambiguity errors when compiling
with `--intermodule-optimization'. This is due to the definition of abstract
exported equivalence types being made visible by inter-module optimization.
In this example, with `--intermodule-optimization' the compiler sees the
declaration `:- type var == int' from term.m and then cannot determine whether
`Elem' has type `int' or `pair(int)'.
The work-around is to add an explicit type qualification.
<pre>
:- module foo.
:- interface.
:- import_module list, term.
:- pred test(list(var)::in) is det.
:- implementation.
:- import_module int, std_util.

test(Args0) :-
	MakeIndex =
		lambda([Elem0::in, Elem::out, Index0::in, Index::out] is det, (
			Elem = Elem0 - Index0,
			Index is Index0 + 1
		)),
	list__map_foldl(MakeIndex, Args0, _, 0, _).
</pre>
<p>
<hr>
<p>
Subject: `:- pragma does_not_terminate'
<br>
Date: Wed, 9 Jun 1999
<p>
`:- pragma does_not_terminate' declarations do not work.
The compiler's termination analysis seems to ignore them.
<p>
<hr>
<p>
Date: Wed, 1 Dec 1999
<br>
Subject: compiler infinite loop for cyclic type classes
<p>
According to the language reference manual:
<p>
<pre>
|  Typeclass constraints on type class declarations gives rise to a
|  superclass relation.  This relation must be acyclic.  That is, it is an
|  error if a type class is its own (direct or indirect) superclass.
</pre>
<p>
But if you try to compile modules containing cyclic typeclasses,
the compiler goes into an infinite loop and eventually gets a
stack overflow, rather than reporting a proper error message.
<p>
<hr>
