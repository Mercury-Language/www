<h2> Mercury on .NET </h2>

<h3> Summary </h3>

The Mercury compiler has a new back-end that targets
the <a href="http://msdn.microsoft.com/net/">Microsoft .NET platform</a>.
<p>

Thanks to Microsoft's generous and ongoing support, both financial
and otherwise, we've been able to port Mercury to Microsoft's new
.NET system.  There's a new back-end for the Mercury compiler,
based on the `--high-level-code' back-end, that compiles to IL, the
Microsoft .NET Intermediate Language.
<p>

This back-end is enabled using the new `--target il' option
(or just `--il' for short), or the `ilc' grade.
<p>

This is still work in progress.
Compiler support for this new back-end is mostly complete,
but large parts of the standard library are still not yet
implemented for this new port.
<p>

<h3> Status </h3>

The <a href="<? echo $root ?>/download/release.html">current release</a>
of the Mercury compiler includes preliminary support for generating code
for .NET.
It also includes a partial port of the Mercury library and runtime to .NET.

<h4> The bad news </h4>

At this point it is still an alpha-quality release; it's hard to install,
there are still many parts of the standard library which are not yet
implemented for this port, it's not well tested, not yet efficient,
and undergoing continual change in our development snapshots (e.g. the
data representation used in the current release is inefficient and will
be changed, the current name mangling approach is inconvenient and will
be changed, etc.)

<h4> The good news </h4>

The good news is that the new back-end does support all the standard
Mercury language features:
<ul>
<li> parametric polymorphism
<li> multi-parameter type classes
<li> higher-order procedures and closures
<li> existential types
<li> multi-moded procedures
<li> backtracking
<li> etc.
</ul>
And if you're interested in checking it out, it's available for
<a href="<? echo $root ?>/download.html">download</a> today.
<p>
For more information, see the README.DotNet file in the
Mercury source distribution.

<h3> Articles </h3>

We have written two general purpose articles, talking about Mercury and the
.NET platform.

<ul>
	<li>
	<a href="<? echo $root ?>/information/dotnet/mercury_and_dotnet.html">
		Mercury and Microsoft's .NET</a>

	<li>
	<a href="<? echo $root ?>/information/dotnet/objectworld_flyer.html">
	Mercury and .NET: flyer for ObjectWorld 2000</a>
</ul>
