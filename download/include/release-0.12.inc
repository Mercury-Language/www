<h2>New in release 0.12.2 of the Mercury distribution</h2>

This release fixes some bugs with `mmc --make' and `--smart-recompilation'.

<h2>New in release 0.12.1 of the Mercury distribution</h2>

This release is primarily a bug-fix release.
It fixes a problem with predicates that have existentially typed
arguments, makes sure that I/O tabling does not inadvertently
inline predicates that have a `:- pragma no_inline' declaration
attached to them, and makes various improvements to the MS-Windows
ports.

<h2>New in release 0.12 of the Mercury distribution</h2>

<h3>HIGHLIGHTS</h3>

Changes to the Mercury language:

<ul>

<li>Infix `.' is now accepted as a module name separator.

<li>Field access syntax can now be used at the top-level in func and mode
  declarations and in the head of a clause for a user-defined field access
  function.

<li>We now support impure higher-order code.

<li>We now allow user-defined comparison predicates.

<li>User-defined equality and comparison predicates for a type are now
  required to be defined in the same module as the type.

<li>Experimental support for user-defined constrained types has been added.

<li>We now support the use of `..' as an infix operator.

</ul>

<p>

Changes to the Mercury standard library:

<ul>

<li>We've added several new modules: cord, for sequences with O(1) consing and
  concatenation, array2d, for two-dimensional arrays, and version_array,
  version_array2d, version_bitmap, version_hash_table, and version_store,
  implementing non-unique versions of these types supporting O(1) access for
  non-persistent use.  A new module term_to_xml has been added for converting
  arbitrary terms to XML documents. Two new modules, set_tree234 and
  set_ctree234, have been added to provide operations on sets with better
  worst-case behavior (but worse constant factors) than the current
  implementation. Ten new modules, svarray, sveqvclass, svmap, svmulti_map,
  svbimap, svset, svbag, svqueue, svrelation and svvarset now provide more
  convenient ways to update arrays, equivalence classes, maps, multi_maps,
  bimaps, sets, bags, queues, relations and varsets in code that uses state
  variables.

<li>New procedures have been added to many of the existing standard library
  modules.  Most notably, these include procedures for creating
  directories and symbolic links, for checking file types and file
  accessibility, for detecting floating point infinities and NaNs.

<li>The dir module now handles Microsoft Windows pathnames correctly.

</ul>

<p>

Changes to the Mercury compiler:

<ul>

<li>We have added optional support for a new type-accurate garbage collector
  as an alternative to using the Boehm et al conservative collector.
  
<li>Better support for incremental program development:
  there's two new compiler options, `--allow-stubs' and `--no-warn-stubs',
  to support execution of incomplete programs.
  
<li>There's a new warning option `--warn-dead-procs' for detecting unreachable
  code.
  
<li>It's now easier to use shared libraries on Linux/x86 systems
  with `mmc --make'.

<li>A new analysis: `--analyse-exceptions'.
  The compiler can use the results of this analysis to try and improve
  some optimizations.

</ul>

<p>

Portability improvements:

<ul>

<li>We have made the implementation compatible with gcc 3.4.

<li>Shared libraries now work on Mac OS X.

</ul>

<p>

Changes to the Mercury debugger:

<ul>

<li>Users can now arrange to have the goal and/or some variables printed
  every time execution arrives at a breakpoint.

<li>Users can now arrange to associate a condition with a breakpoint.
  Execution won't stop at the breakpoint if the condition is false.

<li>Users can now limit the output from stack traces.

<li>Users can now put breakpoints on unify and compare predicates.

<li>Users can now save runtime values to files.

<li>Users can now tell the declarative debugger to trust entire modules or 
  individual predicates or functions.

<li>The declarative debugger can track the origins of subterms.

<li>The declarative debugger can now use the divide-and-query search strategy.

</ul>

<p>

Changes to the compiler back-ends:

<ul>

<li>Improvements to the .NET CLR back-end.

<li>Improvements to the Java back-end.

<li>The cost in disk space of enabling debugging is now much smaller.

</ul>

<p>

Numerous minor improvements to the Mercury standard library.

Changes to the extras distribution:

<ul>

<li>Added easyx, a new Xlib based graphics library suitable for implementing
  simple interactive graphical applications.

<li>Major improvements to the OpenGL binding.

<li>We've added a binding to GLUT (the GL utility toolkit).

<li>The OpenGL, GLUT and Tcl/Tk bindings have been ported to Mac OS X.

</ul>

<p>

<h3>DETAILED LISTING</h3>

Changes to the Mercury language:

<ul>

<li>The deprecated support for NU-Prolog style `when' declarations has been
  removed.	

<li>We have experimental support for user-defined constrained types, as
  documented in the reference manual section on "Solver types".  Variables
  of a constrained type can have constraints placed upon them before they
  are instantiated, allowing for various styles of constraint logic
  programming.

<li>We now allow user-defined comparison predicates, using the syntax
  :- type t ---&gt; t where equality is unify_t, comparison is compare_t.

  See the "User-defined equality and comparison" chapter of the
  Mercury Language Reference Manual for details.

<li>User-defined equality and comparison predicates for a type are now
  required to be defined in the same module as the type.

<li>Infix `.' is now accepted as a module name separator.  Hence it is
  now possible to write io.write_string and list.member to mean the
  same thing as io__write_string and list__member, for instance.  This
  has required changing the associativity of `.' from xfy to yfx and
  from precedence 600 to 10.

<li>Field access notation can now be used at the top-level in func and
  mode declarations and in the head of a clause for a user-defined
  field access function.  That is, one can now write
<pre>
  	:- func a ^ f(b) = c.
	:- mode a ^ f(b) = c is <detism>.
	A ^ f(B) = ...
</pre>

<li>Mercury's support for impure code now also includes support for
  impure higher-order code.
<p>  
  Specifically, impurity annotations can be used on higher-order types,
  lambda expressions, and higher-order calls; higher-order terms are
  permitted to call impure or semipure code provided that they are
  appropriately annotated as such.
<p>
  For details, see the "Higher-order impurity" section of the "Impurity"
  chapter of the Mercury Language Reference Manual.

<li>`..' is now accepted as an infix operator.  That means a list of
  successive integers can now be written as X .. Y.  For example:
<pre>
	1 .. 5 = [1, 2, 3, 4, 5]
</pre>
</ul>

<p>

Changes to the Mercury standard library:

<ul>
<li>We've add the function queue.from_list/1 as a synonym for
  queue.list_to_queue/1, function queue.to_list/1 (and predicate
  queue.to_list/2) as the converse of queue.from_list/1, queue.put_on_front/2
  (and predicate queue.put_on_front/3) to put items on to the front of a
  queue, queue.put_list_on_front/2 (and predicate queue.put_list_on_front/3)
  to put a list of items on to the front of a queue, and predicate
  queue.get_from_back/3 which removes the last element from a queue.

<li>We've added the function pqueue.from_assoc_list/1 as a synonym
  for pqueue.assoc_list_to_pqueue/1.

<li>We've added functions set.from_list/1 and set.from_sorted_list/1
  as synonyms for set.list_to_set/1 and set.sorted_list_to_set/1
  respectively.  Similar additions have also been made to the
  set_unordlist, set_ordlist and set_bbbtree modules.

<li>We've added some new higher-order predicates, rbtree.foldl2/6
  rbtree.foldl3 and rbtree.transform_value to the rbtree module.  The
  predicate rbtree.remove/3 has been deprecated.

<li>We've add some new predicates and functions to int.m.
  int.fold_up/4, int.fold_down/4, int.fold_up/5, int.fold_down/5,
  int.fold_up2/7 and int.fold_down2/7 support iteration over
  contiguous integer ranges.

<li>The predicate int.to_float/2 has now been deprecated.

<li>We've added a new library module, `array2d', for two-dimensional arrays.

<li>We've added a new module, cord, for sequences with O(1) consing and
  concatenation.  A cord is essentially a tree structure with data stored
  in the leaf nodes.  Joining two cords together to construct a new cord
  is therefore an O(1) operation.

<li>The dir module now handles Microsoft Windows pathnames correctly.

<li>dir__split_name and dir__basename are now semidet, not det.
  dir__split_name fails for root directories or pathnames not
  containing a directory separator.
  dir__basename fails for root directories.

<li>We've added some new predicates and functions to the dir module:
	<ul>
	<li>basename_det/1,
	<li>expand_braces/1,
	<li>is_directory_separator/1,
	<li>make_directory/4,
	<li>make_single_directory/4,
	<li>foldl2/6,
	<li>parent_directory/0,
	<li>path_name_is_absolute/1,
	<li>path_name_is_root_directory/1,
	<li>recursive_foldl2/7.
	</ul>

<li>We've added several new predicates to the io module:
	<ul>
	<li>have_symlinks/0,
	<li>make_symlink/4,
	<li>follow_symlink/4,
	<li>check_file_accessibility/5,
	<li>file_type/4,
	<li>input_stream_foldl2_io_maybe_stop/{6,7},
	<li>binary_input_stream_foldl2_io_maybe_stop/{6,7}.
	</ul>
<li>We've added several new predicates and functions to the bimap module:
	<ul>
	<li>det_insert,
	<li>forward_search,
	<li>reverse_search,
	<li>from_corresponding_lists,
	<li>map_keys,
	<li>map_values,
	<li>det_insert_from_assoc_list,
	<li>det_insert_from_corresponding_lists,
	<li>set_from_assoc_list,
	<li>set_from_corresponding_lists,
	<li>delete_key,
	<li>delete_value,
	<li>delete_keys,
	<li>delete_values,
	<li>overlay,
	<li>apply_forward_map_to_list,
	<li>apply_reverse_map_to_list,
	<li>foldl
	</ul>

<li>We've added predicates relation__lookup_key_set_from/3 and
  relation__lookup_key_set_to/3.

<li>The type of the arguments giving the initial set of visited nodes
  to relation__dfs and relation__dfsrev has changed from set_bbbtree
  to sparse_bitset.

<li>Efficiency of the operations in the relation module has been
  greatly improved.

<li>Some predicates and functions have been added to the sparse_bitset module:
	<ul>
	<li>to_set/1,
	<li>from_set/1,
	<li>member/2,
	<li>foldl/4,
	<li>foldr/4.
	</ul>

<li>exception.m now contains a predicate finally/6 which can be used to
  ensure that resources are released whether a called closure exits
  normally or throws an exception.

<li>exception.m now contains a predicate throw_if_near_stack_limits which
  can be used to prevent an application running out of stack space.

<li>We've changed the interface of exception.try_all/2 to separate
  exceptional results from normal results.

<li>We've added predicates multi_map.to_flat_assoc_list/2 and
  multi_map.from_flat_assoc_list/2. 

<li>Several new functions have been added to the string module, namely
  elem/2, unsafe_elem/2, chomp/1, lstrip/1, lstrip/2, rstrip/1, rstrip/2,
  strip/1, prefix_length/2, suffix_length/2, string/1, string/2, string/4
  and string.det_to_float/1. 

<li>We've added some new predicates, list__map2_foldl, list__map_foldl3,
  and list__foldl4 to list.m.

<li>We've added a predicate, list__cons/3 to list.m.  This is sometimes
  useful with higher-order code.  It can also be useful with state
  variables.  We've also added a function version. 

<li>We've added some new predicates, map__common_subset, map__foldl3,
  map__overlay_large_map and map__transform_value, to map.m.

<li>We've added a predicate, map_fold, to set.m.

<li>We've added a function, pred_to_bool, to bool.m.

<li>We've added the three predicates, `is_nan/1', `is_inf/1' and
  `is_nan_or_inf/1' to float.m.  These predicates are for use only on
  systems which support IEEE floating point arithmetic.

<li>We've added a function version of `hash_table__search/3'.

<li>We've added a predicate, copy_mutvar, to store.m.

<li>We've added a function, clk_tck, to time.m.

<li>builtin.m now contains types and insts `unify' and `compare' for use
  in defining user-defined equality and comparison predicates.

<li>builtin.m now defines insts `new' and `old' as synonyms for `free' and
  `any', respectively, since some of the HAL literature uses this terminology.
  Likewise it defines modes `no' for `new >> old' and `oo' for `old >> old'.

<li>We've fixed some problems with the use of `cc_nondet'.
	<p>
  The incorrect cc_nondet modes of the following predicates have been removed:
  	<ul>
	<li>deconstruct.arg/4
	<li>deconstruct.named_arg/4
	<li>deconstruct.limited_deconstruct/6
	<li>std_util.arg_cc/3
	<li>std_util.argument_cc/3
	<li>std_util.named_argument_cc/3
	<li>std_util.limited_deconstruct_cc/5
	</ul>
  These have been replaced by cc_multi versions in which success or failure
  is indicated by returning a maybe type.

<li>We've added functions get_equivalent_elements, get_minimum_element and 
  remove_equivalent_elements to eqvclass.m.

<li>We've added semidet functions max_key and min_key to return the maximum and
  minimum keys in maps and 2-3-4 trees.

<li>We've added predicates member, remove_leq, remove_gt, foldl and filter
  to sparse_bitset.m.

<li>builtin.m now contains types and insts `unify' and `compare' for use
  in defining user-defined equality and comparison predicates.

<li>The following predicates, which were added in 0.11.0, have been deprecated:
	<ul>
	<li>io.current_input_stream/3
	<li>io.current_output_stream/3
	<li>io.current_binary_input_stream/3
	<li>io.current_binary_output_stream/3
	</ul>
  They were identical to the following long-existing predicates with
  similar names:
  	<ul>
	<li>io.input_stream/3
	<li>io.output_stream/3
	<li>io.binary_input_stream/3
	<li>io.binary_output_stream/3
	</ul>

<li>The following functions have been added to the integer module:
	<ul>
	<li>integer.zero/0
	<li>integer.one/0
	<li>integer.det_from_string/1
	<li>integer.pow/2
	</ul>
<p>
	The predicate integer.pow/3 has been deprecated. 

<li>We've added some functions, rational.int/1, rational.from_integer/1,
  rational.from_integers/2 and rational.reciprocal/1 to rational.m
  The function rational.rational_from_integers/2 has been deprecated.

<li>A new module `term_to_xml' has been added to the standard library.  This
  module contains predicates to write arbitrary Mercury terms to an output
  stream as XML.  Automatic generation of DTDs for Mercury types is also
  supported.  Once a Mercury term is in XML it can be converted to many other
  formats such as HTML or XUL using an appropriate stylesheet.
</ul>

<p>

Changes to the Mercury compiler:

<ul>
<li>We have added optional support for a new type-accurate garbage collector
  as an alternative to using the Boehm et al conservative collector.
<p>
  The new collector is enabled by `--grade hlc.agc'.
  For details about how it works, see the paper
  "Accurate garbage collection in an uncooperative environment"
  which is available via our web page.
<p>
  Note that the new collector is a very naive copying collector, and still
  has a number of serious limitations which may make it undesirable for
  most applications.  It only works with `--high-level-code'.  The heap
  size is fixed at program startup; the collector does not attempt to
  resize the heap.  It does not do cheap heap reclamation on backtracking.
  There is no support for passing terms on the Mercury heap to C code.
  In most cases, the Boehm et all conservative collector will perform better.

<li>There's a new warning option `--warn-dead-procs' which can be used
  for detecting unreachable code.
<p>
  This is not yet enabled by default, because it can cause some spurious
  warnings in modules containing code which mixes Mercury clauses and
  `pragma foreign_proc' declarations for the same procedure.

<li> `mmc --make' now works correctly with Microsoft Visual C++.

<li>It's now easier to use shared libraries on Linux/x86 systems with
  `mmc --make'.  See the documentation for the `--mercury-linkage'
  and `--linkage' options and the `MERCURY_LINKAGE' Mmake variable
  in the Mercury User's Guide.

<li>The behaviour of the `--pre-link-command' and `--extra-init-command'
  options has changed.  They now take a command which will be passed
  the names of all source files in the program or library, with the
  name of the main module's source file passed first.
  See the "Build system options" section of the "Invocation" chapter
  of the Mercury User's Guide for details.

<li>It is now possible to reconfigure an existing Mercury installation
  to use a different C compiler.  See the "C compilers" chapter
  of the Mercury User's Guide for details.

<li>Inlining of builtins can now be disabled using the `--no-inline-builtins'
  option.  This is done by default when debugging, as without this option the
  execution of builtins is not traced.

<li>The Mercury compiler now uses `.' and not `:' as the module separator
  in all output.

<li>The environment variables which were previously used to override the
  location of the standard library (MERCURY_ALL_C_INCL_DIRS,
  MERCURY_ALL_MC_C_INCL_DIRS, MERCURY_INT_DIR, MERCURY_C_LIB_DIR,
  MERCURY_MOD_LIB_MODS, MERCURY_TRACE_LIB_MODS) have been removed.

<li>There is a new analysis: `--analyse-exceptions'.  This identifies
  predicates that will not throw an exception.  This information is
  made available to the optimizing passes of the compiler. 
</ul>

<p>

Portability improvements:

<ul>
<li>We have made the implementation compatible with gcc 3.4.
<li>Shared libraries now work on Mac OS X.
</ul>

<p>

Changes to the Mercury debugger:

<ul>
<li>Users can now limit the output from stack traces.
<p>
  The mdb command `stack' now takes an optional integer argument that
  specifies the maximum number of stack frames to be printed.

<li>Users can now put breakpoints on unify and compare predicates.
<p>
  The syntax for procedure specifications now has provision for specifying
  unify and compare predicates.

<li>Users can now save runtime values to files.
<p>
  We've added a new mdb command, `save_to_file', that saves a specified term
  to a specified file.

<li>The declarative debugger can now be told to trust entire modules or 
  individual predicates or functions using the `trust' mdb command.

<li>The declarative debugger can now also tell you where a value
  appearing in an atom came from (i.e. the call which constructed the value).

<li>The declarative debugger also now supports a divide-and-query search mode.
  You can tell the declarative debugger to use this search mode by invoking
  it with the command `dd -s divide_and_query'.

<li>The "pretty" and "raw_pretty" print formats have had their names swapped, so
  the "pretty" format is now prettier than the "raw_pretty" format.
</ul>

Changes to the compiler back-ends:

<ul>
<li>Improvements to the .NET CLR back-end.
<p>
  We've fixed a lot of bugs, and implemented a lot more of the Mercury
  standard library.  We have been able to bootstrap the compiler in
  grade `il', and also pass more than 90% of the applicable tests in the
  Mercury test suite.  See README.DotNet for details.

<li>Improvements to the Java back-end.
<p>
  We've fixed a lot of bugs, and implemented a lot more of the
  Mercury standard library.  See README.Java for details.
</ul>
