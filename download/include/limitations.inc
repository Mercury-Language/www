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
Type and mode inference are a bit imperfect.
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
if you find these limits are affecting your application.
