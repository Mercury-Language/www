#-----------------------------------------------------------------------------#
# Copyright (C) 1998 University of Melbourne.
# This file may only be copied under the terms of the GNU General
# Public License - see the file COPYING in the Mercury distribution.
#-----------------------------------------------------------------------------#

include RELEASE_INFO

HTML=	index.html 		\
	mcorba.html		\
	news.html 		\
	information.html 	\
	backends.html 		\
	download.html 		\
	contact.html 		\
	dotnet.html 		\
	applications.html	\
	contributions.html	\
	search.html

XML=    rss.xml

DIRS=contact download htdig information mailing-lists tutorial
ROOT=.

#-----------------------------------------------------------------------------#

target: html

globals.inc: include/globals.inc

include/globals.inc: include/globals.inc.in RELEASE_INFO
	sed -e "s/<RELEASE_VERSION>/$(RELEASE_VERSION)/" \
	    -e "s/<NEXT_BETA_VERSION>/$(NEXT_BETA_VERSION)/" \
	    -e "s/<WWW_DOMAIN>/$(WWW_DOMAIN)/" \
	     < $< > $@

index.html: latest_news.inc newsdb.inc
news.html: latest_news.inc newsdb.inc
mcorba.html: mcorba_newsdb.inc

install: local_install

# What is this in aid of? It doesn't make sense on the champagne server (at
# the moment).  So I commented it out.
# local_install:
# 	/bin/rm -rf "$(INSTALL_WEBDIR)/images"
# 	$(CP) images $(INSTALL_WEBDIR)
# 	chgrp -R mercury $(INSTALL_WEBDIR)/images
# 	chmod -R g+w,a+rx $(INSTALL_WEBDIR)/images

clean: local_clean

local_clean:
	rm -f include/globals.inc rss.xml

ROTD_PATTERNS = mercury-compiler-rotd-*-unstable.tar.gz \
	mercury-extras-rotd-*-unstable.tar.gz 		\
	mercury-tests-rotd-*-unstable.tar.gz 		\
	mercury-test-failures-rotd-*-unstable.txt	\
	mercury-NEWS-rotd-*-unstable.txt		\
	mercury-INSTALL-rotd-*-unstable.txt

delete_old_rotds:
	for installed_path in $(BETA_WEBDIR) $(BETA_FTPDIR); 		     \
	do								     \
		for pattern in $(ROTD_PATTERNS); 			     \
		do							     \
			path_and_pattern="$$installed_path/$$pattern";       \
			num_matches=`ls $$path_and_pattern | wc -l`;	     \
			num_matches_minus_one=`expr $$num_matches - 1`;      \
			ls -t $$path_and_pattern | 			     \
				tail -n $$num_matches_minus_one /dev/stdin | \
				xargs rm -f ;				     \
		done;							     \
	done

#-----------------------------------------------------------------------------#

include Makefile.common

#-----------------------------------------------------------------------------#
#-----------------------------------------------------------------------------#
