target: all

HTML=	list.html 
DIRS=
ROOT=../..

install: local_install

local_install:
	for dir in `ls`;					\
	do							\
		if [ -d $$dir -a $$dir != "include" ];		\
		then						\
			cp -a $$dir $(INSTALL_WEBDIR);		\
		fi						\
	done

list.html: touch

include ../../Makefile.common
