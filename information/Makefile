target: all local

ROOT=..
HTML= 	benchmarks.html 	\
	developer.html 		\
	documentation.html 	\
	features.html 		\
	motivation.html		\
	papers.html		\
	related.html

install: local_install
clean:   local_clean

local:
	[ -d doc ] || mkdir doc
	[ ! -d mercury ] || (cvs update mercury-doc)
	[ -d mercury-doc ] || (cvs checkout -d mercury-doc mercury/doc)
	[ -d library ] || (cvs checkout -d library mercury/library)
	[ -d notes ] || \
		(cvs checkout -d notes mercury/compiler/notes)
	echo "LIBRARY_DIR=`pwd`/library"  > Mmake.common
	(cd notes; mmake MERCURY_DIR=.. )
	(cd mercury-doc; mmake library-chapters.texi split_html ps)
	cp -a notes/*.text doc
	cp -a mercury-doc/*.html notes/*.html doc
	cp -a mercury-doc/*.ps doc
	(cd doc; gzip -f -9 *.ps)

local_install: target
	for dir in bench developers doc papers;		\
	do						\
		cp -a $$dir $(INSTALL_WEBDIR);		\
		chmod -R a+r $(INSTALL_WEBDIR)/$$dir;	\
	done

local_clean:
	-rm -rf doc

include ../Makefile.common
