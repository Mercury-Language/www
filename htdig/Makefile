target: html

HTML= 	header_and_footer.html		\
	nomatch.html			\
	syntax.html			\
	wrapper.html

DIRS=	
ROOT=..

include ../Makefile.common

html: header.inc footer.inc

install: local_install

clean: local_clean

header.inc footer.inc: header_and_footer.html
	$(ROOT)/bin/divide "---- cut here ----" header.inc footer.inc < \
		header_and_footer.html

local_install:
	cp -af header.inc footer.inc $(INSTALL_WEBDIR)/

local_clean:
	rm -f header.inc footer.inc

