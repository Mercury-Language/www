<h2>Release 0.12.2 - Known Problems</h2>

Bug reports should be sent to mercury-bugs@cs.mu.oz.au.
If you're reporting more than one bug, please use separate emails
for each bug.  Please include all the relevant information,
including which version of Mercury you're using, what operating
system you're using, and a complete source file that
demonstrates the problem.  (If it's something that only shows
up in multi-module programs, send a shar archive or uuencoded
tar archive containing your source files.)  Please try to ensure
that bug reports contain all the information that we need to be
able to reproduce the problem.  Make sure that all bug reports are
fully self-contained.

<p>

Below is a list of the known outstanding bugs.
We'll try to record any other bugs that are discovered
on our WWW page <http://www.cs.mu.oz.au/mercury>.
In addition to the bugs mentioned here, some bugs related
to the implementation of particular languages features
(existential types, nested modules, tabling)
are also mentioned in the language reference manual, and some
problems related to using Mercury on specific operating systems
are described in the README.* files.
See also the <a href="limitations.html">limitations</a> of the current release.

<p>

Note: please do not be alarmed by the fact that this software has some bugs.
ALL useful software has bugs.  During the development of the Mercury
implementation we have found bugs in gcc, as, ld, the dynamic loader,
and even the OS kernel.  We hope that by listing the known outstanding bugs
here we are doing our users a service.  It would be disappointing if
anyone were to infer the wrong thing from it.

<hr>

<b>Subject: bug report - Inf and NaN  <br>
Date: 4 Oct 1995</b>
<p>
The following module causes an "undefined variable Inf" error in the
generated C code, because 1E400 == Infinity, which gets printed as `Inf'.
<p>
<pre>
:- module hello.
:- interface.
:- import_module io.

:- pred main(io::di, io::uo) is det.

:- implementation.

main(!IO) :-
	io.write_float(1E400, !IO).
</pre>

<hr>

<b>Subject: bug with PC values on Alpha <br>
Date: 12 Jun 1996</b>
<p>
On the alpha, if the Mercury runtime catches a signal, it
sometimes prints out the wrong value for the PC.

<hr>

<b>Subject: inter-module optimization and abstract 
exported equivalence types. <br>
Date: 19 February 1998</b>
<p>
In some cases the compiler reports spurious ambiguity errors when compiling
with `--intermodule-optimization'. This is due to the definition of abstract
exported equivalence types being made visible by inter-module optimization.
In this example, with `--intermodule-optimization' the compiler sees the
declaration `:- type var == int' from term.m and then cannot determine whether
`Elem' has type `int' or `pair(int)'.
The work-around is to add an explicit type qualification.
<p>
<pre>
:- module foo.
:- interface.
:- import_module list, term.
:- pred test(list(var)::in) is det.
:- implementation.
:- import_module int, std_util.

test(Args0) :-
	MakeIndex =
		(pred(Elem0::in, Elem::out, Index0::in, Index::out) is det :-
			Elem = Elem0 - Index0,
			Index is Index0 + 1
	),
	list.map_foldl(MakeIndex, Args0, _, 0, _).
</pre>

<hr>

<b>Subject: GCC internal error <br>
Date: 26 June 2001</b>

<pre>
    random.c: In function `random_module6':
    random.c:412: fixed or forbidden register 3 (bx) was spilled for class
    GENERAL_REGS.
    This may be due to a compiler bug or to impossible asm
    statements or clauses.

    mercury_trace_alias.c:98: Unable to find a register to spill in class
    `SIREG'.
</pre>
This problem occurs with several different combinations of GCC version
and C source file.
<p>
This seems to be a bug in GCC's handling of global register variables.
The bug seems to be finally fixed in GCC 3.3 or 3.4.
<p>
If this problem occurs when compiling the source distribution, install
from the binary distribution instead.
<p>   
If a similar problem occurs when compiling your program, there are a
few possible work-arounds:
<ul>
<li>Use a lower level of C compiler optimization for the affected C
  files (add `CFLAGS-foo = -O1' or `CFLAGS-foo = -O0' to your
  Mmakefile for each affected C file).
<li>Use a high-level C code compilation grade (add `GRADE = hlc.gc' to
  your Mmakefile). These grades do not use the GCC extensions which
  trigger this problem. Unfortunately, mdb does not yet work with
  the high-level C back-end.
<li>Use `asm_jump.*' compilation grades instead of `asm_fast.*'
  grades. Note that `asm_jump.*' grades are not usually installed.
<li>Try a newer version of GCC.  Avoid GCC version 2.96 (distributed by
  Red Hat) and 3.0.
</ul>

<hr>

<b>Subject: NaN behaviour <br>
Date: 21 Oct 2002</b>
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
A lesser problem is that `<' doesn't induce a total order on floats.

<hr>

<b>Subject: mode analysis bug <br>
Date: 1 December 2004</b>
<p>
The Mercury compiler sometimes aborts with the following error message:
<pre>
  	Uncaught Mercury exception:
  	Software Error: inappropriate determinism inside a negation
</pre>
<p>
This bug is due to a limitation in the mode checker.  It has only
been reported as occurring when inlining is enabled.  A workaround
is to disable inlining for any affected files.  This can be done
by using the option `--no-inlining'.  

<hr>

<b>Subject: higher-order specialisation bug <br>
Date: 2 May 2005</b>
<p>
The Mercury compiler sometimes aborts at -O3 and higher with an error
message similar to the following:
<pre>
	 Uncaught Mercury exception:
	 Software Error: map__lookup: key not found
		Key Type: term.var(parse_tree.prog_data.prog_var_type)
 		Key Value: var(20)
 		Value Type: ll_backend.var_locn.var_state
</pre>
<p>
This is due to a bug involving higher-order specialisation, type
specialisation and typeclasses.  A workaround for this bug is to disable
higher-order specialisation for any affected files.  This can be done
by using the option `--no-higher-order'.

<hr>

<b>Subject: segmentation fault in deep profiler<br>
Date: unknown</b>
<p>
The deep profiler may cause a segmentation fault when profiling large
programs.  There is currently no known workaround for this problem.

<hr>

<b>Subject: parametric modes and intermodule-optimization<br>
Date: unknown</b>
<p>
Attempting to use parametric modes may cause the compiler to abort when
compiling with intermodule-optimization enabled.  

<hr>

<b>Subject: function symbol overloading<br>
Date: 14 Nov 2005</b>
<p>
The compiler sometimes reports a mode error for an introduced TypeClassInfo
variable.  This can occur if there is an overloaded function symbol which is
defined as a data constructor and also as a function with argument and return
types which match those of the data constructor.

The problem is that the typechecker can sometimes resolve the ambiguity
if there is an unsatisfiable typeclass constraint on the function, but in
a later stage the same resolution is not possible.  This can lead to the
wrong definition being selected in the later stage.

A workaround is to module qualify all uses of the data constructor where
the function definition is also visible.

<hr>
