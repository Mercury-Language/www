<h2>New in release 0.4 of the Mercury distribution</h2>

<ul>
<li>
Higher-order predicates and lambda expressions are now implemented.
(This means that `call/{1,2,3,4}' and `solutions/2' are now usable;
unfortunately call/{5,6,...} are still not yet implemented.)
<li>
Unique modes are now partially implemented (but don't use them
for anything except I/O, as the implementation is not yet complete).
<li>
Partially instantiated modes are now closer to being fully
implemented.
<li>
The installation process is more standard (basically
just `configure; make; make install').
<li>
Autoconfiguration is a bit more robust.
<li>
`msc' and `mnc' now produce somewhat smaller object files.
<li>
Error and warning messages are a little better in some cases.
<li>
Fixed a few code generation bugs.
<li>
Ported to DEC Alpha/OSF and BSDI BSD/386.
<li>
We've improved the efficiency of the 386 port by about 70%.
(50% because asm_fast.gc mode now works on the 386, the rest
due to better optimization).
<li>
We generate better code for calls to `\='.
<li>
We generate better code for `compare/3'.
<li>
A few other new optimizations.
<li>
The profiler now works (see the documentation in the
Mercury User's Guide).
<li>
Some new library predicates, including `string__format'
(like C's sprintf).
<li>
`set__join/2' has been renamed as `set__power_union/2'.
<li>
`list__sort/2' has been renamed as `list__sort_and_remove_dups/2'.
<li>
There is a new `list__sort/2' which does not remove duplicates.
</ul>
