<h2>About Mercury</h2>
<h3>What is Mercury?</h3>


<div class="quote" style="max-width: 300px; min-width: 250px;float: right; margin: 20px 10px 40px 40px; border: 1px solid white;" align="left">
<h2 style="font-size: 24px;color: #f15a24; font-style: italic;">“ The language is designed with software engineering principles in mind.</h2>
</div>


<p>
Mercury is based on the logic programming language Prolog. It has the same syntax, and the same basic concepts such as the SLD resolution algorithm. It can ostensibly be viewed as a pure subset of Prolog with strong types and modes. As such, it is often compared to its predecessor, both in terms of features, and run-time efficiency.
</p>

<p>
The language is designed with software engineering principles in mind. Unlike the original implementations of Prolog, it has a separate compilation phase, rather than being directly interpreted, which allows a much wider range of errors to be caught before running a program. It features a strict static type and mode system and a module system.
</p>
<p>
Due to the use of information obtained at compile time (such as type and mode information), programs written in Mercury typically perform significantly faster than equivalent programs written in Prolog. Its authors claim that Mercury is the fastest logic language in the world, by a wide margin.
</p>
<p>
Mercury is a purely declarative language, unlike Prolog, since it lacks "extra-logical" Prolog statements such as "cut" and imperative I/O. This enables advanced program optimization, but can make certain programming constructs (such as a switch over a number of options, with a default[dubious – discuss]) harder to express. (Note that while Mercury does allow impure functionality, this serves primarily as a way of calling foreign language code. All impure code must be explicitly marked.) Operations which would typically be impure (such as input/output) are expressed using pure constructs in Mercury using linear types, by threading a dummy "world" value through all relevant code.
</p>
<h3>What makes Mercury so Special?</h3>
<ul class="nonindentlist">
<li>Mercury is purely declarative: predicates and functions in Mercury do not have non-logical side effects.</li>
<li>Mercury is strongly typed language</li>
<li>Mercury is strongly moded language</li>
<li>Mercury has a strong determinism system</li>
<li>Mercury has a module system</li>
<li>Mercury supports higher-order programming, with closures, currying, and lambda expressions. </li>
<li>Mercury is very efficient</li>
</ul>

