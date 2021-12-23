<h2>Download</h2>
<?php $next_beta_version="" ?>

<p>
Source downloads are available from
<a href="http://dl.mercurylang.org/index.html">our downloads page</a>.
</p>

<p>
Debian packages are also available, instructions for using them are
<a href="http://dl.mercurylang.org/deb/">here</a>.
</p>

<h3>License</h3>

<p>
The Mercury implementation is free software.<br>
Copyright &copy; 1993&ndash;2012 The University of Melbourne.<br>
Copyright &copy; 2013&ndash;2021 The Mercury team.
</p>

<p>
The compiler and tools are distributed under the terms of the
<a href="http://www.gnu.org/licenses/gpl-2.0.html">GNU General Public License (GPL)</a>.
See the file <a href="download/COPYING">COPYING</a> for copying permission.
</p>

<p>
The Mercury libraries and runtime (the files in the <samp>library</samp>, <samp>trace</samp>,
<samp>browser</samp>, <samp>ssdb</samp>, <samp>mdbcomp</samp> ,
<samp>runtime</samp> and <samp>java/runtime</samp> subdirectories) are distributed under the terms of the
<a href="http://www.gnu.org/licenses/lgpl-2.0.html">GNU Library General Public License (LGPL)</a>
with an exception for statically linking against those libraries.
See the file <a href="download/COPYING.LIB">COPYING.LIB</a> for copying permissions for those files.
</p>

<h3>Stable Release</h3>

<?php
/*
<p>
The current stable release is version <a href="download/release.html"><?php echo $current_release; ?></a>.
<a href=""><button class="button">Download</button></a>
</p>
*/
?>

<p>
The most stable release will be a <em>numbered release</em>,
such as 0.10.1, 0.13.0 or 10.04.
These releases have been extensively tested.
</p><p>
The stable release naming scheme was 0.1 up to 0.13 for the first thirteen stable releases.
In February 2010 the Mercury project decided to name each stable release by using the year and month of the release.
For example 10.04 is for a release made in April 2010.
</p>

<?php if ($next_beta_version != "") { ?>
	<h3>Beta release</h3>
	<p>
	A beta version of the next release is also available.
	The current beta release is version <?php echo $next_beta_version; ?>. 
	<a href=""><button class="button">Download</button></a>
	</p>
<?php } ?>

<h3> Release of the day </h3>

<?php
/*
<p>
The current release of the day
is version <a href="download/rotd.html"><?php echo $rotd_version; ?></a>.
<a href=""><button class="button">Download</button></a>
</p>
*/
?>

<p>
To cater for those who need access to the latest features of Mercury,
we release a periodic snapshot of the development system.
This is called a "release of the day (ROTD)".
Each ROTD is given a version number
"rotd-YYYY-MM-DD" according to the date on which it was built.
ROTDs are not necessarily daily.
</p>
<p>
See
<a href="http://dl.mercurylang.org/index.html">our downloads page</a>.
</p>

<h3>Anonymous git access</h3>

<p>
Anonymous access to our git repository is also available
via github at
<a href="https://github.com/Mercury-Language">
https://github.com/Mercury-Language</a>.
</p>

<p>
Note that you need Mercury installed in order to build Mercury from git.
In other words,
you must bootstrap using one of the source distributions above.
When building the latest revision from git,
you should use the most recent ROTD source distribution;
while older ROTDs may work, there is no guarantee that they will.
Generally you should bootstrap using an ROTD that approximately matches the
age of the git revision that you want to build.
See
<a href="https://github.com/Mercury-Language/mercury/blob/master/README.bootstrap">
README.bootstrap</a> for more details.
</p>

