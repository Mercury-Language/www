target: html

ROOT=..
HTML= 	benchmarks.html 	\
	developer.html 		\
	documentation.html 	\
	events.html		\
	features.html 		\
	motivation.html		\
	papers.html		\
	reports.html		\
	related.html

all:     local
install: local_install
clean:   local_clean

reports.html: reportsdb.inc

local:
	[ -d doc ] || mkdir doc
	[ ! -d mercury ] || (cvs update mercury-doc)
	[ -d mercury-doc ] || (cvs checkout -d mercury-doc mercury/doc)
	[ -d library ] || (cvs checkout -d library mercury/library)
	[ -d notes ] || \
		(cvs checkout -d notes mercury/compiler/notes)
	echo "LIBRARY_DIR=`pwd`/library"  > Mmake.common
	echo "PERL=perl"  >> Mmake.common
	echo "INFO=info"  >> Mmake.common
	echo "DVIPS=dvips"  >> Mmake.common
	(cd notes; mmake MERCURY_DIR=.. )
	(cd mercury-doc; mmake library-chapters.texi split_html ps)
	$(CP) notes/*.text doc
	$(CP) mercury-doc/*.html notes/*.html doc
	$(CP) mercury-doc/*.ps doc
	(cd doc; gzip -f -9 *.ps)

local_install: all
	for dir in bench developers events reports doc dotnet papers;	\
	do							\
		$(CP) $$dir $(INSTALL_WEBDIR);			\
		chmod -R a+r,g+w $(INSTALL_WEBDIR)/$$dir;	\
		chgrp -R mercury $(INSTALL_WEBDIR)/$$dir;	\
	done

local_clean:
	-rm -rf doc

include ../Makefile.common
