<h2>Implementation Limitations</h2>

The current implementation does not yet
completely implement the Mercury language.
The main limitations of the current implementation are the following:

<ul>
<li>
We do not allow definite aliasing in the mode system.
Without this, partially instantiated modes are unusable, 
and so are nested unique modes.
<li>
The compiler does not yet use structure reuse or compile-time
garbage collection to exploit unique modes.
<li>
It is not possible to give both `cc_multi' and `multi'
(or `cc_nondet' and `nondet') determinisms for the same mode of a predicate.
<li>
The order of mode declarations is significant:
unique mode declarations must precede non-unique mode declarations.
</ul>

In addition, design decisions in this implemenation have imposed
the following limits:

<ul>
<li>
Predicates and functions can have at most about 1000 arguments.
<li>
Higher-order terms can have at most about 500 arguments.
</ul>

These limits can be lifted (with some effort), but would possibly incur
performance penalties. Contact the Mercury team
(<a href = "mailto:mercury@cs.mu.oz.au">mercury@cs.mu.oz.au</a>)
if you find these limits are affecting your application.
