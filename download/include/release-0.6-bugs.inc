<h2>Release 0.6 - Known Problems</h2>

The following is collected email of reported problems with release
0.6 of the Mercury distribution. Included, where possible, are
patches.

<p>
<hr>
<p>
Subject: bug with integer multiplication and division
<br>
Date: August 9
<p>
The reverse modes of integer multiplication and division that
were introduced in 0.6 were broken.  As a result, the (in // in = in)
and (in * in = in) implied modes are also broken.  This is a very
nasty bug; it causes the system to give the wrong answer
for simple goals such as `2 * 2 = 5', which should fail, but
instead succeeds.
<p>
The work-around is to comment out or delete all the second and
subsequent modes of multiplication and division in library/int.m, e.g.
by applying this <a href = "patches/patch-0.6-reverse_arith">patch</a>.
<p>
If you have Mercury 0.6 already installed, or you want to install
a binary distribution, then you will need to fix the file `int.int'
in the PREFIX/lib/mercury/ints directory, where PREFIX is
normally /usr/local/mercury-0.6.  The fix is the same -- removing
the declarations of the buggy modes.  Here's a 
<a href = "patches/patch-0.6-reverse_arith_int">patch</a>.
<p>
<hr>
<p>
Subject: bug report - Inf and NaN
<br>
Date: Wed, 4 Oct 1995 02:48:19 +1000 (EST)
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
Subject: bug with no_tag tags and partially instantiated data structures
<br>
Date: Fri, 19 Apr 1996 19:47:18 +1000 (EST)
<p>
<pre>
> :- module bug.
> :- interface.
> :- type foo ---> foo(int).
> :- pred bug(foo::out) is det.
> :- implementation.
> bug(Y) :-
> 	Y = foo(_),
> 	Z = 42,
> 	Y = foo(Z).
</pre>
<p>
This gives the error "code_exprn__cache_exprn: existing definition of var".
<p>
Status: this bug been fixed in our latest development sources.
A patch is not available; please wait for the next release.
<p>
<hr>
<p>
Subject: problem with lookup_switch
<br>
Date: Sun, 5 May 1996 16:00:17 +1000 (EST)
<p>

I think there's a bug in lookup_switch.  What happens if you try to
cross-compile for a 64 bit architecture on a 32 bit machine?  I think
it tries to compute the 64-bit bitmap table entries using 32-bit ints,
which overflow.

<p>
Status: this bug been fixed in our latest development sources.
A patch is not available; please wait for the next release.
<p>
<hr>
<p>
Subject: map__lookup failed in profiler
<br>
Date: Tue, 7 May 1996 11:58:08 +1000 (EST)
<p>
When profiling programs that have been compiled on the Alpha using
shared libraries, the profiler will abort with a "Software Error:
map__lookup failed" message.  The work-around is to link with
`--static'.

<p>
<hr>
<p>
Subject: nit in error msg
<br>
Date: Thu, 16 May 1996 10:25:42 +1000 (EST)
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
Subject: obscure bug with identical function and constructor
<br>
Date: Sat, 25 May 1996 19:24:12 +1000 (EST)
<p>
This test case shows up an obscure bug in the compiler.
The compiler reports spurious mode errors in the compiler-generated
unification/compare/index predicates.
It's not quite clear whether or not this should be legal,
but the compiler ought to at least report a better error message.
If you write obfuscated code like this, you really deserve
what you get, but I guess we should fix the bug someday anyway...
<p>
<pre>
:- module nasty_func_test.
:- type foo ---> f(int) ; g.

:- func f(int) = foo.
f(_) = g.
</pre>

<p>
Status: this bug been fixed in our latest development sources.
A patch is not available; please wait for the next release.
<p>
<hr>
<p>
Subject: missed mode error
<br>
Date: Tue, 28 May 1996 02:27:34 +1000 (EST)
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
Date: Wed, 12 Jun 1996 15:45:59 +1000
<p>
On the alpha, if the Mercury runtime catches a signal, it
sometimes prints out the wrong value for the PC (program counter).

<p>
Status: is this bug report really correct?
<p>
<hr>
<p>
Subject: inference bug
<br>
Date: Mon, 24 Jun 1996 15:48:12 +1000 (EST)
<p>
The compiler sometimes aborts with a map_lookup failed
after mode inference finds some mode errors.

Status: this bug been fixed in our latest development sources.
A patch is not available; please wait for the next release.
<p>
<hr>
<p>
Subject: relation.m
<br>
Date: Mon, 29 Jul 1996 16:34:46 +1000 (EST)
<p>
relation__atsort does not correctly compute the topological sort for
disconnected cliques.  These cliques do not appear in the output list.

<p>
Status: this bug been fixed in our latest development sources.
A patch is not available; please wait for the next release.
<p>
<hr>
<p>
Subject: cc_nondet and cc_multi disjunctions
<br>
Date: Tue, 30 Jul 1996 15:43:16 +1000 (EST)
<p>
The code generator aborts with "Software Error: map__lookup failed"
when compiling certain code involving disjunctions with output
variables that occur in single-solution contexts, e.g.
<p>
<pre>
:- pred main(io__state::di, io__state::uo) is cc_multi.

main --> io__read_line(Res),
	( { Res = ok(['y']) }, io__write_string("Yes\n")
	; { Res = ok(['n']) }, io__write_string("No\n")
	; io__write_string("Huh?\n")
	).
</pre>

<p>
Status: this bug been fixed in our latest development sources.
A patch is not available; please wait for the next release.
