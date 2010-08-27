<h2>The Mercury deep profiler</h2>

<h3>Objective</h3>

The old Mercury profiler, mprof,
was a straightforward clone of the standard Unix profiling tool, gprof.
However, while gprof is quite useful in profiling C programs,
we found the usefulness of mprof in profiling Mercury programs
to be severely limited.
The main reason is that 
gprof and mprof assume that all calls to a function or predicate
have roughly the same cost.
This is usually close enough to the truth in C programs
for the output of gprof to be useful.
In Mercury, it is usually very far from truth,
because Mercury programs make much greater use of polymorphism
than C programs do.

<p>

For example, the most expensive predicates in the Mercury compiler are usually
the predicates for searching 2-3-4 trees and for inserting into 2-3-4 trees.
However, these predicates are called (indirectly)
from many hundreds of places in the Mercury compiler,
some of which handle bigger trees than others.

<p>

We designed the deep profiler specifically to meet the needs
of programs written in programming languages such as Mercury,
programs whose characteristics include

<ul>
<li>
frequent use of recursion, including mutual recursion;
<li>
frequent use of polymorphism (in Mercury's case, parametric polymorphism),
including nested polymorphism
(where one builds polymorphic functions/predicates
from polymorphic building blocks)
and polymorphism within callers
(where a function/predicate calls another function/predicate
from two or more call sites
that have different purposes and different performance characteristics);
<li>
frequent use of higher order constructs
(calls through higher order variables, and method calls);
<li>
nested use of higher order constructs
(where a function/predicate can make a higher order call
that directly or indirectly results in a call to itself);
<li>
use of a bidirectional foreign-language interface.
</ul>

The key to our solution of these problems is to
associate with each profiling measurement a very detailed context:
essentially a representation of the entire chain
of the ancestor functions or predicates and their call sites
at the time of the measurement,
but compressing sequences of (mutually) recursive ancestor calls.
The main challenge was keeping the required overhead within bounds.
Deep profiling slows down programs by a factor between two and three,
with a factor of 2.4 being reasonably typical.
Since this is only slightly higher than the overheads of profiling techniques
that yield significantly less detailed and less accurate data,
we believe we succeeded.

<h3>Architecture</h3>

Like most profilers, the Mercury deep profiler works
by instrumenting the program to be profiled,
having the instrumented program record its profiling data in a file,
and postprocessing the contents of this file.

<p>

You can ask for a program to be compiled with deep profiling instrumentation
by using the `--deep-profiling' option to `mmc',
or by including `GRADEFLAGS = --deep-profiling' in your `Mmakefile'.
However, please note that
deep profiling is not compatible with the old Mercury profiling grades,
and it is not (yet) implemented for grades (such as hlc grades)
that use the compiler's MLDS back end.

<p>

Programs compiled with deep profiling can generate large amounts of data,
since deep profiling yields very detailed information.
We have therefore implemented the postprocessing program
as a CGI-based web service.
Its input is a stream of requests,
with each request specifying a data file,
the part the user wants to view,
and his or her preferences about the format of the display.
The server generates, for each request,
a web page containing the requested information,
which will typically contain links that generate other requests.

<h3>Demo</h3>

We have made some profiling data files available for you to explore.
Each of the links below will take you to pages
that are dynamically created by the deep profiling tool
from one of these data files.

<p>

<ul>
<li>
<a href =
"http://taura.csse.unimelb.edu.au/cgi-bin/mdprof_stable_cgi?/home/taura/zs/www_deep_profiler_demo/monte.data">monte</a>:
the profiled executable is a program that
calculates the volume of a 3D shape using Monte Carlo methods.
This program uses higher order constructs quite intensively.
<li>
<a href =
"http://taura.csse.unimelb.edu.au/cgi-bin/mdprof_stable_cgi?/home/taura/zs/www_deep_profiler_demo/icfp2000_par_snowgoon.data">icfp2000</a>:
the profiled executable is a ray tracer,
whose task on this run was to generate a picture of a snowman.
<li>
<a href =
"http://taura.csse.unimelb.edu.au/cgi-bin/mdprof_stable_cgi?/home/taura/zs/www_deep_profiler_demo/mparsegen_zinc.data">mparsegen</a>:
the profiled executable is a parser generator,
whose task on this run was to try and generate an LR(1) parser
for one version of the grammar of the Zinc constraint programming language.
<li>
<a href =
"http://taura.csse.unimelb.edu.au/cgi-bin/mdprof_stable_cgi?/home/taura/zs/www_deep_profiler_demo/mmc_eliza.data">mmc eliza.m</a>:
the profiled executable is the Mercury compiler,
and during the profiling run, it task was to compile eliza.m,
the Mercury implementation of the classic "AI" program,
which is available in the samples directory in the Mercury distribution.
This is an example of the compilation of a small program of about 650 lines.
<li>
<a href =
"http://taura.csse.unimelb.edu.au/cgi-bin/mdprof_stable_cgi?/home/taura/zs/www_deep_profiler_demo/mmc_frameopt_bottleneck.data">mmc mlds_to_java.m, with bottleneck</a>
and
<a href =
"http://taura.csse.unimelb.edu.au/cgi-bin/mdprof_stable_cgi?/home/taura/zs/www_deep_profiler_demo/mmc_no_frameopt_bottleneck.data">without bottleneck</a>.
For both of these profiles, the profiled executable is the Mercury compiler,
and its task is compiling one of its own modules,
mlds_to_java.m, which is about 5200 lines in size.
In the first profile, more than two thirds
of the execution time of the compiler is spent
in the application of just one optimization.
The second profile was taken after this bottleneck was fixed.
(The code of mlds_to_java.m has changed a bit in the meantime.)
</ul>

<h3>Availability</h3>

The Mercury deep profiler is available in the Mercury releases of the day.
