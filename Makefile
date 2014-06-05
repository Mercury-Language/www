#-----------------------------------------------------------------------------#

include RELEASE_INFO

PHP = /usr/bin/php -q

COMMON_INCS :=			\
	include/globals.inc 	\
	include/menubar.inc	\
	include/template.inc	\
	include/functions.inc 	\
	include/footer.inc

NEWS_INCS :=			\
	include/latest_news.inc	\
	news/newsdb.inc

PHPSRC	:= $(wildcard *.php */*.php)
HTML 	:= $(patsubst %.php,%.html,$(PHPSRC))
XML	:= rss.xml

.PHONY: html
html: $(HTML) $(XML)

%.html: %.php include/%.inc $(COMMON_INCS)
	cd $(dir $@) && $(PHP) $(notdir $<) > $(notdir $@)

%.xml: %.php $(COMMON_INCS) $(NEWS_INCS)
	$(PHP) $< > $@

index.html news.html: $(NEWS_INCS)

mcorba.html: news/mcorba_newsdb.inc

.PHONY: rss.html

include/globals.inc: include/globals.inc.in RELEASE_INFO
	sed -e "s/<RELEASE_VERSION>/$(RELEASE_VERSION)/" \
	    -e "s/<NEXT_BETA_VERSION>/$(NEXT_BETA_VERSION)/" \
	    -e "s/<WWW_DOMAIN>/$(WWW_DOMAIN)/" \
	     < $< > $@

.PHONY: clean
clean:
	-$(RM) $(HTML) $(XML)

.PHONY: touch
touch:
	touch $(PHPSRC)

.PHONY: gitignore
gitignore:
	@printf "%s\n" $(HTML) $(XML) | LC_COLLATE=C sort > .gitignore

#-----------------------------------------------------------------------------#
