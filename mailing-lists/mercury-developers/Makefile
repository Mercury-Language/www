target: html

HTML=	list.html 
DIRS=
ROOT=../..

list.html: touch

install: local_install

local_install: html
	for dir in `ls`;					\
	do							\
		if [ -d $$dir -a $$dir != "include" ];		\
		then						\
			cp -a $$dir $(INSTALL_WEBDIR);		\
		fi						\
	done
	chmod -R a+r $(INSTALL_WEBDIR)*

include ../../Makefile.common
