<h2>New in release 0.10.1 of the Mercury distribution</h2>

This is mainly a bug-fix release.
<p>

There are however some new packages in the mercury-extras distribution:
<ul>
<li> lex: a lexical analyzer library for Mercury.
<li> curs: a simplified binding to the ncurses/panel libraries for terminal I/O.
</ul>

<h2>New in release 0.10 of the Mercury distribution</h2>

<h3>HIGHLIGHTS</h3>

Changes to the Mercury language:
<ul>
<li> We've added support for explicit type qualification.
<li> We've added support for tuples.
<li> We've added support for record syntax.
<li> Type class methods can now be defined by listing the clauses
     directly in the instance declaration.
<li> The syntax for defining insts and modes has been changed.
     The old syntax is still accepted but is deprecated.
</ul>

Changes to the Mercury standard library:
<ul>
<li> We've added several new standard library modules:
  <ul>
  <li> `pprint', for pretty printing.
  <li> `counter', for managing counters.
  <li> `enum', a typeclass for types which can be converted to and from
       integers.
  <li> `sparse_bitset', an abstract data type for storing sparse sets of
       integers or enumerations.
  <li> `bitmap', an abstract data type for storing sets of integers.
  <li> `hash_table', an generic hash table implementation.
  </ul>
<li> The `store' module now makes use of existential types.
</ul>

Changes to the Mercury implementation:
<ul>
<li> We've implemented a new back-end for the Mercury compiler.
  This features improved compilation speed, offers better portability,
  and sometimes generates substantially better code.
  (The original back-end is still included.)
<li> There's a version of the new back-end which generates code
  for Microsoft's new .NET system.
<li> There's a version of the new back-end which compiles directly
  to assembler, using the GCC back-end.
<li> Various improvements to `mtags'.
</ul>

Additional packages in the mercury-extras distribution:
<ul>
<li> Moose: a parser generator for Mercury.
<li> concurrency: support for multi-threading/concurrency.
<li> stream: an implementation of generic I/O streams, using type classes.
<li> xml: a library for parsing XML.
</ul>

<h3>DETAILED LISTING</h3>

<h4>Changes to the Mercury language</h4>

<ul>
<li> We've added support for explicit type quantification.<p>

  An expression of the form "Term `with_type` Type",
  e.g. "X `with_type` list(int)", can be used in place of
  the specified Term to constrain the type of that term.
  This is sometimes useful for resolving type ambiguities,
  which can occur as a result of overloading or polymorphism.<p>

  See the "Explicit type quantification" and "Variable scoping"
  sections of the language reference manual for details.<p>

<li> We've added support for tuple types, similar to those in most
  other functional languages. Tuples use the syntax `{A, B, ...}'.
  See the "Builtin types" section of the "Types" chapter of the
  Mercury Language Reference Manual for details.<p>

<li> We've added support for record syntax, so that fields of
  constructors can be conveniently extracted and updated
  without writing lots of trivial access predicates.
  See the "Field access functions" section of the "Types" chapter
  of the Mercury Language Reference Manual for details.<p>

  Note that the syntax has changed slightly since the version
  that appeared in the release of the day in early January 2000.
  `Value =^ field' is now the syntax for DCG field selection,
  rather than `Value := ^ field'. Field update functions are
  named 'field :=' rather than 'field:='. We also allow field
  access functions to take extra arguments.<p>

<li> The behaviour of the Mercury parser (parser__read_term) applied
  to terms with functor `{}/N' has been changed. The parser from
  Mercury 0.9 parsed "{1, 2, 3}" as `{}(','(1, ','(2, 3)))'.
  It is now parsed as `{}(1, 2, 3)'.<p>

<li> The operator `^' is now used for record syntax, and cannot be
  used for user-defined functions or constructors.<p>

<li> You can now declare functions by giving a determinism but without
  supplying the modes.  The default function modes will be assumed.
  This is particularly useful for partial functions.<p>
  For example:
  <pre>
  	GetEvens = list__filter_map(
		(func(X) = X is semidet :- X mod 2 = 0)).
  </pre><p>

<li> We've generalized the higher-order term syntax a little:
  in `Foo(Args)', we now allow Foo to be any term, not just
  a variable.<p>

<li> The syntax for defining insts and modes has been changed to be 
  more uniform.  For example, the old syntax
  <pre>
  	:- inst myfree = free.
  	:- mode out :: myfree -> ground.
  </pre>
  would now be written
  <pre>
  	:- inst myfree == free.
  	:- mode out == myfree >> ground.
  </pre>
  The old syntax is still accepted but is deprecated.  Support for it may
  eventually be dropped.<p>

<li> Type class methods can now be defined by listing the clauses
  directly in the instance declaration.  You no longer need to define a
  separate predicate or function for each type class method definition.<p>
</ul>

<h4>Changes to the standard library</h4>

<ul>
<li> We've added new predicates map__foldl2, tree234__foldl2,
  std_util__aggregate2, and builtin__promise_only_solution_io.<p>

<li> We've added function versions of std_util__solutions,
  std_util__solutions_set, std_util__aggregate, map__search,
  map__insert and map__update.<p>

<li> We've added functions to allow record syntax to be used
  with some of the types in the standard library:<p>
	array__elem/2, 'array__elem :='/3,
	bt_array__elem/2, 'bt_array__elem :='/3,
	map__elem/2, 'map__elem :='/3,
	map__det_elem/2, 'map__det_elem :='/3.<p>

<li> We've added a pretty printing module, `pprint', to the standard library.<p>

<li> We've added a new function to the Mercury standard library:
	std_util__construct_tuple/1.<p>

<li> Functions `int:^/2' and `integer:^/2' have been removed.
  Use `int__xor/2' and `integer__xor/2' instead.
  The operator `^' is now used for record syntax.<p>

<li> We've added reverse modes for `int__xor'.<p>

<li> There is a new predicate `random__permutation', for
  computing a random permutation of a list.<p>

<li> There is a new library module `counter' for managing counters.<p>

<li> We've added a new library module `sparse_bitset', which implements
  an abstract data type for storing sets of integers.<p>

<li> There is a new library module `enum' which contains a typeclass
  describing types which can be converted to and from integers.<p>

<li> Four new parametric instantiations `maybe/1', `maybe_error/1',
  `pair/2' and `pair/1' have been added to the `std_util' library
  module.  These make it more convenient to work with non-ground
  terms of the corresponding type.<p>

<li> The `store' module now makes use of existential types.<p>

  The `store__init/1' predicate and the `store__some_store_type' type
  are now deprecated; the new existentially typed predicate
  `store__new/1' should be used instead.<p>

<li> We've reimplemented the `string__format/3' procedure.<p>

  The new implementation is a lot more efficient and fixes several
  bugs in the old implementation.  The new implementation also
  eliminates some subtle differences in behaviour between
  string__format and the standard ANSI/ISO C printf() function:
 <ul>
	<li> For the old string__format, the default precision was 15
	  (i.e. the number of significant figures in an IEEE double
	  precision float), but for ISO C's printf(), the default
	  precision is 6.

	<li> For the old string__format, for the e, E, f, F, g and G conversions,
	  the "precision" field in the format always specified the
	  number of significant figures, but for ISO C's printf(), the
	  precision only specifies as the number of significant
	  figures for the g and G conversions, whereas for the e, E,
	  f, and F conversions the precision specifies the number of
	  digits after the decimal point.

	<li> For the old string__format, floating point numbers were
	  truncated to the specified precision, but for ISO C's
	  printf(), they are rounded rather than being truncated.
  </ul><p>

<li> We've added a new function, math__solve_quadratic/3.<p>
<li> We've changed the semantics of deconstruct/4, in light of the introduction
  of existentially quantified types. Previously, if deconstruct/4 was given
  a value of type `univ' it automagically unwrapped it and gave back the
  functor, arity and arguments of the unwrapped value. This behaviour was
  not documented, but made sense because there was no way to unwrap a
  univ without knowing (or guessing) its type. Now that univ is defined
  as a normal (existentially quantified) type, this behaviour is unnecessary,
  and a wart besides, so has been removed. If you have a univ and you want
  to get the unwrapped value's functor, arity and arguments, then you can
  call "univ_value(Univ)" to extract the value before calling deconstruct.
  (Doing that also works in Mercury 0.9 and Mercury 0.10.)<p>

<li> We've addes some new library predicates: assoc_list__keys_and_values,
  list__map2 and list__map3.<p>

<li> We've added func versions of the remaining preds in int.m that
  did not already have them.<p>

<li> We've added a new `bitmap' library module.<p>

<li> We've added std_util__dynamic_cast/2 for type-safe runtime dynamic
  type casting for ground types.<p>

<li> We've extended the array module with array__sort/1, array__foldl/3 and
  array__foldr/3.<p>

<li> We've added a new `hash_table' library module.<p>


</ul>

<h4>Changes to the Mercury implementation</h4>

<ul>
<li> We've implemented a
  <a name="hlc">new back-end for the Mercury compiler.</a><p>

  The new back-end, which is enabled by using the `--high-level-code'
  (or `-H') option or the `hlc.gc' grade, generates much higher-level
  C code that does not require the use of GNU C extensions such as
  global register variables or non-local gotos.  It is also simpler
  and more portable than the old back-end.<p>
  
  The main drawback of the new back-end is that for tail calls it only
  optimizes direct tail recursion; loops written using tail calls
  between two or more mutually recursive procedures are not guaranteed
  to use constant stack space.<p>

  Preliminary benchmarking suggests that compilation speed is probably
  about 20% better with the new back-end, and the generated executables
  are likely to be smaller (though this will depend on the platform,
  optimization options, etc.).  Speed of the generated code varies:
  sometimes it is better than the old back-end, sometimes it is worse.
  There are a few optimizations that we have not yet implemented for
  the new back-end that might make a significant difference for some
  applications.  But there are also some optimizations which we have
  implemented for the new back-end that have not been implemented for
  the old back-end.  We encourage those for whom performance is
  important to try their application with both the old and new
  back-ends and compare for themselves.<p>

  The new back-end is not yet quite as mature or complete as the old back-end.
  It does not yet support the following standard Mercury features:
  <ul>
  	<li> abstractly exported equivalence types defined as `float'
	<li> calling compare/3, or the `in = in' mode of unification,
	  for certain standard library types (std_util__type_desc/0,
	  and std_util__type_ctor_desc/0).
	<li> calling copy/2 on higher-order terms
  </ul><p>
  It also does not support the following implemention-specific
  features that the old back-end supports:
  <ul>
	<li> demangling of symbol names in the profiler
	<li> fact tables for procedures with determinism `nondet' or `multi'
  	<li> the Mercury debugger (mdb)
  	<li> the Morphine trace analysis system
	<li> the Aditi deductive database interface
  	<li> the `--split-c-files' option
  	<li> the `--introduce-accumulators' option
	<li> dynamic linking (via the dl__mercury_sym procedure in
	  extras/dynamic/dl.m in the mercury-extras distribution)
	  for procedures with arguments of type `float' or `char'
  </ul><p>

<li> There's a new back-end that targets .NET.<p>

  Thanks to Microsoft's generous and ongoing support, both financial
  and otherwise, we've been able to port Mercury to Microsoft's new
  .NET system.  There's another new back-end for the Mercury compiler,
  based on the `--high-level-code' back-end, that compiles to IL, the
  Microsoft .NET Intermediate Language.<p>

  This back-end is enabled using the new `--target il' option
  (or just `--il' for short), or the `ilc' grade.<p>

  Compiler support for this new back-end is mostly complete,
  but large parts of the standard library are still not yet
  implemented for this new port.<p>

  This is still work in progress.<p>

  For more details, see the README.DotNet file, and
  <a href="http://www.cs.mu.oz.au/research/mercury/dotnet.html">
	http://www.cs.mu.oz.au/research/mercury/dotnet.html</a>.<p>

<li> Native code compiler.<p>

  There's a new back-end for the Mercury compiler that compiles
  directly to assembler, rather than than going via C.  This
  back-end is enabled using the new `--target asm' option.<p>

  This new back-end is implemented by linking the Mercury compiler
  with the (relatively) language independent GNU Compiler Collection
  back-end.  In other words, there is now a Mercury front-end for GCC.<p>

  Note that this should be considered as a beta release of the native
  code compiler.  Furthermore our current version of the native code
  compiler is based on an unreleased snapshot version of the GCC
  back-end.<p>

  So far we have only tested it on i686-pc-linux-gnu (Intel x86-based
  PCs running Linux).  But in theory it should work fine on other
  platforms too.<p>

  For more details see <a href="gcc-backend.html">here</A>.<p>

<li> The old back-end now generates faster code at low optimization levels.<p>

<li> The compiler is now a little bit faster.<p>

<li> The names of some of the `--enable-*' options to `configure' have changed.
  See the output of `configure --help' for details.<p>
</ul>

<h4>Changes to the development environment</h4>

<ul>
<li> The debugger has been improved in several respects:
  <ul>
  <li> It has some new forward movement commands:
    <ul>
    <li> `next' steps over a call, like gdb's `next' command;
    <li> `exception' skips forward until an exception is thrown.
    </ul>
  <li> It can perform retry across I/O.
  <li> It can now print parts of terms, and fields of terms can be
    specified by field name as well as by position number.
  <li> It has a more flexible mechanism for setting browsing parameters.
  <li> It now handles ambiguous procedure specifications in "break"
    commands gracefully.
  <li> The state of the debugger can now be saved and restored, using the
    `save' and `source' commands (respectively).
  </ul><p>

  For details, see the documentation of the `next', `exception',
  `break', `set', and `save' commands in the "Debugger commands" section
  of the "Debugging" chapter of the Mercury User's Guide.  (The changes
  to `retry' and `print' have unfortunately not been documented yet.)<p>

<li> Several improvements have been made to `mtags' to make it easier to
  find predicate/function definitions and to improve support for
  enhanced features of Vim.  The command-line options to `mtags' have
  changed and Vim-style tags files are now output as the default (but
  will work with Vi as well).  Do `mtags --help' for more information.
</ul>
