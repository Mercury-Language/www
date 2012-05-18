<?php

/* 
** This is the MCORBA news database.
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

$mcorba_newsdb = array(

"11 Sep 2000" => array("MCORBA 0.3 available for download.",

"After a long delay, a new release of MCORBA is now available.
This release works better with newer versions of omniORB (we are using
2.8) and supports threads much better.  This version requires a new
version of the Mercury compiler -- you will need to download a daily
snapshot to use it."
),

"21 Dec 1998" => array("MCORBA 0.2 available for download.",

"The second release of MCORBA is finally available.
We have fixed the generation of the C++ code so that the samples
now build and work correctly."
),

"17 Nov 1998" => array("New MCORBA paper available",

"We have made a paper describing the Mercury CORBA interface
available from
<A HREF=\"information/papers.html\">the Mercury papers page</A>."
),

"23 Sep 1998" => array("MCORBA 0.1 available for download.",

"The first release of MCORBA has been placed on the web site for
download.  It is not yet complete, but enough is there that you
can see what transformations are done.  The most important thing
that is missing at the moment is the generation of some of the
C++ code."
),

"21 Sep 1998" => array("MCORBA web page added.",

"We've just added this page to the Mercury web pages."
)

);

?>


