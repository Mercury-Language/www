target: html

HTML= 	blank.html mailing-lists.html search.html
DIRS=mercury-users mercury-developers
ROOT=..

html: local_html

local_html: header.inc footer.inc

header.inc: blank.html
	echo "May need to rearchive the hypermail archive"
	cat blank.html | sed -e 's/\.\./\.\.\/\.\.\/\.\./g' |	\
		tail +4 | tac | tail +7 | tac > header.inc

footer.inc: blank.html
	cat blank.html | sed -e 's/\.\./\.\.\/\.\.\/\.\./g' | \
		tail -6 | head -n 3 > footer.inc

include ../Makefile.common
