<?

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
** between the date and the news.
** 
** ALSO the date's must be distinct.
*/

$newsdb = array(

"13 Dec 1998" => array("Mercury 0.8.1 released",

"This release just fixes some problems with the
binary distributions for 0.8.
Release information can be found
<A HREF=\"download/release.html\">here</A>."
),

"6 Dec 1998" => array("Dynamic linking support",

"The latest development version of the extras distribution
now includes support for dynamic linking.
This will soon be available for
<A HREF=\"download/rotd.html\">download</A>.
The interface is based on the C functions dlopen(), dlsym(), and co.,
which are supported by most modern Unix systems.
See the files in extras/dynamic_linking for details."
),

"25 Nov 1998" => array("New paper: Optimization of Mercury programs.",

"A paper describing the high-level optimization passes of the Mercury
compiler is now available from 
<A HREF=\"information/papers.html\">the Mercury papers page</A>."
),

"18 Nov 1998" => array("Mercury 0.8 released",

"We've just released the long-awaited version 0.8.
Release information can be found
<A HREF=\"download/release-0.8.html\">here</A>."
),

"17 Nov 1998" => array("New MCORBA paper available",

"We have made a paper describing the Mercury CORBA interface
available from
<A HREF=\"information/papers.html\">the Mercury papers page</A>."
),

"16 Nov 1998" => array("Web site now searchable",

"You can now search either the mailing lists or the
rest of the web site."
),

"30 Sep 1998" => array("New paper: Type classes in Mercury.",

"A new paper, describing our implementation of type classes in Mercury, 
has been made available from 
<A HREF=\"information/papers.html\">the Mercury papers page</A>."
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


