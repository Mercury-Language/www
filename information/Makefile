target: all

ROOT=..
HTML= 	benchmarks.html 	\
	developer.html 		\
	documentation.html 	\
	features.html 		\
	motivation.html		\
	papers.html		\
	related.html

install: local_install

local_install:
	for dir in bench papers;		\
	do					\
		cp -a $$dir $(INSTALL_WEBDIR);	\
	done

include ../Makefile.common
