target: all

HTML=	list.html 
DIRS=
ROOT=../..

list.html: touch

install: local_install

local_install:
	for dir in `ls`;					\
	do							\
		if [ -d $$dir -a $$dir != "include" ];		\
		then						\
			cp -a $$dir $(INSTALL_WEBDIR);		\
		fi						\
	done

include ../../Makefile.common
