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
*/

$newsdb = array(

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

"1 Sep 1998" => array("Mercury 0.8 due for release during September.",

"We aim to release the long awaited Mercury 0.8 sometime this month.
Keep watching here for further information."
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
<A HREF=\"download/release-0.4.html\">here</A>."
)

);

?>


