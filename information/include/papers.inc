<h2>Papers and Presentations</h2>

The Mercury team have written quite a few papers about the Mercury
programming language, its implementation techniques, design, theoretical
basis and other topics. In addition, we have written several papers
on <a href = "papers.html#related">related</a> topics.
Almost all are available here as postscript
files, compressed using gzip.
<p>
Below the papers, the notes from a number of <a
href="papers.html#presentations">presentations</a> given on
Mercury, at a variety of levels, are also available.

<h2>Papers on Mercury</h2>

<ul>
<li>
<strong>
Towards memory reuse for Mercury
</strong>
<br>
Nancy Mazur, Gerda Janssens and Maurice Bruynooghe
<br>
<em>
Proceedings of the International Workshop on Implementation of
Declarative Languages
</em>,
Paris, France, October 1999
<a href="papers/liveness.ps.gz">Available here (61K)</a>.
<p>
While Mercury allows destructive input/unique output modes which direct
the compiler to reuse memory, use of these modes is very cumbersome for
the programmer. Moreover it does not fit the declarative programming
paradigm where the programmer doesn't have to worry about the details of
memory management.

The paper briefly reports on some experiments with a prototype analyser
which aims at detecting memory available for reuse. The prototype is
based on the live-structure analysis developed by us for logic programs
extended with declarations.

Yet the major contribution of this paper consists of the development of
the principles of a module based analysis which are essential for the
analysis of large Mercury programs with code distributed over many
modules.
<p>

<li>
<strong>
Binding-Time Analysis for Mercury
</strong>
<br>
Wim Vanhoof and Maurice Bruynooghe
<br>
<em>
Proceedings of the Sixteenth International Conference on Logic Programming
</em>,
Las Cruces, New Mexico, November 1999, pages 500-514
<a href="papers/bta.ps.gz">Available here (76K)</a>.
<p>
In this paper, we describe a binding-time analysis (BTA) for a
statically typed and strongly moded pure logic programming language, in
casu Mercury.  Binding-time analysis is the key concept in achieving
off-line program specialisation: the analysis starts from a description
of the program's input available for specialisation, and propagates this
information throughout the program, deriving directives for when and how
to perform specialisation.  Exploiting the possibilities offered by
Mercury's strong type and mode system, we present a completely automatic
BTA dealing with partially static binding-times.
<p>

<li>
<strong>
The implementation technology of the Mercury debugger
</strong>
<br>
Zoltan Somogyi and Fergus Henderson.
<br>
<em>
Proceedings of the Tenth Workshop on Logic Programming Environments
</em>,
Las Cruces, New Mexico, November 1999, pages 35-49.
<a href="papers/debugger_wlpe99.ps.gz">Available here (66K)</a>.
<p>

Every programming language needs a debugger.
Mercury now has three debuggers:
a simple procedural debugger
similar to the tracing systems of Prolog implementations,
a prototype declarative debugger,
and a debugger based on the idea of automatic trace analysis.
In this paper, we present the shared infrastructure
that underlies the three debuggers,
and describe the implementation of the procedural debugger.
We give our reasons for each of our main design decisions,
and show how several of these decisions are rooted in our experience
with the debugging of large programs working with large data structures.
<p>

<li>
<strong>
Making Mercury programs tail recursive (extended abstract)
</strong>
<br>
Peter Ross, David Overton and Zoltan Somogyi.
<br>
<em>
Proceedings of the Ninth International Workshop on Logic-based Program
Synthesis and Transformation
</em>,
Venice, Italy, September 1999, pages 107-118.
<a href="papers/tail_lopstr.ps.gz">Available here (62K)</a>.
<p>

Recursive calls are often very close to being the last action in a clause.
Frequently, however, the recursive call computes a value
which must be put into a memory cell or used in a simple computation.
Therefore the generated code will consume stack space for each iteration,
and will need to execute
stack frame setup and teardown code in every iteration.
This paper presents two optimisations that in many common cases
can transform such code into a tail recursive form
by moving code from after the recursive call to before the recursive call.
These optimisations have been implemented in the Melbourne Mercury compiler.
<p>
The first optimisation is a pure source to source transformation.
It looks for recursive calls followed by associative computations
which depend on the outputs of the recursive call.
The optimisation then creates a specialised version of the predicate
in which the associative computation is done before the recursive call.
This specialised predicate will have
extra arguments that act as accumulators:
they hold the cumulative results of the associative computations so far.
<p>
The second optimisation looks for
recursive calls followed by construction unifications
that put some of the results of that call into memory cells,
and moves those construction unifications before the call.
This required extending the Mercury mode system
to allow a restricted form of partially instantiated data structures
and to record aliases,
since in the transformed program the cell is not ground when it is created,
but will become ground when the recursive call returns.
To allow this to happen, we also had to extend
the parameter passing conventions of the Mercury abstract machine
to allow predicates to return selected output arguments in memory,
not in registers.
<p>
Some predicates contain both
associative computations and construction unifications
after the recursive call.
To allow us to make such predicates tail recursive,
the accumulator introduction optimisation will perform its transformation
even when the recursive call is followed by construction unifications
as well as associative computations,
knowing that the other optimisation
will move the construction unifications before the call.
<p>

<li>
<strong>
Run time type information in Mercury
</strong>
<br>
Tyson Dowd, Zoltan Somogyi, Fergus Henderson, Thomas Conway and David Jeffery.
<br>
<em>
Proceedings of the International Conference
on the Principles and Practice of Declarative Programming
</em>,
Paris, France, September/October 1999,
Lecture Notes in Computer Science 1702, 
Springer Verlag, 
Pages 224-243,
&copy; 
<a href="http://www.springer.de/comp/lncs/index.html">Springer-Verlag</a>.
<a href="papers/rtti_ppdp.ps.gz">Available here (75K)</a>.
<p>

The logic/functional language Mercury
uses a strong, mostly static type system
based on polymorphic many-sorted logic.
For efficiency,
the Mercury compiler uses type specific representations of terms,
and implements polymorphic operations such as unifications
via generic code invoked with descriptions of the actual types of the operands.
These descriptions, which consist of automatically generated data and code,
are the main components of the Mercury runtime type information (RTTI) system.
We have used this system to implement several extensions of the Mercury system,
including an escape mechanism from static type checking,
generic input and output facilities, a debugger, and automatic memoization,
and we are in the process of using it
for an accurate, native garbage collector.
We give detailed information
on the implementation and uses of the Mercury RTTI system
as well as measurements of the space costs of the system.
<p>
The raw data on which the evaluation is based
is available as a <a href = "papers/rtti_data.tar.gz">70 Kb tar file</a>
<p>

<li>
<strong>
Optimization of Mercury programs
</strong>
<br>
Simon Taylor.
<br>
<em>
Honours report.
</em>
Department of Computer Science, University of Melbourne, November 1998.
<a href = "papers/stayl_hons.ps.gz">
Available here (120K).
</a>
<p>

This paper describes the implementation of several of the high-level
optimization passes of the Mercury compiler, including deforestation,
type specialization, constraint propagation and structure reuse.
<p>

<li>
<strong>
MCORBA: A CORBA Binding for Mercury
</strong>
<br>
David Jeffery, Tyson Dowd and Zoltan Somogyi.
<br>
In <em>
Proceedings of the First International Workshop
on Practical Aspects of Declarative Languages
</em>,
San Antonio, Texas,
January 1999, 
Lecture Notes in Computer Science 1551, 
Springer Verlag, 
Pages 211-227,
&copy; 
<a href="http://www.springer.de/comp/lncs/index.html">Springer-Verlag</a>.
<a href="papers/mcorba_padl99.ps.gz">Available here (65K)</a>.
<p>

MCORBA is a binding to the CORBA distributed object framework
for the purely declarative logic/functional language Mercury.
The binding preserves the referential transparency of the language,
and has several advantages
over similar bindings for other strongly typed declarative languages.
As far as we know, it is the first such binding to be bidirectional;
it allows a Mercury program both to operate upon CORBA components
and to provide services to other CORBA components.
Whereas the Haskell binding for COM
maps COM interfaces onto Haskell types,
MCORBA maps CORBA interfaces onto Mercury type classes.
Our approach simplifies the mapping,
makes the implementation of CORBA's interface inheritance straightforward,
and makes it trivial for programmers to provide
several different implementations of the same interface.
It uses existential types to model the operation
of asking CORBA for an object that satisfies a given interface
but whose representation is unknown.
<p>

<li>
<strong>
Type classes in Mercury.
</strong>
<br>
David Jeffery, Fergus Henderson and Zoltan Somogyi.
<br>
<em>
Technical Report 98/13,
</em>
Department of Computer Science, University of Melbourne,
Melbourne, Australia, September 1998, 22 pages.
<a href = "papers/mu_98_13.ps.gz">
Available here (82K).
</a>
<p>

In this paper, we explain how we have extended Mercury's type system 
to include support for type classes.
We give a formal semantics for this extension to our type system,
adapting the typing rules used in functional languages
to the differing demands of logic programming languages.
We show that type classes integrate very nicely
with Mercury's mode, uniqueness and determinism systems,
and describe how our implementation works.
<p>

<li>
<strong>
Termination analysis for Mercury.
</strong>
<br>
Chris Speirs, Zoltan Somogyi and Harald Sondergaard.
<br>
<em>
Proceedings of the Fourth Static Analysis Symposium
</em>,
Paris, France, September 1997, pages 157-171.
<a href = "papers/sas97.ps.gz">available here (75K)</a>.
A longer version of the paper appeared as
Technical Report 97/9,
Department of Computer Science, University of Melbourne,
Melbourne, Australia, July 1997, 25 pages.
it is <a href = "papers/mu_97_09.ps.gz">available here (99K)</a>.
<p>

This paper presents the algorithms of the Mercury termination analyser,
discusses how real-world aspects of the language
such as modules, higher-order features, foreign language code,
and declarative input/output can be handled,
and evaluates the performance of the analyser
both on a set of standard test programs and on the Mercury compiler itself.
<p>
The raw data on which the evaluation is based is available
as a <a href = "papers/termination_data.tar.gz">5.2 Mb tar file</a>.
<p>

<li>
<strong>
Status of the Mercury system.
</strong>
<br>
Zoltan Somogyi, Fergus Henderson, Thomas Conway, Andrew Bromage,
Tyson Dowd, David Jeffery, Peter Ross, Peter Schachte and Simon Taylor.
<br>
<em>
Proceedings of the JICSLP '96 Workshop on Parallelism and
Implementation Technology for (Constraint) Logic Programming Languages,
</em>
Bonn, Germany, September 1996, pages 207-218.
<a href = "papers/jicslpw.ps.gz">Available here (46K)</a>.
<p>

<li>
<strong>
The execution algorithm of Mercury:
an efficient purely declarative logic programming language.
</strong>
<br>
Zoltan Somogyi, Fergus Henderson and Thomas Conway.
<br>
<em>
Journal of Logic Programming,
</em>
volume 29, number 1-3, October-December 1996, pages 17-64.
<a href = "papers/jlp.ps.gz">Available here (138K)</a>.
<br>
Elsevier owns the copyright of this paper;
it is made available here by their permission.
<p>

This paper contains a brief overview of the Mercury language, and a
reasonably detailed overview of the implementation technology used in
the Mercury compiler.  It describes the abstract machine that the
compiler generates code for.  (Our other papers listed below go
into more detail on exactly how the code is generated, and on how
the abstract machine instructions are implemented as C or GNU C code.)
<p>
The raw data on which the evaluation is based
is available on our <a href = "./benchmarks.html">benchmarking page</a>.
<p>

<li>
<strong>
Determinism analysis in the Mercury compiler.
</strong>
<br>
Fergus Henderson, Zoltan Somogyi and Thomas Conway.
<br>
<em>
Proceedings of the Australian Computer Science Conference,
</em>
Melbourne, Australia, January 1996, pages 337-346.
<a href = "papers/acsc96.ps.gz">Available here (78K)</a>.
A longer version of the paper is
<a href = "papers/detism.ps.gz">available here (76K)</a>.
<p>

This paper discusses Mercury's determinism system in detail, including
the algorithms for switch detection, deep indexing, determinism
inference, and determinism checking.
<p>

<li>
<strong>
Code generation for Mercury.
</strong>
<br>
Thomas Conway, Fergus Henderson, and Zoltan Somogyi.
<br>
<em>
Proceedings of the 1995 International Symposium on Logic Programming,
</em>
Portland, Oregon, December 1995, pages 242-256.
<a href = "papers/code_gen_mit.ps.gz">Available here (68K)</a>.
<p>

This paper describes the structure of the Mercury compiler,
its calling conventions,
and the algorithms it uses in generating code.
These algorithms include lazy code generation
and a novel way of handling nested disjunctions.
<p>

<li>
<strong>
Compiling logic programs to C
using GNU C as a portable assembler
</strong>
<br>
Fergus Henderson, Zoltan Somogyi and Thomas Conway.
<br>
<em>
Proceedings of the ILPS '95 Postconference Workshop on
Sequential Implementation Technologies for Logic Programming Languages.
</em>
Portland, Oregon, December 1995.
<a href = "papers/mercury_to_c.ps.gz">Available here (65K)</a>.
<p>

This paper discusses the merits of using C, and in particular GNU C,
as an intermediate target language for the compilation of logic programs,
and describes the approach we have taken in the implementation of Mercury.
<p>

<li>
<strong>
Mercury: an efficient purely declarative logic programming language.
</strong>
<br>
Zoltan Somogyi, Fergus Henderson and Thomas Conway.
<br>
<em>
Proceedings of the Australian Computer Science Conference,
</em>
Glenelg, Australia, February 1995, pages 499-512.
<a href = "papers/acsc95.ps.gz">Available here (85K)</a>.
<p>

An overview paper.
<p>

<li>
<strong>
The implementation of Mercury:
an efficient purely declarative logic programming language.
</strong>
<br>
Zoltan Somogyi, Fergus Henderson and Thomas Conway.
<br>
<em>
Proceedings of the ILPS '94 Postconference Workshop on
Implementation Techniques for Logic Programming Languages,
</em>
Syracuse, New York, November 1994.
<a href = "papers/ilps94w.ps.gz">Available here (96K)</a>.
<p>

The first paper on Mercury. It is superseded by the paper
in the Journal of Logic Programming.
<p>

<li>
<strong>
Code generation for Mercury.
</strong>
<br>
Thomas Conway.
<br>
<em>
Honours report.
</em>
Department of Computer Science, University of Melbourne, November 1994.
<a href = "papers/conway_hons.ps.gz">Available here (188K)</a>.
<p>

This is the first paper on the code generator.
Warning: several aspects of the code generator have changed
since this paper was written.
Some of these are documented in the version in the ILPS 95 proceedings.

</ul>

<hr>

<h2><a name="related">Related Papers</a></h2>

This paper gives an introduction to automatic termination analysis.
It surveys termination analysis of logic programs and provides an
overview of the important concepts involved in automatic termination
analysis.  
<p>

<ul>
<li>
<strong>
Termination Analysis for Logic Programs
</strong>
<br>
Chris Speirs.
<br>
<em>
Technical Report 97/23,
</em>
Department of Computer Science, University of Melbourne, October 1997.
<a href = "papers/mu_97_23.ps.gz">
Available here (67K).
</a>
 
</ul>

<p>
This paper outlines the features that we believe to be important
in a modern logic programming language:
<p>

<ul>
<li>
<strong>
Logic programming for the real world.
</strong>
<br>
Zoltan Somogyi, Fergus Henderson, Thomas Conway and Richard O'Keefe.
<br>
<em>
Proceedings of the ILPS '95 Postconference Workshop on
Visions for the Future of Logic Programming,
</em>
Portland, Oregon, December 1995.
<a href = "papers/vision.ps.gz">
Available here (59K).
</a>
<p>

</ul>

The mode system and the uniqueness system of Mercury
are based on the following papers:
<p>

<ul>

<li>
<strong>
A system of precise modes for logic programs.
</strong>
<br>
Zoltan Somogyi.
<br>
<em>
Proceedings of the Fourth International Conference on Logic Programming,
</em>
Melbourne, Australia, May 1987, pages 769-787.
<a href = "http://www.cs.mu.oz.au/~zs/papers/iclp87.ps.gz">
Available here (40K).
</a>
<p>

<li>
<strong>
Strong modes can change the world!
</strong>
<br>
Fergus Henderson.
<br>
<em>
Honours Report.
</em>
Department of Computer Science, University of Melbourne, November 1992.
<a href = "http://www.cs.mu.oz.au/~fjh/papers/hons_thesis.ps.gz">
Available here (114K).
</a>
<p>

</ul>

The following paper describes the method used to express database 
transactions and updates that is used in the Mercury ODBC database
interface.
<!---------- The Aditi interface is not useful yet
--------------------------------------------------
The same kind of approach is also used in
the Mercury interface to the Aditi deductive
database system (see the "Aditi deductive database interface"
section in Mercury Language Reference Manual listed under 
"Implementation dependent pragmas" in the "Pragmas" chapter).
--------------------------------------------------
-------------------------------------------------->

<p>
<ul>

<li>
<strong>
Database transactions in a purely declarative logic programming language.
</strong>
<br>
David B. Kemp, Thomas Conway, Evan Harris, Fergus Henderson,
Kotagiri Ramamohanarao and Zoltan Somogyi.
<br>
<em>
Technical Report 96/45
</em>
Department of Computer Science, University of Melbourne, December 1996.
<a href = "http://www.cs.mu.OZ.AU/publications/tr_db/mu_96_45.ps.gz">
Available here (58K)
</a>
<a href = "http://www.cs.mu.OZ.AU/publications/tr_db/mu_96_45_cover.ps.gz">
with cover page.
</a>

</ul>

<!---------- The Aditi interface is not useful yet
--------------------------------------------------

The following paper is also relevant to the Aditi interface mentioned above.
It describes a source-to-source transformation implemented in the
Mercury compiler.

<li>
<strong>
Right-, left-, and multi-linear rule transformations that maintain
context information.
</strong>
<br>
David B. Kemp and Kotagiri Ramamohanarao and Zoltan Somogyi. 
<br>
<em>
Technical Report 90/2
</em>
Department of Computer Science, University of Melbourne, October 1997.
<a href = "papers/tr90-2.ps.gz">
Available here (48K).
</a>
Note that this paper incorrectly claims that
the context transformation can be applied to
mixed-linear predicates containing pseudo-left-linear rules
as well as other linear rules.  
It is corrected in David Kemp's thesis,
<a href = "http://www.cs.mu.oz.au/~kemp/papers/thesis.ps.gz">
available here (560K).
</a>

</ul>

--------------------------------------------------
-------------------------------------------------->
 
<hr>

<h2><a name="presentations">Presentations on Mercury<a></h2>

<ul>

<li>
<strong>
Termination analysis for Mercury.
</strong>
<br>
Chris Speirs, Zoltan Somogyi and Harald Sondergaard.
<br>
<em>
Talk presented at the Fourth Static Analysis Symposium.
</em>
Paris, France, September 1997.
<a href = "papers/sas_talk.ps.gz">
Available here (6K).
</a>
<p>

<li>
<strong>
Unification in Mercury.
</strong>
<br>
Zoltan Somogyi.
<br>
<em>
Invited talk presented at the Eighth Benelux Workshop on Logic Programming.
</em>
Louvain-la-Neuve, Belgium, September 1996.
<a href = "papers/unif.ps.gz">
Available here (12K).
</a>
<p>

<li>
<strong>
The design and implementation of Mercury.
</strong>
<br>
Zoltan Somogyi and Fergus Henderson.
<br>
<em>
Tutorial presented at the Joint International
Conference and Symposium on Logic Programming.
</em>
Bonn, Germany, September 1996.
<a href = "papers/jicslp_talk.ps.gz">
Available here (18K).
</a>
<p>

<li>
<strong>
Status of the Mercury system.
</strong>
<br>
Zoltan Somogyi, Fergus Henderson, Thomas Conway, Andrew Bromage,
Tyson Dowd, David Jeffery, Peter Ross, Peter Schachte and Simon Taylor.
<br>
<em>
Presented at the JICSLP '96 Workshop on Parallelism and
Implementation Technology for (Constraint) Logic Programming Languages,
</em>
Bonn, Germany, September 1996.
<a href = "papers/jicslpw_talk.ps.gz">
Available here (5K).
</a>
<p>

<li>
<strong>
Mercury:
an efficient purely declarative logic programming language.
</strong>
<br>
Zoltan Somogyi, Fergus Henderson and Thomas Conway.
<br>
<em>
Presented at the Eighteenth Australasian Computer Science Conference,
</em>
Adelaide, South Australia, February 1995.
<a href = "papers/acsc95_slides.ps.gz">
Available here (33K).
</a>
<p>

<li>
<strong>
Lecture notes for the expanded Mercury segment of the subject
433-257 Frontiers of Computer Science, given in 1999.
(Whereas the segment in 1997 had four lectures, in 1999 it had six.)
</strong>
<br>
Zoltan Somogyi.
<br>
<a href = "papers/257_1999.ps.gz">
Available here (40K).
</a>
<p>

<li>
<strong>
Lecture notes for the Mercury segment of the subject
433-257 Frontiers of Computer Science, given in 1997.
</strong>
<br>
Zoltan Somogyi.
<br>
<a href = "papers/257.ps.gz">
Available here (21K).
</a>
<p>

<li>
<strong>
Lecture notes for the Mercury segment of the subject
433-247 Frontiers of Computer Science, given in 1995.
</strong>
<br>
Zoltan Somogyi.
<br>
<a href = "papers/247.ps.gz">
Available here (21K).
</a>
<p>

<li>
<strong>
Type classes for logic programming languages, given in March 1998
</strong>
<br>
David Jeffery.
<br>
<a href = "papers/dgj-talk.ps.gz">
Available here (30K).
</a>
<p>

<li>
<strong>
Runtime type information in Mercury, given in March 1998
</strong>
<br>
Tyson Dowd.
<br>
<a href = "papers/rtti_talk_98.ps.gz">
Available here (48K).
</a>
<p>

</ul>

<p>
<hr>
<p>

All these papers and presentations are for A4 paper.
Unfortunately, we cannot generate US paper size versions.

<p>
