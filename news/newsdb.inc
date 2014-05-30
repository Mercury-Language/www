<?php

/*
** This is the news database.
**
** Add new items at the top in chronological order.
**
** Each item consists of
**	date =>
**	array( title,
**	    description
**	),
** Make sure you put a comma between each item, and an arrow
** between the date and the news.  Quotation marks must be escaped.
** You must test the entry before you commit.
** Simply run `make' at the top level w3 directory, and use a
** web browser (lynx is fine) to see that the news.html file formats
** correctly.
**
** ALSO the dates must be distinct.
*/

$newsdb = array(

"19th February 2014" => array(
"Windows binary packages for Mercury 14.01 available",
"Windows binary packages for Mercury 14.01 using either MinGW GCC or
Visual Studio 2013 (32-bit only) are now available on the
<a href=\"http://dl.mercurylang.org/index.html\">downloads page</a>."
),

"10th February 2014" => array(
"Mercury 14.01 released",
"Release information is available
<a href=\"http://dl.mercurylang.org/release/release-notes-14.01.txt\">here</a>."
),

"3rd January 2014" => array(
"14.01 beta release available",
"Beta versions of the upcoming 14.01 release are available on the
<a href=\"http://dl.mercurylang.org/index.html\">downloads page</a>.
"),

"3rd December 2013" => array(
"Mercury 13.05.2 released",
"Release Information is available
<a href=\"http://dl.mercurylang.org/release/release-notes-13.05.2.txt\">here</a>."
),

"19th August 2013" => array(
"Windows binary package for 13.05.1 available",
"A Windows binary package for Mercury 13.05.1 is now available on the
<a href=\"http://dl.mercurylang.org/index.html\">downloads page</a>."
),

"24th June 2013" => array(
"13.05.2 beta release available",
"Beta versions of the upcoming 13.05.2 release are available on the
<a href=\"http://dl.mercurylang.org/index.html\">downloads page</a>.
"),

"14th June 2013" => array(
"Mercury 13.05.1 released", 
"Release information is available
<a href=\"http://dl.mercurylang.org/release/release-notes-13.05.1.txt\">here</a>."
),

"28th May 2013" => array(
"13.05.1 beta release available",
"We're preparing a point release that will fix some problems in 13.05.
The first beta version of this point release is available on the
<a href=\"http://dl.mercurylang.org/index.html\">downloads page</a>."),

"19th May 2013" => array(
"Paul Bone's Ph.D. dissertation is now available",
"Paul's Ph.D. dissertation,
titled Automatic Parallelisation for Mercury,
has been examined and is now available for
download on the
<a href=\"documentation/papers.html#pbone_phd_thesis\">
Mercury papers page</a>."),

"16th May 2013" => array(
"Mercury 13.05 released",
"We are pleased to announce the release of version 13.05 of the Mercury system.
The new release can be downloaded from the
<a href=\"http://dl.mercurylang.org/index.html\">downloads page</a>.
For a list of changes since the last version see the
<a href=\"http://dl.mercurylang.org/release/release-notes-13.05.txt\">
release notes</a>."),

"6th May 2013" => array(
"Website redesign",
"We have updated the website.  Thanks to
<a href=\"http://www.yeslogic.com\">YesLogic</a>
for the new design!"),

"2nd May 2013" => array(
"13.05 beta release available",
"It's been a busy time and we never got around to releasing Mercury 12.08.
Since it's been so long we've decided to abandon the 12.08 release and try
again with 13.05.
This means the new release will have more features and fixes than if we'd
released version 12.08 now.
The beta releases of Mercury 13.05 are available
<a href=\"http://dl.mercurylang.org/index.html\">here</a>."),

"17th April 2013" => array(
"Downloads and documentation are available again",
"We have put both the documentation and some
<a href=\"http://dl.mercurylang.org/index.html\">downloads</a>
back online.
However, until we setup a periodic build system these may be updated
only intermittently.
Also, the downloads available do not yet include historical versions of
Mercury."),

"8th April 2013" => array("64-bit Windows support",
"Generation of 64-bit code on Windows using the MinGW64 version of GCC
is now supported."),

"24th March 2013" => array("Mercury has left the University",
"There are no more people working on the Mercury project who are also
working at the University of Melbourne.
As such it has become necessary to move the project outside the University
so that we can continue to support it.
There have already been a number of changes such as a new website address,
new mailing lists and we're now using git and github.com for our VCS.
Today the server at the University stopped working and we've re-located the
website to the new server, but a number of links are broken including the
all-important downloads section.
We will fix this in the next few days. and post another update here."),

"13th August 2012" => array("12.08 beta release available",
"Beta releases of Mercury 12.08 are available <a href=\"download.html\">here</a>."
),

"3rd August 2012" => array("Mercury 11.07.2 released",
"Release information is available
<a href=\"./download/release-11.07.html\">here</A>."
),

"2nd March 2012" => array("Mercury 11.07.1 released",
"Release information is available
<a href=\"./download/release-11.07.html\">here</A>."
),

"28th January 2012" => array("New paper",
"
A new paper and presentation have been added to the
<a href=\"documentation/papers.html#loop_control\">papers page</a>.
These describe how parallel conjunctions with recursive calls
can be handled more efficiently,
especially with regard to memory usage."
),

"22nd December 2011" => array("New release",

"We are pleased to announce the release of version 11.07 of the
Mercury system.  The new release can be downloaded
<a href=\"download/release.html\">here</a>.  For a list of the changes since
the last version see the <a href=\"download/release-11.07.html\">release notes</a>."
),

"15th August 2011" => array("Three new papers",
"
Three new papers about parallelism in Mercury have been added to the
<a href=\"documentation/papers.html#threadscope\">papers page</a>.
Associated with each paper is a presentation that was given at ICLP 2011.
The presentations are also available on the
<a href=\"documentation/papers.html#threadscope_talk\">papers page</a>."
),

"29th June 2011" => array("11.07 beta release available",
"Beta releases of Mercury 11.07 are available <a href=\"download.html\">here</a>."
),

"14th June 2011" => array("Mercury featured on dotnetrocks.com podcast",

"<a href=\"http://www.dotnetrocks.com\">dotnetrocks.com</a> recently
interviewed Paul Bone about Mercury and some of its features including
Declarative Debugging and Automatic Parallelism.
The podcast episode can be found
<a href=\"http://www.dotnetrocks.com/default.aspx?showNum=671\">here</a>."
),

"7th June 2011" => array("New presentation",

"The slides for a presentation about the Mercury project that was given at
the Linux Users of Victoria's June 2011 meeting are now available from the
<a href=\"documentation/papers.html#luv_2011\">papers page</a>."
),

"27th April 2011" => array("New release",

"We are pleased to announce the release of version 11.01 of the
Mercury system.  The new release can be downloaded
<a href=\"download/release.html\">here</a>.  For a list of the changes since
the last version see the <a href=\"download/release-11.01.html\">release notes</a>."
),

"23rd December 2010" => array("11.01 beta release available",
"Beta releases of Mercury 11.01 are available <a href=\"download.html\">here</a>.
"),

"20th December 2010" => array("Cairo binding",
"The latest development version of the Mercury extras distribution
now contains a Mercury binding to the
<a href=\"http://www.cairographics.org/\">Cairo 2D graphics library</a>.
See the files in extras/graphics/mercury_cairo for details.
"),

"6th December 2010" => array("New Presentation",
"
The slides for a Google Tech Talk and a seminar at The University of New South
Wales about &quot;Automatic Parallelisation for Mercury&quot; are now available
from the
<a href=\"documentation/papers.html#google_2010_autopar\">papers page</a>
"),

"23 November 2010" => array("C# backend",
"The Mercury compiler now has a C# backend,
which was under development during the last few months.
It works with Microsoft .NET and Mono, and is available in the
current releases of the day.
"
),

"5 October 2010" => array("Mercury 10.04.2 released",
"Release information is available
<a href=\"./download/release-10.04.html\">here</A>."
),

"30 August 2010" => array("Mercury 10.04.1 released",
"Release information is available
<a href=\"./download/release-10.04.html\">here</A>."
),

"19 July 2010" => array("New release",

"We are pleased to announce the release of version 10.04 of the
Mercury system.  The new release can be downloaded
<a href=\"download/release.html\">here</a>.  For a list of the changes since
the last version see the <a href=\"download/release-10.04.html\">release notes</a>."
),

"23 March 2010" => array("New paper and new slides",
"A new paper,
Towards Software Transactional Memory for Real-World Programs,
has been added to our
<a href=\"documentation/papers.html\">papers page</a>.
It describes recent work on Software Transactional Memory in Mercury.

<p>A set of slides from a talk given at LinuxConf in Wellington regarding
automatic parallelisation are also available from the
<a href=\"documentation/papers.html\">papers page</a>.
</p>
"),

"4 February 2010" => array("10.04 beta release available",
"The first beta of 10.04 is available <A HREF=\"download.html\">here</A>.
"),

"1 February 2010" => array("New release schedule and naming scheme",
"The Mercury project has decided to adopt a 6 monthly release schedule
with each release being named by the year and month of the release.
The next planned release is 10.04 which is due for release in April 2010.
"),

"3 December 2009" => array("New papers",
"We have several papers available from our
<A HREF=\"documentation/papers.html\">papers page</A> that describe
region-based memory management in Mercury.
"),

"30 November 2009" => array("GCC 4.x support",
"You can now use GCC 4.1 - 4.4 to build Mercury programs in
low-level C grades, on Linux/x86 and Linux/x86-64.
You will need a release of the day.
"),

"25 September 2009" => array("Java backend",
"The Java backend was restored and improved over the last few months.
It works well!  You will need a release of the day.
"
),

"27 July 2009" => array("New Presentation",
"
The slides for a recent talk entitled &quot;Writing Business Rules Engines in
Mercury&quot; are now available from the
<A HREF=\"documentation/papers.html#fpu_rules_2009\">papers page</A>.
"
),

"9 February 2009" => array("RSS Feed",
"You can now receive Mercury news items via an RSS feed by subscribing
to the following URL:
<a href=\"$root/rss.xml\">http://www.mercury.csse.unimelb.edu.au/rss.xml</a>
"
),

"5 February 2009" => array("New standard library modules",
"We have added two new modules to the standard library: parsing_utils and
calendar.
parsing_utils is a set of utilities to help with writing recursive
descent parsers.  calendar contains utilities for working with dates
in the Gregorian calendar.
Both modules are available in the latest release of the day."
),

"3 November 2008" => array("New paper",
"We have a new paper available from our
<A HREF=\"documentation/papers.html\">papers page</A> that describes
some recent work on automatically introducing parallelism in Mercury programs
based on profiling data."
),

"13 October 2008" => array("Google protocol buffers for Mercury",
"Google protocol buffers allows a extensible binary protocol to be
defined in a programming language independent .proto file.
The protoc compiler then generates APIs for the protocol in C++, Java
or Python.
protoc has recently been extended with basic support for Mercury.
The extension is available from
<a href=\"http://code.google.com/p/protobuf-mercury/\">the protobuf-mercury
project site</a>."
),

"29 April 2008" => array("Currying of multi-moded predicates",
"We now support currying of multi-moded predicates where the mode to
use can be determined from the curried arguments.
For example one can now use expressions such as
list.foldl(list.foldl(int.plus), [[1, 2], [3, 4]], 0),
that previously had to be written using explicit lambda
expressions.
This feature was added by Mission Critical Australia."
),

"28 April 2008" => array("Implementation-defined literals",
"We now support &quot;implementation-defined literals&quot;.  These are
symbolic names that are replaced by context-dependent values at compile time.
Examples include \$file, which is replaced by a string containing the name
of the file in which it appears, and \$line which is replaced by an integer
representing the current line number.
This feature was added by Mission Critical Australia."
),

"1 November 2007" => array("Three new papers",
"We have three new papers available from our
<A HREF=\"documentation/papers.html\">papers page</A>.
One is on the handling of large predicates
by Prolog and Mercury implementations,
one is on a software transactional memory system for Mercury,
and one is a comparison of packrat parsing and memoed DCG parsers."
),

"21 September 2007" => array("Bug Tracking System",
"The Mercury project now uses the Mantis bug tracking system
to keep track of bug reports.  The Mercury bug database may
be accessed via the
<a href=\"https://www.mercurylang.org/bugs/\">Bug Database</a>
link in the menu at the side of this page."),


"14 August 2007" => array("New Paper and Talk",
"A paper and a presentation have been added to the
<A HREF=\"documentation/papers.html\">papers page</A> describing how
Mission Critical is using Mercury in the \"real world\"."),

"6 August 2007" => array("Erlang backend",

"There's a new back-end for the Mercury compiler that compiles to Erlang, so
that Mercury programs can run on the Erlang runtime system.  The goal is to
allow Mercury programs to take advantage of the Erlang implementation's support
for scalable and reliable server programs.  It also allows for interoperability
between Mercury and Erlang code.  This back-end was implemented by Mission
Critical IT (Australia)."),

"6 March 2007" => array("Remove support for Unicode characters in string literals",

"This feature has been removed because of concerns that it might lead users
to believe that Mercury offers full Unicode support, which is not the case."),

"1 December 2006" => array("Mercury 0.13.1 released",

"Release information is available
<A HREF=\"./download/old_release.html\">here</A>."
),

"30 October 2006" => array("New paper",

"We have a new paper available from our
<A HREF=\"documentation/papers.html\">papers page</A> that describes
some recent work on parallelism support in Mercury."
),

"14 September 2006" => array("New release",

"We are pleased to announce the release of version 0.13 of the
Mercury system.  The new release can be downloaded
<a href=\"download/release.html\">here</a>.  For a list of the changes since
version 0.12 see the <a href=\"download/release-0.13.html\">release notes</a>."
),

"8 August 2006" => array("Support for Unicode characters in string literals",

"The escape sequences <em>\\uXXXX</em> and <em>\\UXXXXXXXX</em> can now
be used to encode Unicode characters in string literals, where <em>XXXX</em>
(or <em>XXXXXXXX</em>) is the code point of the desired character in
hexadecimal.
The latest <A HREF=\"download/rotd.html\">release of the day</A>
includes support for this feature.
"),

"4 April 2006" => array("Mercury 0.13.0-beta available",

"A beta version of the upcoming 0.13.0 release in now available from the
<A HREF=\"$root/download.html\">download page</A>."
),

"28 March 2006" => array("New presentation",

"A presentation titled
\"Unclean!  Unclean!  or  Purity issues in declarative constraint logic
programming\"
has been added to the presentations section on our
<A href=\"documentation/papers.html#g12_unclean\">papers page</A>."
),

"25 January 2006" => array("Mercury 0.12.2 released",

"Release information is available
<A HREF=\"./download/release.html\">here</A>."
),

"11 December 2005" => array("Three new papers",

"Three new papers titled
\"Controlling search space materialization
in a practical declarative debugger\",
\"Adding constraint solving to Mercury\"
and
\"Tabling in Mercury: design and implementation\"
are now available from our
<A HREF=\"documentation/papers.html\">papers page</A>."
),

"21 November 2005" => array("Mercury 0.12.1 released",

"Release information is available
<A HREF=\"./download/release.html\">here</A>."
),

"9 September 2005" => array("New release",

"We are pleased to announce the release of version 0.12 of the
Mercury system.  The new release can be downloaded
<a href=\"download/release.html\">here</a>.  For a list of the changes since
version 0.11 see the <a href=\"download/release-0.12.html\">release notes</a>."
),

"8 August 2005" => array("Two new papers",

"Two new papers titled
\"Divide-and-query and subterm dependency tracking in the Mercury declarative
debugger\"
and
\"The implementation of minimal model tabling in Mercury (extended abstract)\"
are now available from our
<A HREF=\"documentation/papers.html\">papers page</A>."
),

"11 May 2005" => array("Functional dependencies",

"We've added support for functional dependencies to the typeclass system.
See the \"Type classes\" chapter of the
<A HREF=\"$ref_man_latest\">Mercury Language Reference Manual</A>
for details.
The latest <A HREF=\"download/rotd.html\">release of the day</A>
includes support for this language feature."
),

"10 April 2005" => array("Updated and expanded tutorial available",

"A much improved tutorial is now available from the
<A HREF=\"$root/information/documentation.html\">documentation</A>
section."
),

"4 April 2005" => array("Mercury 0.12.0-beta available",

"A beta version of the upcoming 0.12.0 release in now available from the
<A HREF=\"$root/download/rotd.html\">snapshot</A> section."
),

"21 March 2005" => array("New goal types",

"We've added three new types of goal to the language.
`promise_equivalent_solutions' goals allow the programmer
to promise that all the solutions generated by a goal are
equivalent.  This makes working with multi- or non-deterministic code
easier.  `promise_pure' and `promise_semipure' goals allow the programmer
to make promises about the purity of arbitrary goals.
See the \"Goals\" section of the \"Syntax\" chapter of the
<A HREF=\"$ref_man_latest\">Mercury Language Reference Manual</A>
for more details.  <A HREF=\"download/rotd.html\">release of the day</A>
includes support for these new goal types."
),

"25 February 2005" => array("New PhD thesis",

"A new PhD thesis on Mercury,
<em>Compile-time garbage collection for the declarative language Mercury</em>
by Nancy Mazur, is now available from our
<A HREF=\"documentation/papers.html\">papers page</A>."
),

"09 December 2004" => array("New Standard Library to Convert Mercury Terms
to XML Documents",

"A new module `term_to_xml' has been added to the standard library.  This
module contains predicates to write arbitrary Mercury terms to an output
stream as XML.  Automatic generation of DTDs for Mercury types is also
supported.  Once a Mercury term is in XML it can be converted to many other
formats such as HTML or XUL using an appropriate stylesheet."
),

"19 October 2004" => array("Shared Library Support for Mac OS X",

"Shared Mercury libraries now work on Mac OS X.  The standard Mercury libraries
are also now dynamically linked by default, greatly reducing the size of
executables."
),

"10 June 2004" => array("The 2004 ICFP Programming Contest",

"A team of Mercury developers submitted an <A
HREF=\"http://www.cs.mu.oz.au/~rafe/icfp2004.html\">entry</A> for the 2004
ICFP Programming contest.  We won't know how well we did until the results
are posted after the ICFP conference, later this year."
),

"21 January 2004" => array("New PhD thesis",

"A new PhD thesis on the Mercury mode system,
<em>Precise and Expressive Mode Systems for
Typed Logic Programming Languages</em>
by David Overton,
is now available from our
<A HREF=\"documentation/papers.html\">papers page</A>."
),

"25 Sep 2003" => array("Accurate garbage collection",

"The high-level C back-end now supports accurate garbage collection,
as an alternative to using the Boehm (et al) conservative collector.
There is a <A HREF=\"documentation/papers.html#high_level_gc\">paper</A>
that describes the new garbage collector.  For more details, see
the files compiler/ml_elim_nested.m and runtime/mercury_accurate_gc.c
in the latest Mercury source distribution."
),

"21 Feb 2003" => array(".NET back-end bootstraps",

"We reached a major milestone for the .NET back-end:
the Mercury compiler successfully bootstrapped with '--grade il'.
See <A HREF=\"dotnet.html\">this link</A> for details on the
current status of the .NET back-end."
),

"24 Dec 2002" => array("Mercury 0.11.0 released",

"Release information is available
<A HREF=\"./download/release.html\">here</A>."
),

"12 November 2002" => array("New Paper,",

"We have a new paper available from our
<A HREF=\"documentation/papers.html\">papers page</A> that describes
the design and implementation of a new termination analyser for Mercury."
),

"23 October 2002" => array("New build system",

"The compiler now accepts a `--make' option, which performs most
of the functions of Mmake.  The advantages of `mmc --make' are
that no `mmake depend' step is necessary and the dependencies are
more accurate.  Parallel builds are not yet supported.  See the
\"Using Mmake\" chapter of the
<A HREF=\"$user_guide_latest\">Mercury User's Guide</A>.
`mmc --make' is available in the latest
<A HREF=\"download/rotd.html\">release of the day</A>."
),

"17 August 2002" => array("Two PhD theses",

"Two PhD theses on Mercury are now available from our
<A HREF=\"documentation/papers.html\">papers page</A>.
They are:
<em>Expressive type systems for logic programming languages</em>
by David Jeffery, and
<em>Towards parallel Mercury</em>
by Thomas Conway."
),

"15 July 2002" => array("Three papers",

"Three papers on Mercury are now available from our
<A HREF=\"documentation/papers.html\">papers page</A>.
Two will be presented at PPDP '02 in October:
<em>Constraint-Based Mode Analysis of Mercury</em>
by David Overton, Zoltan Somogyi and Peter Stuckey, and
<em>Using the Heap to Eliminate Stack Accesses</em>
by Zoltan Somogyi and Peter Stuckey.
The third was presented at ISMM '02 in June:
<em>Accurate garbage collection in an uncooperative environment</em>
by Fergus Henderson."
),

"10 July 2002" => array("State variables",

"We've added some extra syntax to the language to support programming
with `state variables'.  State variables are intended to make it easier
to deal with sequences of values.  For example, where previously one
would have to name each value in a sequence X0, X1, X2, ..., X, now it
is possible to use a state variable !X, which will be translated into
ordinary, non-state variable Mercury, automatically naming the sequence
values.  !X stands for two arguments, !.X and !:X, where !.X is
interpreted as the \"current\" sequence value under consideration and !:X
is taken as the \"next\" sequence value.  State variable syntax should be
used in preference to DCG notation for threading the IO state in future.
See the \"State variables\" section of the \"Syntax\" chapter of the
<A HREF=\"$ref_man_latest\">Mercury Language Reference Manual</A> for
more details."
),

"13 November 2001" => array("Unification expressions",

"We've added a new kind of expression to the language.
A unification expression, written `X @ Y', unifies X and Y and returns
the result. Unification expressions are most useful when writing switches.
See the \"Data-terms\" section of the \"Syntax\" chapter of the
<A HREF=\"$ref_man_latest\">Mercury Language Reference Manual</A>
for more details. The latest
<A HREF=\"download/rotd.html\">release of the day</A>
includes support for unification expressions."
),

"4 November 2001" => array("New paper",

"Our BABEL'01 paper, on compiling Mercury to the .NET Common Language Runtime,
is now available from our <A HREF=\"documentation/papers.html\">papers page</A>.
"
),

"26 October 2001" => array("New paper",

"We have a new paper available
from our <A HREF=\"documentation/papers.html\">papers page</A>,
which outlines the design of the back end that generates high level C."
),

"13 August 2001" => array("Smart recompilation",

"The Mercury compiler can now perform smart recompilation. With smart
recompilation, when the interface of a module changes, only modules
which use the changed declarations are recompiled. The latest
<A HREF=\"download/rotd.html\">release of the day</A>
includes support for smart recompilation."
),

"04 August 2001" => array("ICFP 2001 programming contest entry",

"See our <A HREF=\"./information/events/icfp2001.html\">report</A> on our
<A HREF=\"http://cristal.inria.fr/ICFP2001/prog-contest/\">
ICFP 2001 programming contest</A> entry."
),

"01 August 2001" => array("New paper and demo",

"We have a new paper available
from our <A HREF=\"documentation/papers.html\">papers page</A>,
which describes the design and implementation of the Mercury deep profiler.
This new profiler generates profiling information
that is significantly more accurate and more detailed
than the information produced by most other profilers.
A <A HREF=\"information/deep_demo.html\">
description and demo of the deep profiler</A>
is also available."
),

"18 May 2001" => array("New paper",

"We have a new paper available
from our <A HREF=\"documentation/papers.html\">papers page</A>,
which describes the design and
implementation of a compile time garbage collection and memory reuse
system in the Melbourne Mercury compiler."
),

"04 Apr 2001" => array("Mercury 0.10.1 released",

"Release information is available
<A HREF=\"./download/old-release.html\">here</A>."
),

"25 Feb 2001" => array("Mercury 0.10 released",

"Release information is available
<A HREF=\"./download/old-release.html\">here</A>."
),

"19 Feb 2001" => array("Native code back-end",

"There's a <A HREF=\"download/gcc-backend.html\">new back-end</A>
for the Mercury compiler that compiles directly to assembler,
rather than than going via C.
The new back-end is implemented by linking the Mercury compiler with the
(relatively) language independent GNU Compiler Collection back-end.
In other words, there is now a Mercury front-end for GCC!"
),

"05 Oct 2000" => array("Events and Reports",

"Two new sections have been added to the web site.  The events section
will give information about events Mercury has been involved in -- we
start this section with a <a href=\"information/events/icfp2000.html\">
page on Mercury coming 4th</a> (of 38 teams) in
the ICFP 2000 programming contest.  The reports section contains regular
reports from the developers, such as minutes from Mercury meetings.
Both are available from the sidebar menu."
),


"4 Oct 2000" => array("Two new papers",

"Two new papers on Mercury are now available from our
<A HREF=\"documentation/papers.html\">papers page</A>.
One describes a binding-time analysis for higher order code,
while the other describes an analysis for detecting whether a memory
cell is available for reuse."
),

"22 Sep 2000" => array("Tuple types",

"We've added support for tuple types, similar to those in most
other functional languages. Tuples use the syntax `{A, B, ...}'.
See the \"Builtin types\" section of the \"Types\" chapter of the
Mercury Language Reference Manual for details.
The latest <A HREF=\"download/rotd.html\">release of the day</A>
includes support for tuple types."
),

"9 Aug 2000" => array("Remote CVS access",

"We've made anonymous remote CVS access available to the Mercury CVS
archive.  A page describing how to use remote CVS is available
<A HREF=\"information/developers/remote_cvs.html\">here</A>.  Mercury, the test
suite, MCORBA, and even these web pages are available via CVS."
),

"26 Jul 2000" => array("Mercury and Microsoft's .NET",

"A page outlining the status of Mercury on Microsoft's new .NET
framework is now available
<A HREF=\"information/dotnet/mercury_and_dotnet.html\">here</A>."
),

"11 Apr 2000" => array("Completed paper",

"The full version of <EM>Making Mercury Programs Tail Recursive</EM> is
now available from our <A HREF=\"documentation/papers.html\">papers page</A>.
The paper describes two optimizations, implemented in the Mercury
compiler, which make predicates tail recursive."
),

"5 Apr 2000" => array("More new papers",

"Another two new papers on Mercury are now available from our
<A HREF=\"documentation/papers.html\">papers page</A>.
One describes using purity declarations for building foreign language
interfaces, while the other details the update transformation, an
optimization that can help re-order state updates into better positions
for other optimizations."
),

"21 Feb 2000" => array("New papers",

"Two new papers on Mercury are now available from our
<A HREF=\"documentation/papers.html\">papers page</A>.
One describes a binding-time analysis,
while the other describes an analysis for detecting whether a memory
cell is available for reuse."
),

"26 Jan 2000" => array("Mercury 0.9.1 released",

"Mercury 0.9.1 fixes a few bugs in Mercury 0.9, including a few problems
with binary distributions.  Release information can be found
<A HREF=\"download/release-0.9.html\">here</A>."
),

"19 Jan 2000" => array("Morphine released",

"<a href=\"http://www.irisa.fr/lande/jahier/download.html\">Morphine</a>,
a trace analysis system for Mercury, has just been added to
the Mercury distribution (and will be available in Mercury 0.9.1).  Morphine
allows dynamic tracing of Mercury programs, allowing scripts to be
written which interact with the debugger and efficient collection of statistics
on running programs.  Many thanks to
<a href=\"mailto:Erwan.Jahier@irisa.fr\">Erwan Jahier</a> for his hard work on
Morphine."
),

"16 Jan 2000" => array("Record syntax",
"We've added support for record syntax, so that fields of
constructors can be conveniently extracted and updated
without writing lots of trivial access predicates.
See the \"Field access functions\" section of the \"Types\" chapter
of the Mercury Language Reference Manual for details.
The syntax is available in our latest
<A HREF=\"download/rotd.html\">release of the day</A>.
"),

"18 Dec 1999" => array("Mercury 0.9 released",

"We've just released the long-awaited version 0.9.
Release information can be found
<A HREF=\"download/release-0.9.html\">here</A>."
),

"17 Nov 1999" => array("A paper on the Mercury debugger",
"A new paper on Mercury is now available from our
<A HREF=\"documentation/papers.html\">papers page</A>:
it describes the technology we use to implement the Mercury debugger.
"),

"28 Oct 1999" => array("Time module",

"The standard library now includes a module `time'
which provides an interface to the ANSI/ISO C <time.h> functions
and to the POSIX times() function.

Thanks to Tomas By for contributing the original version of this module.
"),

"16 Sep 1999" => array("Exception handling",

"Exception handling support is now part of the standard library.

The module `exception', which was previously part of the \"extras\"
distribution, has been moved into the standard library.
The predicate error/1 now throws an exception rather than just
terminating execution.

However, many of the operations in the standard library still handle
errors by aborting execution rather than by throwing exceptions.
"),

"13 Aug 1999" => array("New papers",

"Two new papers on Mercury are now available from our
<A HREF=\"documentation/papers.html\">papers page</A>.
One describes how Mercury handles run time type information,
while the other describes the optimizations we use
to make Mercury programs tail recursive.
"),

"13 Jul 1999" => array("Operators",

"We now support a simple form of user-defined infix operators.
Terms in the form of x `fun` y are transformed into fun(x, y).
The transformation is available in our latest
<A HREF=\"download/rotd.html\">release of the day</A>.
"),

"17 Jun 1999" => array("Automatic accumulator introduction",

"A new optimization has been added to the Mercury compiler.
The optimization attempts to make procedures tail recursive by
the introduction of accumulator variables.
The optimization is available in our latest
<A HREF=\"download/rotd.html\">release of the day</A>.
"),

"18 Mar 1999" => array("Linux RPM format binary distribution",

"We have provided a new binary distribution of Mercury 0.8.1
for Linux in RPM (RedHat Package Manager) format.

Note that the binary distributions that we provide for Linux work
with libc 6.0 only.  Unfortunately they do NOT work with libc 6.1.
This is due to incompatibilities between libc versions 6.0 and 6.1
(i.e. glibc 2.0 and 2.1).
"),

"15 Mar 1999" => array("Lazy evaluation",

"The latest development version of the Mercury extras distribution
now includes support for optional lazy evaluation.
There is a new module `lazy', which provides
a type `lazy(T)' for lazily-evaluated data structures,
with `delay' and `force' operations.
There is also a module `lazy_list', which defines a lazy list
data type using the `lazy' module.
See the files in extras/lazy_evaluation for details.
This is now available for
<A HREF=\"download/rotd.html\">download</A>.
"),

"11 Mar 1999" => array("Prolog debuggers no longer supported",

"We've removed the support for using a Prolog debugger on Mercury programs.
Now that we have a working Mercury debugger, there's no longer any need to
use a Prolog debugger for debugging Mercury code.
"),

"8 Mar 1999" => array("Interactive queries",

"The Mercury debugger now includes support for interactive queries.
See the \"Interactive query commands\" subsection of the \"Debugger commands\"
section of the \"Debugging\" chapter of the
<A HREF=\"$user_guide_latest\">Mercury User's Guide</A>.
"),


"5 Mar 1999" => array("Mercury Tutorial",
"<a href=\"mailto:rafe@cs.mu.oz.au\">Ralph Becket</a>
has kindly written a
<A HREF=\"http://www.mercurylang.org/documentation/papers/book.pdf\">Mercury Tutorial</A>.
This is still under development.  Feedback would be appreciated."
),

"18 Jan 1999" => array("Coding Challenge - Battleships",

"Download the
<A HREF=\"http://www.cs.mu.oz.au/research/mercury/download/files/battleships/battleships.tar.gz\">spec</A>
for battleships and maybe have your solution added to the samples directory."
),

"21 Dec 1998" => array("MCORBA 0.2 released",

"The second release of MCORBA is finally available.
We have fixed the generation of the C++ code so that the samples
now build and work correctly.  See the <A HREF=\"mcorba.html\">
MCORBA web page</A> for more details on MCORBA."
),

"13 Dec 1998" => array("Mercury 0.8.1 released",

"This release just fixes some problems with the
binary distributions for 0.8.
Release information can be found
<A HREF=\"download/release.html\">here</A>."
),

"6 Dec 1998" => array("Dynamic linking support",

"The latest development version of the extras distribution
now includes support for dynamic linking.
This is now available for
<A HREF=\"download/rotd.html\">download</A>.
The interface is based on the C functions dlopen(), dlsym(), and co.,
which are supported by most modern Unix systems.
See the files in extras/dynamic_linking for details."
),

"25 Nov 1998" => array("New paper: Optimization of Mercury programs.",

"A paper describing the high-level optimization passes of the Mercury
compiler is now available from
<A HREF=\"documentation/papers.html\">the Mercury papers page</A>."
),

"18 Nov 1998" => array("Mercury 0.8 released",

"We've just released the long-awaited version 0.8.
Release information can be found
<A HREF=\"download/release-0.8.html\">here</A>."
),

"17 Nov 1998" => array("New MCORBA paper available",

"We have made a paper describing the Mercury CORBA interface
available from
<A HREF=\"documentation/papers.html\">the Mercury papers page</A>."
),

"16 Nov 1998" => array("Web site now searchable",

"You can now search either the mailing lists or the
rest of the web site."
),

"30 Sep 1998" => array("New paper: Type classes in Mercury.",

"A new paper, describing our implementation of type classes in Mercury,
has been made available from
<A HREF=\"documentation/papers.html\">the Mercury papers page</A>."
),

"21 Sep 1998" => array("MCORBA: CORBA for Mercury.",

"We've done some work on MCORBA, which is a binding to CORBA for
Mercury.  CORBA is a distributed object framework, that allows local
and remote objects to communicate.  MCORBA allows you to use
Mercury to talk to other CORBA objects, and to implement CORBA
objects.  It's still preliminary, if you are interested see the
<A HREF=\"mcorba.html\">MCORBA page</A> for more information."
),


"18 Sep 1998" => array("New unstable daily releases.",

"The Mercury daily snapshot, called the release-of-the-day (ROTD) scheme
has been modified to add unstable releases, which have not passed the
all the tests, but may still be useful for developers who need the very
latest version.  Daily releases are available for
<A HREF=\"download/rotd.html\">download</A>."
),


"7 Sep 1998" => array("The Mercury Web Site overhauled.",

"The new layout is easier for us to update with news (like this),
and has full hypermail archives of the <em>mercury-developers</em> and
<em>mercury-users</em> mailing lists.
Thanks to <a href=\"mailto:petdr@cs.mu.oz.au\">Peter Ross</a>
for all his work on it."
),

"4 Aug 1998" => array("Mmake extensions.",

"Mmake has been extended to support setting flags on a per-file basis,
and will now warn about variables which are defined but not used."
),

"13 Jul 1998" => array("Enhancements to mtags.",

"Mtags is now able to produce tags for typeclass declarations.  It is
also able to produce tags files in the extended format supported by
recent versions of Vim and Elvis."
),

"9 Jul 1998" => array("Existential types.",

"Preliminary support for existential types has been added to Mercury.
For those of you that aren't theorists, this means you can declare
polymorphic arguments that are outputs, and their type is also
an output."
),

"15 May 1998" => array("Tabling.",

"Predicates can now be tabled.  Predicates to be tabled are requested by
the use of a pragma."
),

"8 Apr 1998" => array("Native Debugger.",

"An alpha version of a native trace-based debugger has been implemented.
The main features missing are a term browser and the ability to redo
goals."
),

"4 Mar 1998" => array("Sub-modules.",

"The module system now includes support for sub-modules."
),

"1 Feb 1998" => array("Ported to glibc.",

"Mercury 0.7.3 has been ported to glibc for Debian GNU/Linux."
),

"19 Dec 1997" => array("Type classes.",

"Type classes support added. Type classes let you specify an interface
and then provide multiple different implementations of that interface.
They're similar to abstract base classes in C++ or \"interfaces\" in
Java."
),

"1 Nov 1997" => array("Mercury 0.7.3 released.",

"Release information can be found
<A HREF=\"download/release-0.7.html\">here</A>."
),

"13 Oct 1997" => array("Mercury 0.7.2 released.",
"Release information can be found
<A HREF=\"download/release-0.7.html\">here</A>."
),

"15 Aug 1997" => array("Mercury 0.7 released.",

"Release information can be found
<A HREF=\"download/release-0.7.html\">here</A>."
),

"14 Jan 1997" => array("Mercury 0.6.2 released.",

"Release information can be found
<A HREF=\"download/release-0.6.html\">here</A>."
),

"26 Aug 1996" => array("Mercury 0.6.1 released.",

"Release information can be found
<A HREF=\"download/release-0.6.html\">here</A>."
),

"2 Aug 1996" => array("Mercury 0.6 released.",

"Release information can be found
<A HREF=\"download/release-0.6.html\">here</A>."
),

"15 Feb 1996" => array("Mercury 0.5 released.",

"Release information can be found
<A HREF=\"download/release-0.5.html\">here</A>."
),

"15 Sep 1995" => array("Mercury 0.4 released.",

"Release information can be found
<A HREF=\"download/release-0.4.html\">here</A>."
),

"18 Jul 1995" => array("Mercury 0.3 released.",

"Release information can be found
<A HREF=\"download/release-0.3.html\">here</A>."
)

);

?>


