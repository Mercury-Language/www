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
	[ ! -d mercury ] || (cvs update mercury/doc;	\
		cvs update mercury/library;		\
		cvs update mercury/compiler/notes)
	[ -d mercury ] || (cvs checkout mercury/doc;	\
		cvs checkout mercury/library;		\
		cvs checkout mercury/compiler/notes)
	echo "LIBRARY_DIR=`pwd`/mercury/library"  > mercury/Mmake.common
	(cd mercury/doc; mmake library-chapters.texi split_html ps)
	cp -a mercury/doc/*.html mercury/compiler/notes/*.html doc
	cp -a mercury/doc/*.ps doc
	(cd doc; gzip -f -9 *.ps)

local_install: target
	for dir in bench doc papers;		\
	do					\
		cp -a $$dir $(INSTALL_WEBDIR);	\
	done

local_clean:
	-rm -rf doc
	-rm -rf mercury

include ../Makefile.common
