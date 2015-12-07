# Makefile for Yuma entire project
#  
#   very top directory

##################### LIBRARIES ########################
#
# DIRS:  
# 
# This is an ordered list
# Put only the directories that build object files in the list

DIRS =

ifndef DEVELOPER
DIRS += libtecla
endif  # DEVELOPER

# DIRS == all netconf dirs
DIRS += netconf

ifndef NOTOASTER
DIRS += libtoaster
DIRS += libtest
endif

# building yuma-doc ignores DIRS, uses DOCDIRS instead
DOCDIRS = netconf/doc

#################### PLATFORM DEFINITIONS ############

all: yumaall

################################ MAKE RULES #################################
#

clean: yumaclean

superclean: yumasuperclean

distclean: yumadistclean

install: yumainstall

ifdef DOC
# yuma-doc package
# nothing to make at this time, just install
yumaall: yuma-doc

yumainstall: yuma-doc-install

else
ifdef DEVELOPER
# yuma-dev package
yumaall: yuma-dev

yumainstall: yuma-all-install

else
# yuma package or normal build
yumaall: yuma-all

yumainstall: yuma-all-install

endif  # DEVELOPER
endif  # DOC

libtecla/Makefile:
	cd libtecla && ./configure

yuma-all: libtecla/Makefile
	for dir in $(DIRS); do\
	  cd $$dir && $(MAKE) && cd ..;\
        done

yuma-dev:
	for dir in $(DIRS); do\
	  cd $$dir && $(MAKE) && cd ..;\
        done

yumaclean: libtecla/Makefile
	for dir in $(DIRS); do\
	  cd $$dir && $(MAKE) clean && cd ..;\
        done

yumasuperclean: libtecla/Makefile
	for dir in $(DIRS); do\
	  cd $$dir && $(MAKE) superclean && cd ..;\
        done

yumadistclean: libtecla/Makefile
	for dir in $(DIRS); do\
	  cd $$dir && $(MAKE) distclean && cd ..;\
        done

yuma-all-install:
	for dir in $(DIRS); do\
          cd $$dir && $(MAKE) install && cd ..;\
        done

yuma-doc:
	for dir in $(DOCDIRS); do\
          cd $$dir && $(MAKE) && cd ..;\
        done

yuma-doc-install:
	for dir in $(DOCDIRS); do\
          cd $$dir && $(MAKE) install && cd ..;\
        done

.PHONY: all clean superclean distclean install yuma-dev \
	yumaall yumaclean yumasuperclean yumadistclean yumainstall \
	yuma-all yuma-all-install yuma-doc yuma-doc-install


# prevent the make program from choking on all the symbols
# that get generated from autogenerated make rules
.NOEXPORT:



