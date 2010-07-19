target: html

ROOT=..
HTML= 	current-release-bugs.html	\
	gcc-backend.html		\
	limitations.html		\
	old-release.html		\
	release.html			\
	release-0.3.html		\
	release-0.4.html		\
	release-0.5.html		\
	release-0.5.1.html		\
	release-0.6.html		\
	release-0.7.html		\
	release-0.7.3.html		\
	release-0.8.html		\
	release-0.9.html		\
	release-0.10.html		\
	release-0.11.html		\
	release-0.12.html		\
	release-0.13.html		\
	release-10.04.html		\
	release-0.3-bugs.html		\
	release-0.4-bugs.html		\
	release-0.5-bugs.html		\
	release-0.5.1-bugs.html		\
	release-0.6-bugs.html		\
	release-0.7-bugs.html		\
	release-0.8-bugs.html		\
	release-0.9-bugs.html		\
	release-0.10-bugs.html		\
	release-0.11-bugs.html		\
	release-0.12-bugs.html		\
	release-0.13-bugs.html		\
	release-10.04-bugs.html		\
	release-0.3-contents.html	\
	release-0.4-contents.html	\
	release-0.5-contents.html	\
	release-0.6-contents.html	\
	release-0.7-contents.html	\
	release-0.8-contents.html	\
	release-0.9-contents.html	\
	release-0.10-contents.html	\
	release-0.11-contents.html	\
	release-0.12-contents.html	\
	release-0.13-contents.html	\
	release-10.04-contents.html	\
	rotd.html

current-release-bugs.html: release-10.04-bugs.inc

install: local_install

local_install: all
	for dir in patches;					\
	do							\
		$(CP) $$dir $(INSTALL_WEBDIR);			\
		chmod -R a+r,g+w $(INSTALL_WEBDIR)/$$dir;	\
		chgrp -R mercury $(INSTALL_WEBDIR)/$$dir;	\
	done

include ../Makefile.common
