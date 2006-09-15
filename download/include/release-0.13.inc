<h2>New in release 0.13 of the Mercury distribution</h2>

<h3>HIGHLIGHTS</h3>

Changes to the Mercury language:

<ul>

<li>The Mercury typeclass system now supports functional dependencies.

<li>A new language construct allows programmers to promise that any given
    goal is pure or semipure.

<li>Two new language constructs allow programmers to promise that all
    solutions of a given goal are equivalent with respect to the relevant
    equality theories.

<li>We now have support for optional module initialisation and finalisation.

<li>We now have support for module-local mutable variables.

<li>We now have support for recognizing switches in which multiple switch arms
    have shared code.

<li>A new pragma allows programmers to promise that in a predicate or function
   defined by mode-specific clauses, the mode-specific definitions have
   equivalent semantics.

<li>We now allow users to control how each argument of a `pragma memo' predicate
    is tabled.

<li>Support for the old-style lambda, mode and pragma syntax has been removed.

<li>':' is now the type qualification operator, not a module qualifier.

<li>To ensure soundness, goals in negated contexts using non-local variables
    with dynamic modes (inst "any") must now be marked as impure.
</ul>

<p>

Changes to the Mercury standard library:

<ul>
<li>We have removed the predicates dealing with runtime type information (RTTI)
  from std_util.m. Any users impacted by this change should look for required
  functionality in the construct, deconstruct and type_desc modules of the
  standard library, in forms that have been mostly unchanged since the
  0.11 release. In most cases, the differences are quite minor, but provide
  more expressive power.

<li>We have moved the all-solutions predicates from std_util.m into a new
  library module, solutions.m.  These predicates are still available in
  std_util.m but these versions are now deprecated.

<li>We have moved the univ type, and related predicates, from std_util.m
  into a new library module, univ.m.

<li>We have moved the maybe type, and related predicates, from std_util.m
  into a new library module, maybe.m.

<li>We have moved the pair type, and related predicates, from std_util.m
  into a new library module, pair.m.

<li>We have moved the unit type from std_util.m into a new library module,
  unit.m.

<li>We have made the predicates semidet_succeed/0, semidet_fail/0 and
  cc_multi_equal/2 into builtins.  Formerly these were exported by std_util.m.

<li>We have added an `injection' module, for reversible maps that are injective.

</ul>

<p>

Changes to the Mercury compiler:

<ul>

<li>The compiler now generates error messages for mismatches between format
  strings and lists of values to be printed in calls to string.format and
  io.format.

<li>The compiler now generates better error messages for determinism errors
  involving single-solution contexts.

<li> We have significantly improved the compiler's performance on predicates
  with many clauses.

<li>We have deleted the old --split-c-files option, as it conflicted with the
  implementation of module initialisation and finalisation.

</ul>

<p>

Portability Improvements:

<ul>

<li>We've ported Mercury to the x86_64 (AMD64 / Intel EMT64) architecture.

<li>We've made the implementation compatible with gcc 4.1.

</ul>
<p>

Changes to the Mercury debugger:

<ul>

<li>Users can now see a listing of the source code lines referred to by the
  current environment (see the documentation for the `list' command in
  the Mercury Users' Guide).

<li>Users can now keep hold of a term, referring to it even when execution has
  left the goal at which the term was available as the value of a program
  variable.

<li>Users can now see the set of places where two terms differ from each other.


<li>The `set' command has been replaced by several other commands: the `format',
  `format_param', `list_context_lines', `list_path', `xml_browser_cmd',
  `xml_tmp_filename', `fail_trace_counts', `pass_trace_counts' and
  `max_io_actions' commands.


<li>The `save_to_file' command has been renamed the `dump' command.

<li>The `save' command now saves the entire persistent state of the debugger
  (with one small exception that cannot be reestablished by an mdb command from
  an arbitrary point of execution).

<li>The declarative debugger now supports an `undo' command, and allows users to
  select the search algorithm.

<li>The declarative debugger can now exploit information from the "code
  footprints" of passed and failed test cases to find bugs with fewer
  questions. We have also added two tools, mslice and mdice, to manipulate
  files containing such footprints.

<li>Subterm dependency tracking in the declarative debugger is now significantly
  faster.

</ul>

<p>

Changes to the compiler backends:

<ul>

<li>We have implemented an optimization, --optimize-constructor-last-call,
  that can turn recursive calls that are followed only by unifications that
  construct output arguments into tail calls. This can reduce the stack space
  requirements of the predicates to which it is applicable from linear
  in the size of the input data to constant.

<li>We have implemented an optimization, --tuple, that can replace several
  arguments that are usually passed to predicates together with a single
  tuple. This can reduce parameter passing overheads.

<li>The compiler can now optimize away the trail manipulation code from parts
  of the program that cannot affect the trail.

<li>The compiler now optimizes away any instructions referring to values
    of dummy types. A type is a dummy type if it has one function symbol of
    arity zero.

<li>Higher order calls are now cheaper on the low level C backend.

</ul>

<p>

Changes to the extras distribution:

<ul>

<li>We've added a library of data structures designed to work with
    solver types. 

<li>We've added a library to generate Windows installer packages.

<li>We've added a program to generate optimisation flags for the compiler.

</ul>

<p>

<h3>DETAILED LISTING</h3>

Changes to the Mercury language:

<ul>

<li>We have added support for functional dependencies to the typeclass system.
  See the "Type classes" section of the Mercury Language Reference Manual for
  details.

<li>A new language construct allows programmers to promise that any given
  goal is pure or semipure. Given Goal, a goal that uses impure and/or
  semipure code, the goal
<pre>
	  promise_pure ( Goal )
</pre>
  promises that Goal presents a pure interface. Given Goal, a goal that
  uses impure code, the goal
<pre>
	  promise_semipure ( Goal )
</pre>
  promises that Goal presents a semipure interface.

<li>A new language construct allows programmers to promise that all solutions
  of a given goal are equivalent with respect to the relevant equality
  theories. Given Goal, a goal that computes values for two variables,
  X and Y, the goal
<pre>
  	promise_equivalent_solutions [X, Y] ( Goal )
</pre>
  promises that all solutions of Goal are equivalent with respect to the
  equality theories of the types of X and Y. This means that the
  promise_equivalent_solutions goal will be det if Goal is cc_multi,
  and that the promise_equivalent_solutions goal will be semidet if Goal
  is cc_nondet.
  <p>
  A related language construct allows programmers to promise that although
  the solutions of a given goal are not necessarily equivalent with respect
  to the relevant equality theories, it is nevertheless immaterial which one
  is chosen in a particular context. The language construct is the `arbitrary'
  goal, and the context is established by a `promise_equivalent_solution_sets'
  goal. Consider a type representing maps from keys to values which is
  implemented using 2-3 trees. In such a type, the precise shape of the tree
  doesn't matter; two trees should be considered equal if they contain the same
  set of keys and map them to the same values:
<pre>
  :- type tree23(K, V)
  	--->	two(tree23(K, V), K, V, tree23(K, V)
  	;	three(tree23(K, K, V, tree23(K, V), K, V, tree23(K, V))
	where equality is tree23_equal
	and comparison is tree23_compare.
</pre>
  Two values of e.g. type tree23(int, string) may differ in their top level
  function symbol even through they denote the same map. Deconstructing a
  value of such a type may therefore theoretically yield either "two" or
  "three" as the top level function symbol, although in practice which one
  you get is determined by the concrete structure of the term. Unifications
  of such values with specific function symbols are therefore permitted only
  in committed choice contexts. Unfortunately, one cannot simply put the
  deconstruction into the scope of a promise_equivalent_solutions goal,
  since the solutions are not equivalent in all contexts. However, the
  solutions will be equivalent in *some* contexts. Consider this function
  to count the number of key-value pairs in the map:
<pre>
  count(Tree) = Count :-
  	promise_equivalent_solution_sets [Count] (
		(
			arbitrary [Tree1, Tree2] (
				Tree = two(Tree1, _Key, _Value, Tree2)
			),
			Count = 1 + count(Tree1) + count(Tree2)
		;
			arbitrary [Tree1, Tree2, Tree3] (
				Tree = three(Tree1, _Key1, _Value1, Tree2,
					_Key2, _Value2, Tree3)
			),
			Count = 2 + count(Tree1) + count(Tree2) + count(Tree3)
		)
	).
  </pre> 
  <p>
  The construct `arbitrary [Tree1, Tree2] Goal', where Goal computes Tree1
  and Tree2, tells the compiler that it is OK to commit to the first solution
  of Goal, because regardless of whether the goal succeeds and if so with
  which values of Tree1 and Tree2, the set of solutions of the surrounding
  `promise_equivalent_solution_sets [Count] Goal' will not be affected.
  Regardless of whether Tree is bound to "two" or "three", the body of count
  will compute the right value for Count.
  <p>
  A goal of the form `arbitrary [Vars] Goal' will be det if Goal is cc_multi,
  and it will be semidet if Goal is cc_nondet. Goals of that form may occur
  only inside `promise_equivalent_solution_sets' goals. There is no restriction
  on the determinism of `promise_equivalent_solution_sets' goals.

<li>We have added support for optional module initialisation.  See the 
  "Module initialisation" section of the Mercury Language Reference
  Manual for details.

<li>We have added support for optional module finalisation.  See the
  "Module finalisation" section of the Mercury Language Reference
  Manual for details.

<li>We have added support for module-local mutable variables.
  See the "Module-local mutable variables" section of the Mercury Language
  Reference Manual for details.

<li>We now have support for recognizing switches in which multiple switch arms
  have shared code. Where previously programmers had to write code like this
  <pre>
  (
  	X = a,
	... code for a ...
  ;
  	X = b(...),
	... code for b ...
  ;
  	X = c,
	... code for c ...
	... shared code ...
  ;
  	X = d(...),
	... code for d ...
	... shared code ...
  )
  </pre>
  to have the disjunction recognized as a switch on X, they can now write
  code like this:
  <pre>
  (
  	X = a,
	... code for a ...
  ;
  	X = b(...),
	... code for b ...
  ;
  	(
		X = c,
		... code for c ...
	;
		X = d(...),
		... code for d ...
	),
	... shared code ...
  )
  </pre>

<li>If a predicate or function is defined by mode-specific clauses, like this:
    <pre>
	reversible_sort(Raw::in, Sorted::out) :-
		list.sort(Raw, Sorted).
	reversible_sort(Raw::out, Sorted::in) :-
		is_sorted(Sorted),
		list.perm(Sorted, Raw).
     </pre>
  the compiler by default assumes that the definitions of the different modes
  have different semantics. Programmers can tell the compiler that the
  mode-specific definitions, though syntactically distinct, are semantically
  equivalent by including a pragma:
<pre>
  :- pragma promise_equivalent_clauses(reverse_sort/2).
</pre>

<li>To ensure soundness, goals in negated contexts using non-local variables
  with dynamic modes (inst "any") must now be marked as impure.
  <p>
  If a goal uses a variable with a dynamic mode (inst "any"),
  and that goal occurs inside a negated context (such as the
  condition of an if-then-else, or a lambda expression),
  and the variable also occurs outside of that negated context,
  then the compiler will infer that goal to be impure,
  and so such goals must normally be marked as "impure".
  <p>
  This change was required because Mercury implements negation using
  the standard negation-as-failure approach, which is not sound if the
  negated goal binds any non-local variables.
  <p>
  As usual, the programmer can use "promise_pure" if they are
  sure that the goal is in fact pure, e.g. because they know that
  the goal inside the negation will not instantiate the variable.

</ul>

<p>

Changes to the Mercury standard library:

<ul>

<li>We have added the function `divide_equivalence_classes' to the `eqvclass'
  module.

<li>We have added an `injection' module, for reversible maps that are injective.

<li>We have added list.foldl_corresponding/5, list.foldl2_corresponding/7,
  list.map2_foldl2/8 and list.det_split_list/4.

<li>We have added string.word_wrap/2.

<li>We have added set.fold4/10.

<li>We have added semidet_true/0 and semidet_false/0 as synonyms for
  semidet_succeed/0 and semidet_fail/0.

<li>We have added impure_true/0 and semipure_true/0.

</ul>

<p>

Changes to the Mercury compiler:

<ul>

<li>The compiler now generates error messages for known mismatches between
    format strings and lists of values to be printed in calls to
    string.format and
    io.format, unless the user specifies the --no-warn-known-bad-format-call
    option.

<li>If the user specifies the --warn-unknown-format-call option, the compiler
  will also generate error messages for calls to string.format and io.format
  in which the format string or the structure of the list of values to be
  printed are not statically available.

</ul>

<p>

Changes to the extras distribution:

<ul>

<li>We've added a library of data structures designed to work for solver types. 
  <p>
  The module extras/solver_types contains versions of the standard
  library's array, assoc_list, list and map modules that are designed to
  work with terms that have inst `any'.

<li>We've added a library to generate Windows installer packages.
  <p>
  The directory extras/windows_installer_generator contains a library to
  generate Wix source files.  WiX is an XML language that is used to generate
  Microsoft Windows Installer (.msi) packages.

<li>We've added a program to generate optimisation flags for the compiler.
  <p>
  The directory extras/gator contains a program to search for the
  optimal set of compiler flags for a given program.  The search
  algorithm used is a genetic algorithm, which can run in parallel over
  multiple hosts (by default, 1).

</ul>
