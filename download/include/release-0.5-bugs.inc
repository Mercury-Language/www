<h2>Release 0.5 - Known Problems</h2>

The following is collected email of reported problems with release
0.5 of the Mercury distribution. Included, where possible, are
patches.

<p>
<hr>
<p>
Profiling doesn't work on SunOS 4.1.3, because the SunOS 4.1.3 linker
doesn't allow shared library names containing periods, and the
profiling version of the garbage collection library was named
`gc.prof'.  A source patch which fixes this problem by renaming the library
`gc_prof' is available <a href = "patches/patch-0.5-gc_prof">here</a>.
(Thanks to Dominique de Waleffe for reporting this problem.)

<p>
<hr>
<p>
Profiling doesn't work on Linux, due to a portability bug in the
Mercury profiler, which assumed that the `%p' printf format meant
hexadecimal with no `0x' prefix.  A work-around is to add the following
line to the `mprof' script:
<p>
<code>perl -pi -e 's/0x//g' Prof.CallPair Prof.Counts Prof.Decl</code>
<p>
<hr>
<p>
Profiling doesn't work on Solaris.  Fix available on request.
<p>
<hr>
<p>
The `--debug' option to `msl' doesn't work.  This is because it is looking
for `portray.ql', which was not installed.  The work-around if you have the
source distribution is to manually copy the file `portray.ql' from the
library directory to /usr/local/mercury-0.5/<arch>/lib/sicstus/<arch>;
if you don't have the source distribution, you can use `msp' instead of
`msl'.
<p>
<hr>
<p>
The `mnc' and `msc' scripts don't work with /bin/sh on ULTRIX,
since ULTRIX's /bin/sh doesn't support `unset'.  Fix available on request.

<p>
<hr>
<p>
The garbage collector doesn't work on Solaris 2.5.
<p>



<hr>
<h2>Release 0.5.1 of the Mercury distribution</h2>
<p>
Release 0.5.1 is a bug-fix release; it does not add any new features.
All the above bugs are fixed in release 0.5.1.
There are a few bugs in 0.5 which have not been fixed in 0.5.1, mostly
problems with the profiler.  These bugs will all be fixed in the next
release.
<p>
Determinism inference of non-exported predicates doesn't work.
One work-around is to use explicit determinism declarations.
A patch to fix this bug is available on request.
<p>
The profiler sometimes gets floating point exceptions on Linux
(and probably some other platforms).  A patch which fixes this
problem is available on request.
<p>
On Solaris (and probably some other platforms) programs compiled with
profiling enabled will occasionally die with an uncaught SIGPROF --
you may get the message "Profiling timer expired".  A patch which fixes
that is available on request.
<p>
On Alpha/OSF versions 3.0 to 3.2B, there is a loader bug that sometimes
causes a segmentation violation while loading in the shared libraries,
due to the loader not handling long library path names correctly.  So
far, we have only observed this for Mercury programs when compiling with
profiling enabled.  There are several known work-arounds.  One is to
get a patched version of /sbin/loader from DEC.  
(For a V3.2 system, you will want "Patch ID:  OSF320-227" or newer.)
Another work-around is to link statically.
<p>
On some systems, some programs get a segmentation fault at program exit.
This problem occurs only in rare circumstances.  It has been observed
on Linux for programs which use the C interface.  A patch is available
on request, and there is also a simple work-around which we can explain
on request.
