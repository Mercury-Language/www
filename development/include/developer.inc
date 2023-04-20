<h2>Development<span class="submenutitle">/ developer documentation</span></h2>

<!---------
% XXX What is the point of this "submenutitle"?
% I this header should just be "Developer documentation".
---------->

<p>
These pages may contain out-of-date information.
We hope to update or replace this information in the future.
</p>

<?php

/*
Note that this information is not stored in this repository.  It is stored
in compiler/notes/*.html.  On the webserver we maintain a checkout of the
main source repository as well as the www repository and configure apache to
look in the main source repository to find these documents.
*/

?>

<div class="developer">
<ul class="nonindentlist">

<li> 	
<h3><a href="developers/developer_intro.html">Developer introduction</a></h3>
	<p>
	Tips and tricks for developers just starting to work with
	the Mercury source code.
	</p>
	</li>

<li>	
<h3><a href="developers/overall_design.html">Overall structure of the Mercury implementation</a></h3>
	<p>
    Outlines the main parts of the Mercury implementation,
    shows what directories contain each component,
    and the rationale behind this design.
    </p>
</li>

<li>	
<h3><a href="developers/compiler_design.html">Compiler design</a></h3>
	<p>
    Outlines the overall structure of the compiler,
    and explains how each module fits into it.
    </p>
</li>

<li>	
<h3><a href="developers/coding_standards.html">Coding standard for Mercury code</a></h3>
	<p>
    The code style standard we use for Mercury code
    in the Mercury implementation.
    </p>
</li>

<li> 	
<h3><a href="developers/c_coding_standard.html">Coding standard for C code</a></h3>
	<p>
    The code style standard we use for C code
    in the Mercury implementation.
    The runtime system of Mercury is written in C,
    and so are some of the lowest-level parts of the Mercury standard library.
    </p>
</li>

<li>	
<h3><a href="developers/reviews.html">Code review</a></h3>
	<p>
    The procedure we use to review proposed changes,
    including what should be done to prepare for reviews.
    </p>
</li>

<li>	
<h3><a href="developers/bootstrapping.html">Bootstrapping</a> </h3>
	<p>
    What to do when a change requires bootstrapping.
    </p>
</li>

<li>	
<h3> <a href="developers/glossary.html">Glossary</a></h3>
	<p>
    Explanations of some terms used in the Mercury implementation.
    </p>
</li>

<li>
<h3><a href="developers/work_in_progress.html">Partially implemented features</a></h3>
    <p>
    Features on which work has begun but has stopped short of completion.
    </p>
</li>

</ul>

<!---------
% XXX
% I (zs) think that we should divide the .html files in the notes directory
% into two categories: those that describe how the system currently works, and
% everything else. We should include individual links to the files
% in the first category above; and we should not include any links
% to the files in the second category at all, even via this index.
-------->
<h3>More documents</h3>
<p>
	These documents, plus more specific, incomplete and sometimes outdated
	documents are kept in the <code>compiler/notes/</code> directory of the
	source tree.
	They are also available <a href="developers/index.html">online</a>.
</p>

</div>
