target: html

HTML=	list.html 
DIRS=
ROOT=../..

install: local_install

local_install:
	for dir in `ls`;					\
	do							\
		if [ -d $$dir -a $$dir != "include" ];		\
		then						\
			cp -af $$dir $(INSTALL_WEBDIR);		\
		fi						\
	done
	chmod -R a+r,g+w $(INSTALL_WEBDIR)/*
	chgrp -R mercury $(INSTALL_WEBDIR)/*

list.html: touch

include ../../Makefile.common
