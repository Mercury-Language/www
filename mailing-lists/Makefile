target: html

HTML= 	mailing-lists.html message.html message_list.html search.html
DIRS=mercury-users mercury-developers
ROOT=..

html: local_html

local_html: msglist_header.inc msg_header.inc msglist_footer.inc msg_footer.inc

msglist_header.inc: message_list.html
	echo "May need to rearchive the hypermail archive"
	cat message_list.html | sed -e 's/\%\"/\%\%\"/g' | \
		sed -e 's/\.\./\.\.\/\.\.\/\.\./g' |	\
		tac | tail +7 | tac > msglist_header.inc

msglist_footer.inc: message_list.html
	cat message_list.html | sed -e 's/\%\"/\%\%\"/g' | \
		sed -e 's/\.\./\.\.\/\.\.\/\.\./g' | \
		tail -6 > msglist_footer.inc

msg_header.inc: message.html
	echo "May need to rearchive the hypermail archive"
	cat message.html | sed -e 's/\%\"/\%\%\"/g' | \
		sed -e 's/\.\./\.\.\/\.\.\/\.\./g' |	\
		tac | tail +7 | tac > msg_header.inc

msg_footer.inc: message.html
	cat message.html | sed -e 's/\%\"/\%\%\"/g' | \
		sed -e 's/\.\./\.\.\/\.\.\/\.\./g' | \
		tail -6 > msg_footer.inc

include ../Makefile.common
