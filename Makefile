#-----------------------------------------------------------------------------#
# Copyright (C) 1995 University of Melbourne.
# This file may only be copied under the terms of the GNU General
# Public License - see the file COPYING in the Mercury distribution.
#-----------------------------------------------------------------------------#

HTML=	index.html 		\
	news.html 		\
	information.html 	\
	download.html 		\
	contact.html 

DIRS=contact download information mailing-lists
ROOT=.

#-----------------------------------------------------------------------------#

target: all
index.html: latest_news.inc
news.html: latest_news.inc old_news.inc

#-----------------------------------------------------------------------------#

include Makefile.common

#-----------------------------------------------------------------------------#
#-----------------------------------------------------------------------------#
