target: html

HTML= 	mailing-lists.html message.html message_list.html search.html
DIRS=mercury-users mercury-developers
ROOT=..

html: local_html

local_html: msglist_header.inc msg_header.inc msglist_footer.inc msg_footer.inc

msglist_header.inc msglist_footer.inc: message_list.html
	echo "May need to rearchive the hypermail archive"
	$(ROOT)/bin/divide "--- Cut here ---" msglist_header.inc \
			msglist_footer.inc < message_list.html

msg_header.inc msg_footer.inc: message.html
	echo "May need to rearchive the hypermail archive"
	$(ROOT)/bin/divide "--- Cut here ---" msg_header.inc \
			msg_footer.inc < message.html

clean: local_clean

local_clean:
	rm -f msglist_header.inc msglist_footer.inc msg_header.inc msg_footer.inc

include ../Makefile.common
