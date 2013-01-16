<h2>About Mercury<span class="submenutitle">/ overview </span></h2>

<p>
Even though logic programming languages are theoretically superior to
imperative programming languages such as C, C++, Pascal and Ada,
existing logic programming languages such as Prolog are not widely used
in industry for writing application programs.  The two main reasons for
this are
</p>

<ul class="indentlist">
<li>
Compilers for current logic programming languages detect many fewer
errors in programs than compilers for imperative programming languages
do.  Programmers therefore have to find all the errors themselves,
usually with minimal debugging support.  This significantly reduces
productivity.</li>
<br/>
<li>
Implementations of logic programming languages are significantly slower
than the implementations of imperative languages such as C.  Therefore
the designers of applications where performance is important do not even
consider logic programming languages.
</li>
</ul>

<p>
We are developing a new kind of logic programming language that solves
both of these problems.  Our new language, Mercury, has strong type and
mode systems that detect a large percentage of program errors at compile
time.  The information provided by the type and mode systems then allows
us to significantly increase the efficiency of the implementation.
Meanwhile, unlike Prolog, Mercury retains all the desirable properties
of logic programming languages.  For example, the absence of side
effects in Mercury by itself prevents large classes of errors that
plague programs written in imperative languages.  It also allows us to
transform and optimize Mercury programs in ways that are emphatically
not possible with programs written in imperative languages or in Prolog.
For example, it is straightforward to integrate intelligent backtracking
into Mercury, even though researchers have given up on doing the same
for Prolog.
</p>


<div class="quote" style="max-width: 450px; min-width: 250px;float: right; margin: 40px 10px 40px 60px; border: 1px solid white;" align="left">
<h2 style="font-size: 24px;color: #9e005d; font-style: italic;">
“ Mercury has strong type and mode systems that detect a large percentage of program errors at compile time. 
</h2>
</div>


<p>
We are writing the Mercury compiler in Mercury itself.  We used
NU-Prolog and SICStus Prolog for boot-strapping until the compiler was
able to compile itself.  The compiler's type, mode and determinacy
checkers have together prevented several hundred bugs in the compiler
itself.  Traditional Prolog systems cannot make such checks.  Therefore
had we been programming only in Prolog, many of these bugs would not
have been detected, and locating the rest would have required manual
tracing of the compiler's execution, taking several hours per bug.  As
it is, the Mercury compiler pinpointed these bugs automatically, and due
to the help of the error messages, we have found that most bugs were
quite easy to fix.
</p>
<p>
Our experience strongly supports our initial conjecture that Mercury is
a comfortable language to program in, and that it is much easier to
produce reliable programs in Mercury than in Prolog.  The amount of
functionality we have implemented so far also strongly suggests that it
is easier to produce reliable programs in Mercury than in imperative
languages such as C, C++, Pascal or Ada.
</p>
<p>
Our extensive benchmarking has shown our implementation to be almost
twice as fast as the fastest existing logic programming system, Aquarius
Prolog, about five times as fast as SICStus Prolog's native mode
compiler, about ten times as fast as Quintus Prolog, and 20 to 36 times
as fast as other Prolog implementations using bytecode interpreters.
</p>
<p>
Mercury does not sacrifice portability for speed.  While previous fast
logic programming systems generate native code and can thus run on only
few types of system, we generate C code that can be compiled on almost
all software and hardware platforms.
</p>
<p>
Aquarius and other high-performance Prolog systems base their
optimizations on information gathered by global analysis.  These
analyses must make approximations to keep analysis times reasonable.
Large programs tend to require more approximations, which makes
optimization less effective.  Despite using only predicate-level and
module-level analyses, Mercury never makes approximations, and thus
retains its speed even for the largest programs.
</p>
<p>
We designed the Mercury execution algorithm in October 1993.
We started working on a Mercury compiler in December 1993.
Semantic analysis started working around May 1994.
We started generating code around August 1994;
we started work on optimizations very soon after.
The compiler successfully compiled itself on 24 February 1995.
The first public beta release of the system was version 0.3 on 18 July 1995.
The profiler was introduced in Version 0.4 on 15 September 1995.
Checking of uniqueness information and the C language interface
were introduced in Version 0.5 on 15 February 1996.
Functional syntax and type and mode inference
were introduced in Version 0.6 on 2 August 1996.
Version 0.7, released on 15 August 1997,
introduced generic I/O predicates and
was the first to provide cross-module optimization.
</p>
