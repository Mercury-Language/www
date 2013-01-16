<h2>Comparing Mercury with Haskell</h2>

Mercury has a lot in common with functional languages.
Functional programmers who are familiar with languages
such as ML and Haskell often ask how Mercury compares
with those languages.

<p>

This web page contains a comparison between the type systems of Mercury and
Haskell 98.  The reason for comparing with Haskell 98 is that Mercury's type
system is more similar to that of Haskell than that of ML, and Haskell 98 is
probably the best documented / most well-known variant of Haskell.  Of course
Hugs and ghc have a lot of extensions of Haskell 98, so in some sense this is
not a "fair" comparison.

<p>

As well as listing the differences in type systems, we also describe
some of the differences in module systems, since there are some close
interactions between the type systems and the module systems.

<p>

There are many other areas in which Mercury and Haskell 98
differ, including
	<ul>
	<li> syntax,
	<li> the way in which the semantics is normally described
	     (predicate calculus versus lambda calculus),
	<li> operational semantics (laziness / order of evaluation),
	<li> exception handling,
	<li> treatment of I/O,
	<li> standard libraries,
	<li> and of course support for logic programming,
	</ul> but we don't yet have point-by-point description of all of those
differences.

<p>

The type systems of Mercury and Haskell 98 are similar in that they both have
the following features:

<ul>
	<li> discriminated union (d.u.) types, with support for named fields
	<li> type synonyms
	<li> higher-order function types (and lambda expressions)
	<li> tuple types
	<li> parametric polymorphism:
		<ul>
		<li> polymorphic d.u. types
		<li> polymorphic type synonyms
		<li> polymorphic functions
		<li> polymorphic recursion
		</ul>
	<li> type classes
	<li> functional dependencies
	<li> type inference
	<li> a similar set of basic types
</ul>

They differ in the following ways:

<ul>
	<li> Different syntax (obviously). <br>
	  But in particular:
	  	<ul>
		<li> Haskell 98 lexically distinguishes
		  constructors (uppercase initial letter)
		  from functions/variables (lowercase initial letter)
		  whereas Mercury distinguishes variables
		  (uppercase initial letter)
		  from functions/constructors (lowercase initial letter).
	  	<li> Haskell 98 permits nested function definitions,
		  Mercury doesn't.  In Mercury you can use variables
		  with higher-order type and initialize them with
		  lambda expressions, of course, but variables
		  are always monorphically typed and functions
		  defined using lambda expressions can't be recursive.
		</ul>

	<li> Haskell 98 has the infamous monomorphism restriction
	  which means that variables are monomorphic
	  unless you give an explicit polymorphic type
	  declaration for them.
	  In Mercury variables are always monomorphic,
	  but because of the lexical distinction between
	  variables and functions, that doesn't seem to lead
	  to the same confusion that the Haskell monomorphism
	  restriction causes.

	<li> Mercury requires type declarations for all functions exported
	  from a module, Haskell 98 doesn't, at least in theory
	  (in practice, current Haskell implementations effectively
	  require explicit type declarations [or worse] in the case of
	  mutually recursive modules).

	<li> For polymorphic recursion,
	  Haskell 98 requires an explicit type declaration,
	  whereas Mercury allows polymorphic recursion with
	  type inference, using a user-tunable iteration limit
	  to ensure termination of the type inference process.

	<li> Haskell 98 allows type classes to define default implementations
	  for methods, whereas Mercury doesn't.

	<li> Haskell 98 allows type class instances to leave some methods
	  undefined, in which case calls to such methods will be
	  run-time errors, whereas Mercury treats undefined methods as
	  a compile time error and requires users to explicitly define
	  methods to call <code>error</code> if that is what they want.

	<li> Haskell 98 supports constructor classes, Mercury doesn't.

	<li> Haskell 98's standard library makes extensive use of
	  type classes, Mercury's doesn't (mainly for historical reasons).

	<li> Mercury allows multi-parameter type classes
	  (however, there are some restrictions on the forms of
	  instance declarations, so this may not be quite as
	  useful as it might first appear).

	<li> Mercury supports existentially typed functions,
	  and existentially typed data types, whereas Haskell 98 doesn't
	  (Hugs, ghc and other Haskell implementations support existentially
	  typed data types, but not existentially typed functions).

	<li> Mercury supports "ad-hoc" overloading (there can be more
	  than one constructor, function or class method with the same
	  name, and the compiler will determine which one each occurence
	  of that name refers to based on the types),
	  Haskell 98 doesn't.
	  (Of course if you make significant use of ad-hoc overloading,
	  this can lead to ambiguities that type checker can't resolve;
	  if such ambiguities occur, you need to use explicit type
	  declarations to resolve them, rather than relying on type
	  inference.)

	<li> In Haskell 98, functions always take a single argument;
	  multiple arguments are handled using currying or tuples.
	  In Mercury, functions can take multiple arguments, and
	  such functions have a type distinct from functions taking
	  tuples or functions returning functions.
	  (Haskell's approach leads to more elegant source code;
	  Mercury's approach has a simpler and more predictable
	  performance model.)

	<li> The semantics of Haskell 98 say that each type has "bottom"
	  as an extra element, to handle laziness.
	  In Mercury, laziness is treated as part of the operational
	  semantics rather than the declarative/denotational semantics,
	  so you don't get the extra "bottom" element in each type.
	  (To a first approximation, Mercury is eager, not lazy.
	  But, since that's a difference in the operational semantics,
	  rather than in the type system, we won't go into the
	  details here, except to note that the first approximation
	  is not the full story.)

	<li> Haskell 98 has two constructs for introducing
	  discriminated union types, <code>data</code> and <code>newtype</code>,
	  which differ in laziness and representation,
	  whereas Mercury uses just one, <code>:- type</code>;
	  Mercury doesn't support lazy constructors,
	  so the laziness distinction is not applicable,
	  and in Mercury the representation effect of <code>newtype</code> is
	  automatic for any type with one constructor and one argument.

	<li> Mercury supports nested modules, Haskell 98 doesn't.
	  So in Mercury you can have abstract types whose definition
	  is only visible in a sub-module, rather than in the
	  whole of the (outermost) module that contains them.

	<li> Mercury's module system allows instance declarations
	  to be public (exported) or local (private), whereas
	  in Haskell instance declarations are always exported.

	<li> Mercury has predicates as well as functions
	  (predicate types are distinct from functions returning bool).
	  This includes supporting existentially typed predicates,
	  predicates as type class methods, predicate lambda expressions,
	  and higher-order predicate types.

	<li> Mercury supports optional dynamic typing, Haskell 98 doesn't.
	  (Hugs/ghc do.  However, their approach of implementing this
	  is a bit cumbersome, since the user has to explictly declare
	  instances of <code>Typeable</code>, and its use of an unchecked
	  cast would be problematic in the presence of untrusted code.)

	<li> The treatment of equality, comparison, automatically derived
	  classes, and RTTI differs considerably between the two
	  languages.  Haskell 98 has built-in type classes Eq, Ord, Enum,
	  Bounded, Read, and Show, and allows instances for these to be
	  automatically derived, if the programmer writes
	  e.g. <code>deriving Eq</code>
	  on the type declaration.  In Mercury, equality is a language
	  construct, not a class method like <code>==</code> in Haskell.
	  Mercury allows user-defined equality, but because this
	  alters the semantic notion of equality, it has very different
	  effects in Mercury than defining <code>==</code> does in Haskell.
	  Mercury's RTTI system allows constructing and deconstructing
	  arbitrary types at runtime, and comparison and (de)serialization
	  (compare, read, and write) are implemented using this.

	<li> Mercury's standard library provides a referentially
	  transparent interface to mutable variables (the store
	  module -- using existential types and unique modes),
	  that is usable from non-I/O code; Haskell 98's doesn't,
	  probably because it would require extensions to the Haskell 98
	  type system.  (Hugs/ghc do provide such an interface,
	  using higher-order functions with explicit universal
	  quantification, and monads, rather than existential types
	  and unique modes.  Other Haskell implementations may do so
	  too.)
</ul>

<p>

Some other differences are related to Mercury's mode system.
Some things which in other languages are part of the type system
are in Mercury handled by the mode system.  In particular,

	<ul>
	<li> Mercury's mode system provides support for subtypes.
	  For example, you can declare that a function whose
	  argument is a discriminated union type accepts only
	  a subset of the possible constructors for that type,
	  and the mode system will enforce this.

	<li> Mercury's mode system provides support for uniqueness,
	  similar to linear types or unique types.  (However,
	  currently there are some significant limitations with
	  this, in particular unique modes can only be used
	  at the top level of a term.)
	  
	</ul>

