
MCORBA is a <a href="http://www.omg.org/">CORBA</a> binding for Mercury.
It allows you to use CORBA
objects from Mercury, and allows you to implement CORBA objects in
Mercury.  This means you can write distributed systems in Mercury,
or use Mercury to implement part of a component-based system.

<h3>Latest MCORBA News</h3>

<?
    include "$root/include/mcorba_news.inc";
?>

<h3> Download MCORBA </h3>

MCORBA is very much a work-in-progress, however we expect to have
enough written so that you can start using it to develop applications.

We are still cleaning up the MCORBA code to prepare for distribution.
We expect to make a preliminary release very soon.
MCORBA will be distributed under the GPL for the translator,
and LGPL for the runtime library.
<p>
You will need a copy of omniORB2, which you can freely download
from the <a href="http://www.orl.co.uk/omniORB/omniORB.html">
omniORB</a> web site.

<h3> Why use MCORBA? </h3>

MCORBA allows Mercury programs to take advantage of existing components,
acting as an interface between the Mercury system and an object.
This means you can use exisiting components of software as part of
a system, and Mercury will be able to easily communicate with them.
<p>
It also means you can implement (or re-implement) components
of a system in Mercury, and not need to worry about the concerns
of the rest of the project.

<h3> How does it work? </h3>

CORBA objects can communicate with each other even if each object
is implemented in different languages and running on different machines.
This allows distributed systems to be created, 
<p>
To the programmer, communicating with a CORBA object is made as
easy as possible, given the programming language that is being used.
For Mercury, it is as simple as calling a method of a type class.
<p>
Here is some Mercury code that reads input strings and
sends it to a CORBA object.
<pre>
:- pred sender_loop(T, io:state, io:state) <= chat(T).
:- mode sender_loop(di, di, uo) is det.
sender_loop(Chat0) -->
    io:read_line(Res),
    (
        { Res = ok(CharList) },
        { string:from_char_list(CharList, String) },
        sendmessage(Chat0, Chat, String),
        sender_loop(Chat)
    ;
        { Res = error(_Error) },
        io:write_string("Some kind of error occurred\n")
    ;
        { Res = eof }
    ).
</pre>

The type classes and their methods are generated from an Interface
Description Language (IDL).  This language contains descriptions of the
data types that will be used in the system, and the interfaces to
various parts of the system.  The implementation is left unspecified.
<p>
The IDL is transformed into a language specific binding, which allows
each programming language to access things in a natural way for that
language.  For C++, IDL is transformed into classes with methods.  For
Mercury IDL is transformed into type classes.

