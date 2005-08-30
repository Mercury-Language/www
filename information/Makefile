target: html

ROOT=..
include $(ROOT)/RELEASE_INFO

HTML= 	benchmarks.html 	\
	comparison_with_haskell.html \
	deep_demo.html		\
	developer.html 		\
	documentation.html 	\
	events.html		\
	features.html 		\
	motivation.html		\
	papers.html		\
	reports.html		\
	related.html

SUBDIRS =			\
	bench			\
	deep_demo		\
	developers		\
	doc-release		\
	doc-latest		\
	dotnet			\
	events			\
	papers			\
	reports

OLD_DOCS =			\
	reference_manual_toc.html \
	user_guide_toc.html	\
	library_toc.html	\
	transition_guide_toc.html

CHECKOUT_DIRS = mercury/doc mercury/compiler/notes mercury/library

all:     local
install: local_install
clean:   local_clean

reports.html: reportsdb.inc

local:
	[ -d doc-release ] || mkdir doc-release
	[ -d doc-latest ] || mkdir doc-latest
	[ -d mercury-release ] || mkdir mercury-release
	[ -d mercury-latest ] || mkdir mercury-latest
	(cd mercury-latest; cvs checkout $(CHECKOUT_DIRS))
	(cd mercury-release; cvs checkout -r$(RELEASE_TAG) $(CHECKOUT_DIRS))
	echo "VERSION=rotd-`date '+%Y-%m-%d'`" > mercury-latest/mercury/VERSION
	echo "VERSION=$(RELEASE_VERSION)" > mercury-release/mercury/VERSION
	for branch in release latest; do \
		info_dir=`pwd`; \
		doc_dir=$$info_dir/doc-$$branch; \
		cd mercury-$$branch/mercury && \
		echo "LIBRARY_DIR=`pwd`/library"  > Mmake.common && \
		echo "PERL=perl"  >> Mmake.common && \
		echo "INFO=info"  >> Mmake.common && \
		echo "DVIPS=dvips"  >> Mmake.common && \
		echo "PDFTEX=pdftex"  >> Mmake.common && \
		echo 'include $$(MERCURY_DIR)/VERSION'  >> Mmake.common && \
		(cd doc && mmake split_html ps pdf) && \
		$(CP) doc/*.html doc/*.ps doc/*.pdf $$doc_dir && \
		if [ -d doc/mercury_ref ]; then \
		    	$(CP) doc/mercury_ref doc/mercury_user_guide \
				doc/mercury_library doc/mercury_faq \
				doc/mercury_trans_guide \
				$$doc_dir; \
		else \
			true; \
		fi && \
		(cd $$doc_dir && gzip -f -9 *.ps) && \
		cd $$info_dir || { \
			echo "*** copying documentation failed" 1>&2; \
			exit 1; \
		} \
	done
	# It's not worth installing the release branch versions of
	# these files. Developers should normally be working with
	# the latest versions.
	(cd mercury-latest/mercury/compiler/notes; mmake)
	$(CP) mercury-latest/mercury/compiler/notes/*.text \
		mercury-latest/mercury/compiler/notes/*.html doc-latest

local_install: all
	for dir in $(SUBDIRS) ;					\
	do							\
		$(CP) $$dir $(INSTALL_WEBDIR);			\
		chmod -R a+r,g+w $(INSTALL_WEBDIR)/$$dir;	\
		chgrp -R mercury $(INSTALL_WEBDIR)/$$dir;	\
	done
	# Keep installing the developer documentation into doc to avoid
	# breaking people's bookmarks. All links should refer to the copy
	# in doc-latest. For the manuals, use a forwarding page to the
	# `Documentation' page so that users can decide for themselves
	# whether they want to bookmark the release or snapshot documentation.
	[ -d $(INSTALL_WEBDIR)/doc ] || mkdir $(INSTALL_WEBDIR)/doc
	$(CP) mercury-latest/mercury/compiler/notes/*.text \
		mercury-latest/mercury/compiler/notes/*.html \
		$(INSTALL_WEBDIR)/doc
	for file in $(OLD_DOCS); do \
		$(CP) moved_documentation.html $(INSTALL_WEBDIR)/doc/$$file; \
	done
	chmod -R a+r,g+w $(INSTALL_WEBDIR)/doc
	chgrp -R mercury $(INSTALL_WEBDIR)/doc

local_clean:
	-rm -rf doc-release doc-latest mercury-release mercury-latest

include ../Makefile.common
