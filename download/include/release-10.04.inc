<h2>New in release 10.04.2 of the Mercury distribution</h2>

<p>
This release is a bug-fix release.  A number of problems that caused the
compiler to abort have been fixed, some broken RTTI operations in the java
grade have been fixed, and we have added a workaround for a problem with GCC
version 4.4.

<h2>New in release 10.04.1 of the Mercury distribution</h2>

<p>
This release is primarily a bug-fix release.  It fixes some problems in
the code generator and the source-to-source debugger.  In addition,
there are some changes to the standard library.

<p>

Changes to the Mercury standard library:

<ul>
<li>We have added cc_multi modes for map.foldl2/6 and tree234.foldl2/6.
<li>We have improved the performance of cords, hash tables and version
hash tables.
</ul>

<h2>New in release 10.04 of the Mercury distribution</h2>

<h3>HIGHLIGHTS</h3>

Changes to the release numbering:
<p>
Stable releases are now numbered according to the year and month the
release was made, e.g. 10.04 is the release made in April 2010.
Previously the release naming scheme was 0.x where x was the x'th
major release of the system.

<p>

Changes to the Mercury language:

<ul>
<li>We have removed support for automatic initialisation of solver variables.

<li>A new pragma, foreign_enum, allows the constructors of Mercury 
  enumeration types to be assigned values from foreign language code.

<li>A new pragma, foreign_export_enum, allows the constructors of Mercury
  enumeration types to be referred to in foreign language code.

<li>Some of the restrictions on typeclass instances have been relaxed, allowing
  support for polymorphic instances with functional dependencies.

<li>We now support trace goals, which can be used to print progress messages or
  log messages in the middle of arbitrary computations.

<li>Mutables can now be marked as constant, which is useful when working with
  constant data structures that cannot be conveniently represented as constant
  terms.

<li>Mutables can now be marked as thread-local, which can take on different
  values for each thread.

<li>promise_equivalent_solutions scopes (et al.) must now also list variables
  with inst any that may be constrained by the goal.

<li>We now support !X ^ field_list := Term as a synonym for
  !:X = !.X ^ field_list := Term.

<li>We now support higher-order `any' insts.

<li>We now support "implementation-defined literals", such as `$file', `$line',
  `$pred', which are useful for producing better run-time error messages.

<li>We now support currying of multi-moded predicates or functions when the
  mode to curry can be determined from the insts of the higher-order
  arguments.

<li>We now support `try' goals for catching exceptions.
</ul>

<p>

Changes to the Mercury standard library:

<ul>
<li>New predicates have been added to the assoc_list module, these are
  map_keys_only/3, map_values_only/3 and map_values/3.  They complement the
  functions of the same name.

<li>A new module, parsing_utils, has been added to provide support for
  implementing recursive descent parsers.

<li>The string.to_int family of predicates now fails (or throws an exception
  for the det_ versions) on base 10 numbers that do not fit in the range
  [int.min_int+1, int.max_int].  Numbers outside this range lead to overflow.
  Numbers not in base 10 are assumed to denote bit patterns and are not
  checked for overflow.

<li>A module for handling directed graphs, digraph.m, has been added.  This
  supersedes relation.m and svrelation.m in that it has a more consistent
  interface (which supports state variable notation), provides more type
  safety by using phantom types, and has a number of efficiency improvements.
  Further use of relation.m and svrelation.m is deprecated.

<li>An improved pretty printer module, pretty_printer.m, has been added.  This
  supersedes pprint.m in that it is more economical, produces better
  quality output (line overruns are completely avoided wherever possible),
  has better control over the amount of output produced, and supports
  user-specifiable formatting for arbitrary types.  Further use of pprint is
  deprecated.

<li>We have added extra modes to many of the fold style predicates in the
  library in order to better support (mostly-)unique accumulators.

<li>The foldr family of functions and predicates has been added to the map
  and tree234 modules. We have also extended the arities for map_foldl
  to map_foldl3 in both modules, and added versions of both map_foldl*
  and just plain foldl* in which the higher order argument does not take
  the key as an argument.

<li>The following functions have been added to the integer module:
	<ul>
	<li>integer.from_base_string/2
	<li>integer.det_from_base_string/2
	</ul>

<li>We have added a new builtin predicate, unsafe_cast_any_to_ground/1, that
  can be useful when manipulating polymorphic values that have inst any.

<li>Predicates and functions which create strings from lists of characters
  now fail, throw an exception or return an error value if a null character
  is found.  Unexpected null characters in strings are a potential source of
  security vulnerabilities.
  
<li>Predicates string.semidet_from_char_list/2 and
  string.semidet_from_rev_char_list/2 have been added.  These fail rather
  than throwing an exception if a null character is found.

<li>We have added string.remove_suffix_det, a version of string.remove_suffix
  that throws an exception if the suffix is not there.

<li>string.float_to_string now trims redundant trailing zeroes (although
  at least one fractional digit is always present).  This change affects the
  output from the debugger and io.print etc.

<li>The globals field in the I/O state is no longer unique.  The modes of
  the access predicates, io.set_globals/3 and io.get_globals/3 have been
  changed accordingly.

<li>We have added io.update_globals/3 which allows for atomic updates to
  the globals field in the I/O state in the presence of multiple threads.

<li>We have moved some of the concurrency primitives out of the extras
  distribution and into a new standard library module called `thread',
  and its submodules `thread.channel', `thread.mvar', and `thread.semaphore'.
  The predicates `thread.can_spawn', `thread.channel.try_take'
  and `thread.mvar.try_take' have also been added.

<li>Processes no longer terminate until all threads have finished.  Previously
  a process would terminate as soon as the original thread finished.

<li>The following predicate has been added to the set module:
	<ul>
	<li>set.filter_map/3
	</ul>

<li> The following predicates have been added to the array modules:
	<ul>
	<li>array.fold/4
	<li>array.foldl2/6
	<li>version_array.foldl/4
	</ul>

<li>The following predicates have been added to the list module:
	<ul>
	<li>list.filter_map_foldl/5
	<li>list.map_corresponding/4
	<li>list.map2_foldl3/10
	<li>list.map_corresponding_foldl/6
	<li>list.map_corresponding_foldl2/8
	<li>list.map_corresponding_foldl3/10
	<li>list.map_corresponding3_foldl/7
	<li>list.negated_filter/3
	<li>list.foldl3_corresponding/9
	<li>list.foldl_corresponding3/6
	<li>list.foldl2_corresponding3/8
	<li>list.foldl3_corresponding3/10
	<li>list.foldl4_corresponding3/12
	<li>list.split_upto/4
	<li>list.contains/2
	<li>list.find_index_of_match/4
	<li>list.find_first_match/3
	</ul>
<p>
   We have also added versions of list.foldl/4 and list.foldr/4 that have
   determinism multi.

<li>The following functions have been added to the string module:
	<ul>
	<li>string.split_at_separator/2
	<li>string.split_at_char/2
	<li>string.split_at_string/2
	<li>string.remove_suffix_if_present/2
	<li>string.remove_prefix_if_present/2
	<li>string.is_all_digits/1
	<li>string.all_match/2
	<li>string.remove_prefix/3
	</ul>

<li>The following functions and predicates have been added to the bag module:
	<ul>
	<li>bag.count/1
	<li>bag.count_unique/1
	<li>bag.member/2
	<li>bag.member/3
	</ul>

<li>A unique mode has been added to cord.foldl_pred/4

<li>The following function has been added to the pqueue module
	<ul>
	<li>pqueue.length/1
	</ul>

<li>The following predicate has been added to the maybe module
	<ul>
	<li>maybe_is_yes/2
	</ul>

<li>We have changed the interface of the ops module to make lookups of operators
  more efficient.

<li>We have added string.c_pointer_to_string/{1,2} and string.from_c_pointer/1
  to convert c_pointers to a human readable form.

<li>The bitmap module has been modified and extended to make it more suitable
  for use as a general container for binary data.  See runtime/mercury_types.h
  for the new definition of the bitmap type for interoperability with C code.
<p>
  Bitmaps now have fields `bit', `bits' and `byte' for getting and
  setting a single bit, a group of bits (up to machine word size),
  and an aligned eight bit byte respectively.
<p>
  bitmap.get/2 has been deprecated; use bitmap.bit/2 instead.
<p>
  There is a new type bitmap.slice/0 to represent segments of bitmaps.
<p>
  There are new functions to move data around in bulk:
	<ul>
	<li>copy_bits/5
	<li>copy_bits_in_bitmap/4
	<li>copy_bytes/5
	<li>copy_bytes_in_bitmap/4
	</ul>
<p>
  Other added functions include:
  	<ul>
	<li>shrink_without_copying/2
	<li>append_list/1
	<li>to_byte_string/1
	</ul>

<li>The operations in bitmap.m and version_bitmap.m which treat bitmaps
  as sets have been modified to throw an exception when the input
  bitmaps are not the same size.  Before this change bitmap.intersect/2
  computed the wrong answer when the input bitmaps were of different sizes.

<li>bitmap.difference/2 and version_bitmap.difference/2 now compute difference,
  not xor.  bitmap.xor/2 and version_bitmap.xor/2 have been added.

<li>bitmap.to_string(BM) now returns "<0:>" for an empty bitmap BM.
  Previously it returned "<0:00>".

<li>Version bitmaps now have a field `bit' for getting and setting a single bit.

  version_bitmap.get/2 has been deprecated; use version_bitmap.bit/2 instead.

<li>The io module now contains predicates io.read_bitmap/{4,5,6,7},
  io.write_bitmap{3,4,5,6} and io.read_file_as_bitmap/{3,4}.
  io.write_bytes/{3,4} are now marked as obsolete.  Note that the
  interface of io.read_bitmap/* has changed since the first release
  of the day implementation.

<li>There are new modules bit_buffer, bit_buffer.write and bit_buffer.read
  which give a bit-oriented interface to byte-oriented streams.

<li>There is a new typeclass stream.bulk_reader/5.  Instances of
  stream.bulk_reader/5 support reading of multiple items at once
  into a container such as an array or a bitmap.

<li>Comparison of version_arrays is now the same as for arrays.

<li>We have added predicates char.is_hex_digit/2 and char.int_to_hex_char/2.

<li>We have changed term.variable so that it records the context where
  the variable was used.  This required the backward mode of
  term.var_list_to_term_list to be removed.  The backwards mode is
  now accessed via term.term_list_to_var_list.

  There is a new function, get_term_context, to return the context of any term.

<li>We have renamed some library predicates whose names were ambiguous.

<li>The type software_error/0 has been moved from the require module into
  the exception module.

<li>construct.num_functors/1 now fails rather than returning -1 for types
  with no functors.  There is a new function construct.det_num_functors/1
  which aborts for types which do not have functors.

<li>We have added predicates deconstruct.functor_number/3 and
  deconstruct.deconstruct_du/4 which return functor numbers suitable
  for use by construct.construct, rather than functor strings.

<li>We have added a function construct.get_functor_lex/2 which converts
  an ordinal functor number into a lexicographic functor number.

<li>A new module string.builder has been added to the standard library.
  The new module provides instances of the stream typeclasses that can
  be used to build up a string using char and string writers.

<li>We have added the types `string.line' and `string.text_file' and made
  input streams instances of stream.reader/4 with those unit types.
  This means stream.get/4 can be used to efficiently read lines
  and files as string.

<li>We have added a predicate io.remove_file_recursively/4
  which can remove non-empty directories.

<li>We have added the predicates `dir.current_directory',
  `dir.relative_path_name_from_components'.

<li>We have added the predicates rev_list, split_last, get_first, get_last,
  filter, foldl_pred, foldr_pred, map_foldl, map_foldl[23], cord_list_to_cord
  and cord_list_to_list to the cord module.

<li>We have added two predicates that are useful for custom term construction:
	<ul>
	<li>construct.find_functor/5
	<li>type_desc.same_type/2 
	</ul>

<li>We have added new predicates to the tree234 and map modules for constructing
  2-3-4 trees and maps directly (without the creation of intermediate trees)
  from sorted lists:
	<ul>
	<li>tree234.from_sorted_assoc_list/2
	<li>tree234.from_rev_sorted_assoc_list/2
	<li>map.from_rev_sorted_assoc_list/2
	</ul>
  map.from_sorted_assoc_list now also constructs the tree directly, so now
  it requires its input list to be duplicate-free.

<li>We have added tree234.map_values_only and map.map_values_only, which are
  versions of tree234.map_values and map.map_values which do not give the
  higher order argument the key associated with the value being transformed.

<li>We have replaced the hash_table and version_hash_table implementations
  with separate chaining schemes.  Consequently delete works, and double
  hashing predicates are not required.

<li>We have added optional synchronisation to the version_array and
  version_hash_table implementations.  They are now thread safe, but slower,
  by default.

<li>We have added a calendar module to the standard library. This module
  contains utilities for working with the Gregorian calendar.
</ul>

<p>

Changes to the Mercury compiler:

<ul>

<li>The Java backend has been substantially improved and now supports
  all the core features of the language and most of the standard library.
  The Java backend is roughly three times slower (after allowing for JIT)
  than the C backends.
<p>
  The Java backend improvements were contributed by 
  <a href="http://www.missioncriticalit.com/">Mission Critical IT</a>.

<li>Interfacing with Mercury code from Java is also improved:
   <ul>
   <li>Polymorphic Mercury types are now translated to Java classes
      with generics, allowing for greater type safety in the Java code.
    <li>Exported Mercury procedures retain their argument order in the
      corresponding Java versions (output arguments are handled with a new
      Ref Java type).
    </ul>

<li>We have added support for trail segments, which allow programs to grow
  the trail on demand.

<li>Shared libraries are now used by default on Linux/x86 systems.

<li>Support for the reserve tag grades has been removed.

<li>We have added an Erlang back-end.
  <p>
  The Erlang back-end was contributed by
  <a href="http://www.missioncriticalit.com/">Mission Critical IT</a>.

<li>In parallel grades we now support thread-local trailing.

<li>The compiler now issues a warning when an inst declaration is not
  consistent with any of the types in scope.

<li>We have added support for simultaneous execution of jobs with `mmc --make'.

<li>We have added support for `mmc --make' to recompile modules if options have
  changed.

<li>We have added an option for `mmc --make' to compile more recently modified
  source files first.

<li>We have added support for stack segments, which allows programs to grow
  stacks on demand.

<li>We have made it easier to use single-precision floats, which do not need
  to be boxed on 32-bit machines.

<li>A new option, `--generate-standalone-interface', simplifies the task
  of calling Mercury procedures from programs written in other languages.

<li>We have added a new option, `--inform-ite-instead-of-switch'. If this is
  enabled, the compiler will generate informational messages about
  if-then-elses that it thinks should be converted to switches for the
  sake of program reliability.

<li>We have removed support for Managed C++ as a foreign language for the IL
  backend.

<li>The width of error message lines can be adjusted with a new option,
  `--max-error-line-width'.

<li>Generation of 64-bit code on Mac OS X is now supported,
  i.e. the x86_64*apple*darwin* architecture is now supported.

<li>We have added another debugger, called the source-to-source debugger (ssdb).
  It is more limited than mdb, but it does work with backends other than the
  low-level C backend, e.g. the Java backend.

</ul>

<p>

Changes to the Mercury deep profiler:

<ul>
<li>The deep profiler now supports measuring a proxy for time: a counter that
  is incremented at each call. Since calls happen a lot more frequently than
  clock interrupts, this can yield useful profiles for shorter-running
  programs.
</ul>

<p>

Changes to the samples directory:

<ul>
<li> The samples directory now includes an example of how to implement a
  solver type.
</ul>

<p>

Changes to the extras distribution:

<ul>

<li>The extras distribution now includes a binding to the Allegro and
  AllegroGL game programming libraries.

<li>`mtogl', the Mercury binding to the Tk widget `togl' has been removed
  from the distribution.
</ul>

<p>

Changes to the Mercury debugger:

<ul>

<li> A `track' mdb command has been added.

<li> The `dd' command now accepts a `--reset-knowledge-base' option.

<li> You can now put breakpoints on individual events inside procedures.

<li> mdb now ignores lines beginning with a `#' character
  in sourced files.  This is useful for commenting mdb scripts.
</ul>

<p>

<h3>DETAILED LISTING</h3>

Changes to the Mercury language:

<ul>

<li>Support for the automatic initialisation of solver variables has been
  removed because it was source of confusing errors and was not used in
  practice anyway.
  <p>
  A consequence of this is that solver types are now properly polymorphic,
  i.e. types like `foo(bar)' where:
<pre>
  	:- solver type foo(T).
	:- solver type bar.
</pre> 
  are now supported.

<li>The new pragma, foreign_enum, can be used to establish a 
  mapping between values in a foreign language and the constructors
  of a Mercury enumeration type.  This can be useful when writing
  Mercury bindings to foreign code libraries.
  <p>
  For example, 
<pre>
  	:- type matrix_mode
		--->	texture
		;	modelview
		;	projection.

	:- pragma foreign_enum("C", matrix_mode/0, [
		texture    - "GL_TEXTURE" 
		modelview  - "GL_MODELVIEW"
		projection - "GL_PROJECTION"
	]).
</pre>  
  When passed to C foreign clauses, values of type matrix_mode/0 will have
  the corresponding C value specified by the foreign_enum pragma.

<li>The new pragma, foreign_export_enum, can be used to establish a
  mapping between the constructors of a Mercury enumeration type and
  a symbolic name for values of that type in the foreign language.
<p>
  For example, given the type
<pre>
  	:- type status ---> ok ; error.
</pre>
  the declaration
<pre>
  	:- pragma foreign_export_enum("C", status/0, [prefix("STATUS_")]).
</pre>  
  allows code in C foreign_proc and foreign_code pragma bodies to refer
  to the value `ok' via the name `STATUS_ok' and to the value `error'
  via the name `STATUS_error'.

<li>The restriction on typeclass instances that all type variables appearing in
  the range of a functional dependency must be monomorphic has been relaxed.
  We now support cases where the type variables in the range are determined
  by the type variables in the domain, using the functional dependency
  information from any instance constraints.
<p>
  For example, given the typeclass
<pre>
	:- typeclass foo(A, B) <= (A -> B).
</pre>
  the following instance is now valid:
<pre>
	:- instance foo(list(S), list(T)) <= foo(S, T).
</pre>
  since the variable T, in the range, is determined from the variable S by the
  functional dependencies on the foo(S, T) constraint.

<li>A new language construct allows programmers to include debugging and/or
  logging code in the middle of arbitrary computations. Trace goals
  may have both compile time and run time conditions placed on their execution.
  However, if they are enabled, then they can perform I/O (even if the
  surrounding code can't); they can also access the values of mutables.
<p>
  Their capabilities, syntax and intended use are shown by the following
  example.
<pre>
	:- mutable(logging_level, int, 0, ground, []).

	:- pred time_consuming_task(data::in, result::out) is det.

	time_consuming_task(In, Out) :-
		trace [
			compile_time(flag("do_logging") or grade(debug)),
			run_time(env("VERBOSE")),
			io(!IO),
			state(logging_level, !LoggingLevel)
		] (
			io.write_string("Time_consuming_task start\n", !IO),
			( !.LoggingLevel > 1 ->
				io.write_string("Input is ", !IO),
				io.write(In, !IO),
				io.nl(!IO)
			;
				true
			)
		),
		...
		% perform the actual task
</pre>

<li>Higher-order terms can now have an `any' inst, which means that they can
  legally use non-local solver variables even though these variables may
  become further bound when in it is called.  Higher-order terms with an
  `any' inst cannot be called or applied in a negated context (a negation,
  the condition of an if-then-else, or the body of a higher-order expression
  that does not itself have an `any' inst).
<p>
  Such terms can be expressed by using `any_pred' and `any_func' in place of
  `pred' and `func', as in the following examples:
<pre>
	AnyPred = (any_pred(X::ia, C::in) is semidet :-
			geqc(X, A, C)		% X >= A + C
		),
	...
	call(AnyPred, Z, 5)			% Z >= A + 5

	AnyFunc = (any_func(X::ia) = (Y::ia) is semidet :-
			X = Y + A
		),
	...
	Z = apply(AnyFunc, W)			% W = Z + A
</pre>

<li>Try goals provide syntactic sugar for catching exceptions. An example is:
<pre>
	:- pred p_carefully(io::di, io::uo) is det.

	p_carefully(!IO) :-
		(try [io(!IO)] (
			io.write_string("Calling p\n", !IO),
			p(Output, !IO)
		)
		then
			io.write_string("p returned: ", !IO),
			io.write(Output, !IO),
			io.nl(!IO)
		catch S ->
			io.write_string("p threw a string: ", !IO),
			io.write_string(S, !IO),
			io.nl(!IO)
		catch 42 ->
			io.write_string("p threw 42\n", !IO)
		catch_any Other ->
			io.write_string("p threw something: ", !IO),
			io.write(Other, !IO),
			% Rethrow the object.
			throw(X)
		).
</pre>
</ul>

<p>

Changes to the Mercury compiler:

<ul>
<li>The option `--trail-segments', or grade component `.trseg', causes
  programs to execute using trail segments, where segments can be allocated
  at runtime, instead of using a fixed size trail.  This can prevent trail
  exhaustion, but execution time will be increased.

<li>There's a new back-end that targets Erlang.
<p>
  Compiler support for this new back-end is mostly complete,
  but large parts of the standard library are still not yet
  implemented for this new port.
<p>
  For more details, see the README.Erlang.

<li>The compiler now issues a warning when an inst declaration isn't
  consistent with any of the types in scope.
<p>
  This makes it easier to diagnose mode errors caused by insts that are not
  consistent with the type they are intended to be consistent with.

<li> Simultaneous execution of jobs with `mmc --make' can be enabled with
  the `--jobs <n>' option.

<li>`mmc --make' can record what compiler options were used for each module
  by enabling the `--track-flags' option.  Then `mmc --make' can know to
  recompile modules whose options have changed, even if the files haven't
  been touched.

<li>`mmc --make' can compile more recently modified files first, if the option
  `--order-make-by-timestamp' is enabled.

<li>The option `--stack-segments', or grade component `.stseg', causes
  programs to execute using stack segments, where segments can be allocated
  at runtime, instead of using fixed sized stacks.  The program won't run out
  of stack space and stack sizes can be much smaller, but execution time will
  be increased.

<li>Single-precision floats can now be selected for the C backends by using the
  `.spf' grade component, or passing the `--single-prec-float' option to the
  compiler.

<li>The option `--generate-standalone-interface', causes the compiler to
  create a "stand-alone" interface to the Mercury runtime and a set of
  Mercury libraries.  This interface allows programs written in languages
  such as C or C++ to initialise the Mercury runtime and libraries prior to
  calling any foreign exported procedures defined in those libraries.

<li>We have removed support for Managed C++ as a foreign language for the IL
  backend.  This was desirable because it wasn't used, because it has been
  deprecated by Microsoft, and because it complicated the dependencies for the
  IL backend.
</ul>

<p>

Changes to the Mercury standard library:

<ul>
<li>The predicates io.seek_binary/5 and io.binary_stream_offset/4 have been
  deprecated.  They have been replaced by the predicates:
  io.seek_binary_input/5, io.seek_binary_output/5,
  io.binary_input_stream_offset/4 and io.binary_output_stream_offset/4.
</ul>

<p>

Changes to the Mercury debugger:

<ul>

<li>A `track' mdb command has been added.  This command invokes the declarative
  debugger and executes it's `track' command, before returning to the mdb
  prompt.

<li>The `dd' command now accepts a `--reset-knowledge-base' option. 
  This option resets the declarative debugger's knowledge base of previous
  question answers.

<li>You can now put breakpoints on individual events inside procedures.
  Commands of the form "break <procedure-specification> <portname>"
  will cause execution to stop only at the specified port in the specified
  procedure. If there is more than event of the given port type in the
  procedure, mdb will prompt the user to select one.

<li>mdb now ignores lines beginning with a `#' character
  in sourced files.  This is useful for commenting mdb scripts.
</ul>

