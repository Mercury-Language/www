target: html

HTML= 	mailing-lists.html message.html message_list.html search.html
DIRS=mercury-users mercury-ads mercury-developers mercury-reviews
ROOT=..

html: local_html

local_html: msglist_header.inc msg_header.inc msglist_footer.inc msg_footer.inc

	# When generating the header and footers for the mail messages,
	# we need to escape percentage signs and add one more level of
	# indirection to the relative paths.
SED= sed -e 's/\%\"/\%\%\"/g' | sed -e 's/\.\./\.\.\/\.\.\/\.\./g'

msglist_header.inc msglist_footer.inc: message_list.html
	echo "May need to rearchive the hypermail archive"
	cat message_list.html | $(SED) | $(ROOT)/bin/divide 	\
		"--- Cut here ---" msglist_header.inc msglist_footer.inc

msg_header.inc msg_footer.inc: message.html
	echo "May need to rearchive the hypermail archive"
	cat message.html | $(SED) | $(ROOT)/bin/divide 	\
		"--- Cut here ---" msg_header.inc msg_footer.inc

clean: local_clean

local_clean:
	rm -f msglist_header.inc msglist_footer.inc msg_header.inc msg_footer.inc

include ../Makefile.common
