target: all

HTML=	list.html 
DIRS=
ROOT=../..

list.html: touch

install: local_install

local_install:
	for dir in `ls`;					\
	do							\
		if [ -d $$dir ];				\
		then						\
			cp -a $$dir $(INSTALL_WEBDIR);		\
		fi						\
	done

include ../../Makefile.common
