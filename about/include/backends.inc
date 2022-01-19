<h2>About Mercury<span class="submenutitle">/ back-ends </span></h2>
<p>
The Mercury implementation compiles Mercury code to C, C# or Java,
and works on a wide variety of platforms.
</p>

<div class="backend-container">
<div class="backend-item">
  <h3>Low level C backend.</h3>
  <p>
  The backend that compiles Mercury code low-level C code
  is our original back-end.
  It works by converting Mercury source code
  into code for an abstract machine specifically designed Mercury.
  This abstract machine manages its own set of abstract machine registers
  and its own stacks (one stack for deterministic code,
  and another for non deterministic code), and its own heap.
  It has no if-then-else or loop constructs,
  using only conditional and unconditional branches.
  Each instruction of this abstract machine is translated to C code
  that relies heavily on macros,
  We use C's conditional compilation (<code>#ifdef</code>)
  to define these macros as either standard ANSI/ISO C code,
  or as GNU C code that uses some GNU C extensions:
  global register variables;
  the ability to take the address of a label, and later jump to that label; and
  using inline assembler to make function-local labels globally visible,
  allowing code in one function to jump to into the middle of another function.
  (Recent versions of gcc do not support this last capability.)
  </p>
  <p>
  For more information on the low-level C back-end, see the papers
  <ul>
  <li>
  <a href="<?php echo $root?>/documentation/papers.html#jlp">
  The execution algorithm of Mercury: an efficient purely declarative
  logic programming language</a>,
  <li>
  <a href="<?php echo $root?>/documentation/papers.html#code_gen_mit">
  Code generation for Mercury</a>, and
  <li>
  <a href="<?php echo $root?>/documentation/papers.html#mercury_to_c">
  Compiling logic programs to C using GNU C as a portable assembler</a>.
  </ul>
  </p>
</div>

<div class="backend-item">
  <h3>High level C backend.</h3>
  <p>
  This back-end compiles Mercury code to fairly high-level C code,
  more like the kind that a C programmer might write.
  It does not try to manage any registers or stacks,
  leaving those details up to the C compiler.
  It does still control the representation of Mercury terms on the heap.
  </p>
  <p>
  For more information on the high-level C back-end see the paper
  <ul>
  <li>
  <a href="<?php echo $root?>/documentation/papers.html#hlc_cc">
  Compiling Mercury to high-level C code</a>.
  </ul>
  </p>
</div>

<div class="backend-item">
  <h3>Java backend.</h3>
  <p>
  This back-end compiles Mercury to Java.
  </p>
  <p>
  The compiler now includes good support for interfacing with Java
  (see section 15.10.3 of the language reference manual for details),
  There is support for Mercury-level debugging,
  but there is not yet support for Mercury-level profiling.
  A few backend-specific parts of the Mercury standard library
  do not yet have implementations for this backend,
  but this affects only a tiny minority
  of the standard library's functionality.
  </p>
  <p>
  For a guide to installing and using the Java grade,
  refer to README.Java, and section 6.4 of the User's Guide.
  </p>
</div>

<div class="backend-item">
  <h3>C# backend.</h3>
  <p>
  This back-end compiles Mercury to C#.
  </p>
  <p>
  The compiler now includes good support for interfacing with C#
  (see section 15.10.2 of the language reference manual for details),
  There is support for Mercury-level debugging,
  but there is not yet support for Mercury-level profiling.
  A few backend-specific parts of the Mercury standard library
  do not yet have implementations for this backend,
  but this affects only a tiny minority
  of the standard library's functionality.
  </p>
  <p>
  For a guide to installing and using the C# grade,
  refer to README.CSharp, and section 6.5 of the User's Guide.
  </p>
</div>
</div>
