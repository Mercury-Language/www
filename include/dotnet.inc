<h2> Mercury on .NET </h2>

<h3> Summary </h3>

The Mercury compiler has a new back-end that targets
the <a href="http://msdn.microsoft.com/net/">Microsoft .NET platform</a>.
<p>

Thanks to Microsoft's generous support, both financial
and otherwise, we've been able to port Mercury to Microsoft's new
.NET system.  There's a new back-end for the Mercury compiler,
based on the `--high-level-code' back-end, that compiles to IL, the
Microsoft .NET Intermediate Language.
<p>

This back-end is enabled using the new `il' grade.
<p>

This is still work in progress.
<p>

<h3> Status </h3>

The <a href="<? echo $root ?>/download/rotd.html">release-of-the-day releases</a>
of the Mercury compiler include support for generating code for .NET.
They also include a port of most of the Mercury standard library and runtime
to .NET.
<p>

The <a href="<? echo $root ?>/download/release.html">current release</a>
also includes some support for the .NET backend, but coverage
of the Mercury standard library for .NET is much improved in the
release-of-the-day releases, so if you want to use the .NET back-end,
we recommend that you use a release-of-the-day release rather than the
official current release.
<p>

<h4> The bad news </h4>

At this point it is still a beta-quality release; it's hard to install,
there are still some parts of the standard library which are not yet
implemented for this port, it's not well tested, not yet efficient,
and may be subject to change in future releases.

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
