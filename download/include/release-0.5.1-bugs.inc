<h2>Release 0.5.1 - Known Problems</h2>

The following is collected email of reported problems with release
0.5.1 of the Mercury distribution. Included, where possible, are
patches.

<p>
<hr>
<p>
Determinism inference of non-exported predicates doesn't work.
One work-around is to use explicit determinism declarations.
A patch to fix this bug is available on request.
<p>
<hr>
<p>
The profiler sometimes gets floating point exceptions on Linux
(and probably some other platforms).  A patch which fixes this
problem is available on request.
<p>
<hr>
<p>
On Solaris (and probably some other platforms) programs compiled with
profiling enabled will occasionally die with an uncaught SIGPROF --
you may get the message "Profiling timer expired".  A patch which fixes
that is available on request.
<p>
<hr>
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
<hr>
<p>
On some systems, some programs get a segmentation fault at program exit.
This problem occurs only in rare circumstances.  It has been observed
on Linux for programs which use the C interface.  A patch is available
on request, and there is also a simple work-around which we can explain
on request.
