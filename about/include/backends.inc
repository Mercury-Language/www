<h2>About Mercury<span class="submenutitle">/ back-ends </span></h2>
<p>
The Mercury implementation compiles to a wide variety of target languages on a
wide variety of platforms.
</p>

<div class="backend-container">
<div class="backend-item">
  <h3>Low level C.</h3>
  <p>
  Our original back-end.
  This one compiles Mercury source to low-level C code.
  It works by converting Mercury source into code for an abstract machine, and
  then converting the abstract machine instructions into C code with macros for
  the abstract machine registers and instructions.
  We use C's conditional compilation (<code>#ifdef</code>) to define these
  macros as either standard ANSI/ISO C code, or as GNU C code that makes uses of
  GNU C extensions such as global register variables, computed gotos, and inline
  assembler.
  </p>
  <p>
  For more information on the low-level C back-end, see the
  <a href="<?php echo $root?>/documentation/papers.html">papers</a>
  section of the web site, in particular the papers titled "The
  execution algorithm of Mercury: an efficient purely declarative
  logic programming language", "Code generation for Mercury",
  and "Compiling logic programs to C using GNU C as a portable
  assembler".
  </p>
</div>

<div class="backend-item">
  <h3>High level C.</h3>
  <p>
  This back-end compiles Mercury code to fairly high-level C code, more like
  the kind that a C programmer might write.
  </p>
  <p>
  For more information on the high-level C back-end see the
  <a href="<?php echo $root?>/documentation/papers.html">papers</a>
  section of the web site, in particular the paper titled
  "Compiling Mercury to high-level C code".
  </p>
</div>

<div class="backend-item">
  <h3>Java.</h3>
  <p>
  This back-end compiles Mercury to Java.
  </p>
  <p>
  The compiler support is complete, it includes good support for interfacing
  with Java (see the language reference manual for details), and the standard
  library is fairly reasonable.
  There is support for Mercury-level debugging, but there is not yet support
  for Mercury-level profiling.
  </p>
  <p>
  For a guide to installing and using the Java grade, refer to README.Java and
  the User's Guide. You will need Mercury release 10.04 or later.
  </p>
</div>

<div class="backend-item">
  <h3>C#.</h3>
  <p>
  This back-end compiles Mercury to C#.
  </p>
  <p>
  The compiler support is complete, it includes good support for interfacing
  with C# (see the language reference manual for details), and the standard
  library is fairly reasonable.
  There is support for Mercury-level debugging, but there is not yet support
  for Mercury-level profiling.
  </p>
  <p>
  For a guide to installing and using the C# grade, refer to README.CSharp and
  the User's Guide. You will need Mercury release 11.01 or later.
  </p>
</div>
</div>
