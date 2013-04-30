<h2>About Mercury</h2>

<p>
Mercury is a pure logic programming language intended for the creation
of large, fast, reliable programs.
The syntax of Mercury is based on the syntax of Prolog, but semantically
the two languages are very different due to Mercury's purity, its type,
mode, determinism and module systems.
</p>

<p>
The main features of Mercury are:
</p>

<ul class="indentlist" id="featureslist">
    <li>
    <h3>
    Mercury is purely declarative: predicates and functions in
    Mercury do not have non-logical side effects.
    </h3>
    <p>
    Mercury does I/O through built-in and library predicates that
    take an old state of the world and some other parameters, and
    return a new state of the world and possibly some other
    results. The language requires that the input argument
    representing the old state of the world be the last reference
    to the old state of the world, thus allowing the state of
    the world to be updated destructively. The language also
    requires that I/O take place only in parts of the program where
    backtracking will not be needed.
    </p>
    <p>
    Mercury handles dynamic data structures by providing several abstract
    data types in the standard Mercury library that manage collections of
    items with different operations and tradeoffs.
    Programmers can also create their own abstract data types.
    </p>
    </li>

    <li>
    <h3>
    Mercury is a strongly typed language.
    </h3>
    <p>
    Mercury's type system is based on many-sorted logic with parametric polymorphism, very
    similar to the type systems of modern functional languages such
    as ML and Haskell. Programmers must declare the types they need
    using declarations such as
    </p>
    <pre>
    :- type list(T) --->    [] ; [T | list(T)].
    :- type maybe(T) --->    yes(T) ; no.
    </pre>
    <p>
    They must also declare the type signatures of the predicates they
    define, for example
    </p>
    <pre>
    :- pred append(list(T), list(T), list(T)).
    </pre>
    <p>
    The compiler infers the types of all variables in the program.
    Type errors are reported at compile time.
    </p></li>


    <li>
    <h3>
    Mercury is a strongly moded language.
    </h3>
    <p>
    The programmer must
    declare the instantiation state of the arguments of predicates
    at the time of the call to the predicate and at the time of the
    success of the predicate. Currently only a subset of the
    intended mode system is implemented. This subset effectively
    requires arguments to be either fully input (ground at the time
    of call and at the time of success) or fully output (free at
    the time of call and ground at the time of success).
    </p>
    <p>
    A predicate may be usable in more than one mode. For example,
    append is usually used in at least these two modes:
    </p>
    <pre>
    :- mode append(in, in, out).
    :- mode append(out, out, in).
    </pre>
    <p>
    If a predicate has only one mode, the mode information can be
    given in the predicate declaration.
    </p>
    <pre>
    :- pred factorial(int::in, int::out).
    </pre>
    <p>
    The compiler will infer the mode of each call, unification and
    other builtin in the program. It will reorder the bodies of
    clauses as necessary to find a left to right execution order;
    if it cannot do so, it rejects the program. Like type-checking,
    this means that a large class of errors are detected at
    compile time.
    </p></li>


    <li>
    <h3>
    Mercury has a strong determinism system.
    </h3>
    <p>
    For each mode of each
    predicate, the programmer should declare whether the predicate
    will succeed exactly once (det), at most once (semidet), at
    least once (multi) or an arbitrary number of times (nondet).
    These declarations are attached to mode declarations like
    this:
    </p>
    <pre>
    :- mode append(in, in, out) is det.
    :- mode append(out, out, in) is multi.

    :- pred factorial(int::in, int::out) is det.
    </pre>
    <p>
    The compiler will try to prove the programmer's determinism
    declaration using a simple, predictable set of rules that seems
    sufficient in practice (the problem in general is undecidable).
    If it cannot do so, it rejects the program.
    </p>
    <p>
    As with types and modes, determinism checking catches many
    program errors at compile time. It is particularly useful if
    some deterministic (det) predicates each have a clause for each
    function symbol in the type of one of their input arguments,
    and this type changes; you will get determinism errors for all
    of these predicates, telling you to put in code to cover the
    case when the input argument is bound to the newly added
    function symbol.
    </p></li>

    <li>
    <h3>
    Mercury has a module system.
    </h3>
    <p>
    Programs consist of one or more
    modules. Each module has an interface section that contains
    the declarations for the types, functions and predicates
    exported from the module, and an implementation section that
    contains the definitions of the exported entities and also
    definitions for types and predicates that are local to the
    module. A type whose name is exported but whose definition is
    not, can be manipulated only by predicates in the defining
    module; this is how Mercury implements abstract data types.
    For predicates and functions that are not exported, Mercury
    supports automatic type, mode, and determinism inference.
    </p></li>

    <li> <h3>Mercury supports higher-order programming,
    with closures, currying, and lambda expressions.
    </h3></li>
<br/>
    <li>
    <h3>
    Mercury is very efficient
    </h3>
    <p>
    Strong types, modes, and determinism
    provide the compiler with the information it needs to generate
    very efficient code.
    </p>
</ul>

<p>
The Mercury compiler is written in Mercury itself. It was bootstrapped
using NU-Prolog and SICStus Prolog. This was possible because after
stripping away the declarations of a Mercury program, the syntax of the
remaining part of the program is mostly compatible with Prolog syntax.
</p>
<p>
The Mercury compiler compiles Mercury programs to C, which it uses as a
portable assembler. The system can exploit some GNU C extensions to the
C language, if they are available: the ability to declare global
register variables, the ability to take the addresses of labels, and
the ability to use inline assembler. Using these extensions, it
generates code that is significantly better than all previous Prolog
systems known to us. However, the system does not need these
extensions, it will work in their absence.
</p>
