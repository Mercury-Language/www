<h2>Release 0.4 - Known Problems</h2>

The following is collected email of reported problems with release
0.4 of the Mercury distribution. Included, where possible, are
patches.

<p>
<hr>
<p>
On SunOS 4 (and any other systems which don't have `mkfifo'), you need
to make a shell script version of `mkfifo' which calls `mknod', and
put it in your $PATH.  The following shell script should do the trick:

<p>
<pre>
	#!/bin/sh
	if [ $# -ne 1 ]; then
		echo "Usage: `basename $0` filename" 1>&2
		exit 1
	fi
	exec mknod "$1" p
</pre>

<p>
<hr>
<p>
On Linux, if you use `mc' directly (rather than via `mmake'),
you need use the option ` --cflags "-fno-builtin -fno-omit-frame-pointer" '.

<p>
<hr>
<p>
On Irix, if you use `mc' directly (rather than via `mmake'),
and specify a grade that includes "jump" or "fast",
you need use the option ` --cflags "-non_shared -mno-abicalls" '.

<p>
<hr>
<p>
The interface to NU-Prolog / SICStus Prolog is broken: to fix it, apply
this <a href="patches/patch-0.4-io.nu.nl">patch</a> to library/io.nu.nl
before installing.

<p>
<hr>
<p>
For SICStus Prolog, you also need to make sure that somewhere in your
path is a file `sp' which is a link to $SP_PATH/Emulator/spdump.

<p>
<hr>
<p>
For SICStus Prolog on x86 CPUs (and other architectures for which
SICStus Prolog does not have a native-code generator),
you must replace all occurrences of `fastcode' with `compactcode' in
scripts/msl.in, scripts/msc.in, and library/Mmake.

<p>
<hr>
<p>
SICStus Prolog version 3 has some incompatibilities with earlier
versions.  These incompatibilities means that Mercury 0.4 will not
work with SICStus Prolog version 3.  If you want to use SICStus
version 3, a patch contributed by Peter Szeredi is available
<a href="http://www.cs.mu.oz.au/~fjh/mercury/sicstus3_patch">here</a>,
but we don't have SICStus version 3, so we haven't been
able to test this patch.

<p>
<hr>
<p>
The `jump' and `fast' grades don't work.  (This should not cause any
problems - `asm_jump' and `asm_fast' work fine.  The auto-configuration
script won't select `jump' or `fast' grades as the default.)

<p>
<hr>
<p>
There is a bug in the implementation of higher-order predicates;
the work-around is to always use explicit lambda closures (e.g.
instead of `solutions(foo(X),List)' use
`solutions(lambda([X::in, Y::out] is det, foo(X, Y)), List)').

<p>
<hr>
<p>
There is another bug in the implementation of higher-order
predicates which means that the compiler sometimes generates
incorrect code for semidet higher-order preds.  The work-around
for this one is to not use semidet higher-order preds.

<p>
<hr>
<p>
If you attempt to use the unimplemented predicates io__read_anything/3,
io__write_anything/3, type_to_term/3, or term_to_type/3, you will
get a crash rather than a "sorry, not implemented" message.

<p>
<hr>
<p>
This list is too long - we will release a new version which
fixes these problems sometime in the near future.

<p>
<hr>
<p>
Comments? Mail <a href = "mailto:mercury@cs.mu.oz.au">mercury@cs.mu.oz.au</a>,
or see our <a href = "email.html" >contact</a> page.<br>

Last update was 1997/04/22 01:22:27 by trd@cs.mu.oz.au
</body>
</html>
