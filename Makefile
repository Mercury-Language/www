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

DIRS=contact download htdig information mailing-lists tutorial
ROOT=.

#-----------------------------------------------------------------------------#

target: html

globals.inc: include/globals.inc

include/globals.inc: include/globals.inc.in RELEASE_INFO
	sed -e "s/<RELEASE_VERSION>/$(RELEASE_VERSION)/" \
	    -e "s/<NEXT_BETA_VERSION>/$(NEXT_BETA_VERSION)/" \
	     < $< > $@

index.html: latest_news.inc newsdb.inc
news.html: latest_news.inc newsdb.inc
mcorba.html: mcorba_newsdb.inc

install: local_install

local_install:
	$(CP) images $(INSTALL_WEBDIR)
	chgrp -R mercury $(INSTALL_WEBDIR)/images
	chmod -R g+w,a+r $(INSTALL_WEBDIR)/images

clean: local_clean

local_clean:
	rm -f include/globals.inc

#-----------------------------------------------------------------------------#

include Makefile.common

#-----------------------------------------------------------------------------#
#-----------------------------------------------------------------------------#
