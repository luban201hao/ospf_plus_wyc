# Makefile.in generated by automake 1.11.5 from Makefile.am.
# lib/Makefile.  Generated from Makefile.in by configure.

# Copyright (C) 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002,
# 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010, 2011 Free Software
# Foundation, Inc.
# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.





am__make_dryrun = \
  { \
    am__dry=no; \
    case $$MAKEFLAGS in \
      *\\[\ \	]*) \
        echo 'am--echo: ; @echo "AM"  OK' | $(MAKE) -f - 2>/dev/null \
          | grep '^AM OK$$' >/dev/null || am__dry=yes;; \
      *) \
        for am__flg in $$MAKEFLAGS; do \
          case $$am__flg in \
            *=*|--*) ;; \
            *n*) am__dry=yes; break;; \
          esac; \
        done;; \
    esac; \
    test $$am__dry = yes; \
  }
pkgdatadir = $(datadir)/quagga
pkgincludedir = $(includedir)/quagga
pkglibdir = $(libdir)/quagga
pkglibexecdir = $(libexecdir)/quagga
am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
install_sh_SCRIPT = $(install_sh) -c
INSTALL_HEADER = $(INSTALL_DATA)
transform = $(program_transform_name)
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_triplet = x86_64-unknown-linux-gnu
host_triplet = x86_64-unknown-linux-gnu
target_triplet = x86_64-unknown-linux-gnu
subdir = lib
DIST_COMMON = $(pkginclude_HEADERS) $(srcdir)/Makefile.am \
	$(srcdir)/Makefile.in $(srcdir)/version.h.in
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
am__aclocal_m4_deps = $(top_srcdir)/m4/libtool.m4 \
	$(top_srcdir)/m4/ltoptions.m4 $(top_srcdir)/m4/ltsugar.m4 \
	$(top_srcdir)/m4/ltversion.m4 $(top_srcdir)/m4/lt~obsolete.m4 \
	$(top_srcdir)/configure.ac
am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) \
	$(ACLOCAL_M4)
mkinstalldirs = $(install_sh) -d
CONFIG_HEADER = $(top_builddir)/config.h
CONFIG_CLEAN_FILES = version.h
CONFIG_CLEAN_VPATH_FILES =
am__vpath_adj_setup = srcdirstrip=`echo "$(srcdir)" | sed 's|.|.|g'`;
am__vpath_adj = case $$p in \
    $(srcdir)/*) f=`echo "$$p" | sed "s|^$$srcdirstrip/||"`;; \
    *) f=$$p;; \
  esac;
am__strip_dir = f=`echo $$p | sed -e 's|^.*/||'`;
am__install_max = 40
am__nobase_strip_setup = \
  srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*|]/\\\\&/g'`
am__nobase_strip = \
  for p in $$list; do echo "$$p"; done | sed -e "s|$$srcdirstrip/||"
am__nobase_list = $(am__nobase_strip_setup); \
  for p in $$list; do echo "$$p $$p"; done | \
  sed "s| $$srcdirstrip/| |;"' / .*\//!s/ .*/ ./; s,\( .*\)/[^/]*$$,\1,' | \
  $(AWK) 'BEGIN { files["."] = "" } { files[$$2] = files[$$2] " " $$1; \
    if (++n[$$2] == $(am__install_max)) \
      { print $$2, files[$$2]; n[$$2] = 0; files[$$2] = "" } } \
    END { for (dir in files) print dir, files[dir] }'
am__base_list = \
  sed '$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;s/\n/ /g' | \
  sed '$$!N;$$!N;$$!N;$$!N;s/\n/ /g'
am__uninstall_files_from_dir = { \
  test -z "$$files" \
    || { test ! -d "$$dir" && test ! -f "$$dir" && test ! -r "$$dir"; } \
    || { echo " ( cd '$$dir' && rm -f" $$files ")"; \
         $(am__cd) "$$dir" && rm -f $$files; }; \
  }
am__installdirs = "$(DESTDIR)$(libdir)" "$(DESTDIR)$(pkgincludedir)"
LTLIBRARIES = $(lib_LTLIBRARIES)
am_libzebra_la_OBJECTS = network.lo pid_output.lo getopt.lo getopt1.lo \
	daemon.lo checksum.lo vector.lo linklist.lo vty.lo command.lo \
	sockunion.lo prefix.lo thread.lo if.lo memory.lo buffer.lo \
	table.lo hash.lo filter.lo routemap.lo distribute.lo stream.lo \
	str.lo log.lo plist.lo zclient.lo sockopt.lo smux.lo md5.lo \
	if_rmap.lo keychain.lo privs.lo sigevent.lo pqueue.lo jhash.lo \
	memtypes.lo workqueue.lo
libzebra_la_OBJECTS = $(am_libzebra_la_OBJECTS)
libzebra_la_LINK = $(LIBTOOL) --tag=CC $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=link $(CCLD) $(AM_CFLAGS) $(CFLAGS) \
	$(libzebra_la_LDFLAGS) $(LDFLAGS) -o $@
DEFAULT_INCLUDES = -I. -I$(top_builddir)
depcomp = $(SHELL) $(top_srcdir)/depcomp
am__depfiles_maybe = depfiles
am__mv = mv -f
COMPILE = $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) \
	$(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
LTCOMPILE = $(LIBTOOL) --tag=CC $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) \
	--mode=compile $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) \
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
CCLD = $(CC)
LINK = $(LIBTOOL) --tag=CC $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) \
	--mode=link $(CCLD) $(AM_CFLAGS) $(CFLAGS) $(AM_LDFLAGS) \
	$(LDFLAGS) -o $@
SOURCES = $(libzebra_la_SOURCES)
DIST_SOURCES = $(libzebra_la_SOURCES)
am__can_run_installinfo = \
  case $$AM_UPDATE_INFO_DIR in \
    n|no|NO) false;; \
    *) (install-info --version) >/dev/null 2>&1;; \
  esac
HEADERS = $(pkginclude_HEADERS)
ETAGS = etags
CTAGS = ctags
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
ACLOCAL = ${SHELL} /mnt/hgfs/vm_new/quagga-0.99.21/quagga-0.99.21/missing --run aclocal-1.11
AMTAR = $${TAR-tar}
AR = ar
AUTOCONF = ${SHELL} /mnt/hgfs/vm_new/quagga-0.99.21/quagga-0.99.21/missing --run autoconf
AUTOHEADER = ${SHELL} /mnt/hgfs/vm_new/quagga-0.99.21/quagga-0.99.21/missing --run autoheader
AUTOMAKE = ${SHELL} /mnt/hgfs/vm_new/quagga-0.99.21/quagga-0.99.21/missing --run automake-1.11
AWK = gawk
BABELD = babeld
BGPD = bgpd
CC = gcc
CCDEPMODE = depmode=gcc3
CFLAGS = -Os -fno-omit-frame-pointer -g -std=gnu99 -Wall -Wsign-compare -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Wmissing-prototypes -Wmissing-declarations -Wchar-subscripts -Wcast-qual
CONFDATE = 20221230
CPP = gcc -E
CPPFLAGS = 
CURSES = 
CYGPATH_W = echo
DEFS = -DHAVE_CONFIG_H -DSYSCONFDIR=\"$(sysconfdir)/\"
DEPDIR = .deps
DLLTOOL = false
DOC = doc
DSYMUTIL = 
DUMPBIN = 
ECHO_C = 
ECHO_N = -n
ECHO_T = 
EGREP = /bin/grep -E
EXEEXT = 
FGREP = /bin/grep -F
GAWK = gawk
GREP = /bin/grep
HAVE_LIBPCREPOSIX = 
IF_METHOD = if_netlink.o
IF_PROC = 
INCLUDES =  -I.. -I$(top_srcdir) -I$(top_srcdir)/lib 
INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = $(install_sh) -c -s
IOCTL_METHOD = ioctl.o
IPFORWARD = ipforward_proc.o
ISISD = 
ISIS_TOPOLOGY_DIR = 
ISIS_TOPOLOGY_INCLUDES = 
ISIS_TOPOLOGY_LIB = 
KERNEL_METHOD = 
LATEXMK = /bin/false
LD = /usr/bin/ld -m elf_x86_64
LDFLAGS = 
LIBCAP = 
LIBM = -lm
LIBOBJS =  ${LIBOBJDIR}lstat$U.o
LIBPAM = 
LIBREADLINE =  -ltermcap -lreadline
LIBS = -lcrypt   -lrt
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LIB_IPV6 = 
LIB_REGEX = 
LIPO = 
LN_S = cp -pR
LTLIBOBJS =  ${LIBOBJDIR}lstat$U.lo
MAKEINFO = ${SHELL} /mnt/hgfs/vm_new/quagga-0.99.21/quagga-0.99.21/missing --run makeinfo
MANIFEST_TOOL = :
MKDIR_P = /bin/mkdir -p
MULTIPATH_NUM = 1
NM = /usr/bin/nm -B
NMEDIT = 
OBJDUMP = objdump
OBJEXT = o
OSPF6D = ospf6d
OSPFAPI = 
OSPFCLIENT = ospfclient
OSPFD = ospfd
OTHER_METHOD = 
OTOOL = 
OTOOL64 = 
PACKAGE = quagga
PACKAGE_BUGREPORT = https://bugzilla.quagga.net
PACKAGE_NAME = Quagga
PACKAGE_STRING = Quagga 0.99.21
PACKAGE_TARNAME = quagga
PACKAGE_URL = 
PACKAGE_VERSION = 0.99.21
PATH_SEPARATOR = :
PDFLATEX = /bin/false
PERL = /usr/bin/perl
PICFLAGS = -fPIE
PILDFLAGS = -pie
RANLIB = ranlib
RIPD = ripd
RIPNGD = ripngd
RTREAD_METHOD = rtread_netlink.o
RT_METHOD = rt_netlink.o
SED = sed
SET_MAKE = 
SHELL = /bin/bash
SNMP_INCLUDES = 
SOLARIS = 
STRIP = strip
VERSION = 0.99.21
VTYSH = vtysh
WATCHQUAGGA = watchquagga
ZEBRA = zebra
abs_builddir = /mnt/hgfs/vm_new/quagga-0.99.21/quagga-0.99.21/lib
abs_srcdir = /mnt/hgfs/vm_new/quagga-0.99.21/quagga-0.99.21/lib
abs_top_builddir = /mnt/hgfs/vm_new/quagga-0.99.21/quagga-0.99.21
abs_top_srcdir = /mnt/hgfs/vm_new/quagga-0.99.21/quagga-0.99.21
ac_ct_AR = ar
ac_ct_CC = gcc
ac_ct_DUMPBIN = 
am__include = include
am__leading_dot = .
am__quote = 
am__tar = $${TAR-tar} chof - "$$tardir"
am__untar = $${TAR-tar} xf -
bindir = ${exec_prefix}/bin
build = x86_64-unknown-linux-gnu
build_alias = 
build_cpu = x86_64
build_os = linux-gnu
build_vendor = unknown
builddir = .
datadir = ${datarootdir}
datarootdir = ${prefix}/share
docdir = ${datarootdir}/doc/${PACKAGE_TARNAME}
dvidir = ${docdir}
enable_group = root
enable_user = root
enable_vty_group = root
exampledir = ${prefix}/etc
exec_prefix = ${prefix}
host = x86_64-unknown-linux-gnu
host_alias = 
host_cpu = x86_64
host_os = linux-gnu
host_vendor = unknown
htmldir = ${docdir}
includedir = ${prefix}/include
infodir = ${datarootdir}/info
install_sh = ${SHELL} /mnt/hgfs/vm_new/quagga-0.99.21/quagga-0.99.21/install-sh
libdir = ${exec_prefix}/lib
libexecdir = ${exec_prefix}/libexec
localedir = ${datarootdir}/locale
localstatedir = ${prefix}/var
mandir = ${datarootdir}/man
mkdir_p = /bin/mkdir -p
oldincludedir = /usr/include
pdfdir = ${docdir}
pkgsrcdir = 
pkgsrcrcdir = 
prefix = /usr/local
program_transform_name = s,x,x,
psdir = ${docdir}
quagga_statedir = /var/run
sbindir = ${exec_prefix}/sbin
sharedstatedir = ${prefix}/com
srcdir = .
sysconfdir = ${prefix}/etc
target = x86_64-unknown-linux-gnu
target_alias = 
target_cpu = x86_64
target_os = linux-gnu
target_vendor = unknown
top_build_prefix = ../
top_builddir = ..
top_srcdir = ..
lib_LTLIBRARIES = libzebra.la
libzebra_la_LDFLAGS = -version-info 0:0:0 
libzebra_la_SOURCES = \
	network.c pid_output.c getopt.c getopt1.c daemon.c \
	checksum.c vector.c linklist.c vty.c command.c \
	sockunion.c prefix.c thread.c if.c memory.c buffer.c table.c hash.c \
	filter.c routemap.c distribute.c stream.c str.c log.c plist.c \
	zclient.c sockopt.c smux.c md5.c if_rmap.c keychain.c privs.c \
	sigevent.c pqueue.c jhash.c memtypes.c workqueue.c

BUILT_SOURCES = memtypes.h route_types.h
libzebra_la_DEPENDENCIES = 
libzebra_la_LIBADD = 
pkginclude_HEADERS = \
	buffer.h checksum.h command.h filter.h getopt.h hash.h \
	if.h linklist.h log.h \
	memory.h network.h prefix.h routemap.h distribute.h sockunion.h \
	str.h stream.h table.h thread.h vector.h version.h vty.h zebra.h \
	plist.h zclient.h sockopt.h smux.h md5.h if_rmap.h keychain.h \
	privs.h sigevent.h pqueue.h jhash.h zassert.h memtypes.h \
	workqueue.h route_types.h

EXTRA_DIST = regex.c regex-gnu.h memtypes.awk route_types.pl route_types.txt
all: $(BUILT_SOURCES)
	$(MAKE) $(AM_MAKEFLAGS) all-am

.SUFFIXES:
.SUFFIXES: .c .lo .o .obj
$(srcdir)/Makefile.in:  $(srcdir)/Makefile.am  $(am__configure_deps)
	@for dep in $?; do \
	  case '$(am__configure_deps)' in \
	    *$$dep*) \
	      ( cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh ) \
	        && { if test -f $@; then exit 0; else break; fi; }; \
	      exit 1;; \
	  esac; \
	done; \
	echo ' cd $(top_srcdir) && $(AUTOMAKE) --gnu lib/Makefile'; \
	$(am__cd) $(top_srcdir) && \
	  $(AUTOMAKE) --gnu lib/Makefile
.PRECIOUS: Makefile
Makefile: $(srcdir)/Makefile.in $(top_builddir)/config.status
	@case '$?' in \
	  *config.status*) \
	    cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh;; \
	  *) \
	    echo ' cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe)'; \
	    cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe);; \
	esac;

$(top_builddir)/config.status: $(top_srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh

$(top_srcdir)/configure:  $(am__configure_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(ACLOCAL_M4):  $(am__aclocal_m4_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(am__aclocal_m4_deps):
version.h: $(top_builddir)/config.status $(srcdir)/version.h.in
	cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@
install-libLTLIBRARIES: $(lib_LTLIBRARIES)
	@$(NORMAL_INSTALL)
	@list='$(lib_LTLIBRARIES)'; test -n "$(libdir)" || list=; \
	list2=; for p in $$list; do \
	  if test -f $$p; then \
	    list2="$$list2 $$p"; \
	  else :; fi; \
	done; \
	test -z "$$list2" || { \
	  echo " $(MKDIR_P) '$(DESTDIR)$(libdir)'"; \
	  $(MKDIR_P) "$(DESTDIR)$(libdir)" || exit 1; \
	  echo " $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=install $(INSTALL) $(INSTALL_STRIP_FLAG) $$list2 '$(DESTDIR)$(libdir)'"; \
	  $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=install $(INSTALL) $(INSTALL_STRIP_FLAG) $$list2 "$(DESTDIR)$(libdir)"; \
	}

uninstall-libLTLIBRARIES:
	@$(NORMAL_UNINSTALL)
	@list='$(lib_LTLIBRARIES)'; test -n "$(libdir)" || list=; \
	for p in $$list; do \
	  $(am__strip_dir) \
	  echo " $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=uninstall rm -f '$(DESTDIR)$(libdir)/$$f'"; \
	  $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=uninstall rm -f "$(DESTDIR)$(libdir)/$$f"; \
	done

clean-libLTLIBRARIES:
	-test -z "$(lib_LTLIBRARIES)" || rm -f $(lib_LTLIBRARIES)
	@list='$(lib_LTLIBRARIES)'; for p in $$list; do \
	  dir="`echo $$p | sed -e 's|/[^/]*$$||'`"; \
	  test "$$dir" != "$$p" || dir=.; \
	  echo "rm -f \"$${dir}/so_locations\""; \
	  rm -f "$${dir}/so_locations"; \
	done
libzebra.la: $(libzebra_la_OBJECTS) $(libzebra_la_DEPENDENCIES) $(EXTRA_libzebra_la_DEPENDENCIES) 
	$(libzebra_la_LINK) -rpath $(libdir) $(libzebra_la_OBJECTS) $(libzebra_la_LIBADD) $(LIBS)

mostlyclean-compile:
	-rm -f *.$(OBJEXT)

distclean-compile:
	-rm -f *.tab.c

include ./$(DEPDIR)/buffer.Plo
include ./$(DEPDIR)/checksum.Plo
include ./$(DEPDIR)/command.Plo
include ./$(DEPDIR)/daemon.Plo
include ./$(DEPDIR)/distribute.Plo
include ./$(DEPDIR)/filter.Plo
include ./$(DEPDIR)/getopt.Plo
include ./$(DEPDIR)/getopt1.Plo
include ./$(DEPDIR)/hash.Plo
include ./$(DEPDIR)/if.Plo
include ./$(DEPDIR)/if_rmap.Plo
include ./$(DEPDIR)/jhash.Plo
include ./$(DEPDIR)/keychain.Plo
include ./$(DEPDIR)/linklist.Plo
include ./$(DEPDIR)/log.Plo
include ./$(DEPDIR)/md5.Plo
include ./$(DEPDIR)/memory.Plo
include ./$(DEPDIR)/memtypes.Plo
include ./$(DEPDIR)/network.Plo
include ./$(DEPDIR)/pid_output.Plo
include ./$(DEPDIR)/plist.Plo
include ./$(DEPDIR)/pqueue.Plo
include ./$(DEPDIR)/prefix.Plo
include ./$(DEPDIR)/privs.Plo
include ./$(DEPDIR)/routemap.Plo
include ./$(DEPDIR)/sigevent.Plo
include ./$(DEPDIR)/smux.Plo
include ./$(DEPDIR)/sockopt.Plo
include ./$(DEPDIR)/sockunion.Plo
include ./$(DEPDIR)/str.Plo
include ./$(DEPDIR)/stream.Plo
include ./$(DEPDIR)/table.Plo
include ./$(DEPDIR)/thread.Plo
include ./$(DEPDIR)/vector.Plo
include ./$(DEPDIR)/vty.Plo
include ./$(DEPDIR)/workqueue.Plo
include ./$(DEPDIR)/zclient.Plo

.c.o:
	$(COMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ $<
	$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Po
#	source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(COMPILE) -c $<

.c.obj:
	$(COMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ `$(CYGPATH_W) '$<'`
	$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Po
#	source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(COMPILE) -c `$(CYGPATH_W) '$<'`

.c.lo:
	$(LTCOMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ $<
	$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Plo
#	source='$<' object='$@' libtool=yes \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(LTCOMPILE) -c -o $@ $<

mostlyclean-libtool:
	-rm -f *.lo

clean-libtool:
	-rm -rf .libs _libs
install-pkgincludeHEADERS: $(pkginclude_HEADERS)
	@$(NORMAL_INSTALL)
	@list='$(pkginclude_HEADERS)'; test -n "$(pkgincludedir)" || list=; \
	if test -n "$$list"; then \
	  echo " $(MKDIR_P) '$(DESTDIR)$(pkgincludedir)'"; \
	  $(MKDIR_P) "$(DESTDIR)$(pkgincludedir)" || exit 1; \
	fi; \
	for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  echo "$$d$$p"; \
	done | $(am__base_list) | \
	while read files; do \
	  echo " $(INSTALL_HEADER) $$files '$(DESTDIR)$(pkgincludedir)'"; \
	  $(INSTALL_HEADER) $$files "$(DESTDIR)$(pkgincludedir)" || exit $$?; \
	done

uninstall-pkgincludeHEADERS:
	@$(NORMAL_UNINSTALL)
	@list='$(pkginclude_HEADERS)'; test -n "$(pkgincludedir)" || list=; \
	files=`for p in $$list; do echo $$p; done | sed -e 's|^.*/||'`; \
	dir='$(DESTDIR)$(pkgincludedir)'; $(am__uninstall_files_from_dir)

ID: $(HEADERS) $(SOURCES) $(LISP) $(TAGS_FILES)
	list='$(SOURCES) $(HEADERS) $(LISP) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '{ files[$$0] = 1; nonempty = 1; } \
	      END { if (nonempty) { for (i in files) print i; }; }'`; \
	mkid -fID $$unique
tags: TAGS

TAGS:  $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) \
		$(TAGS_FILES) $(LISP)
	set x; \
	here=`pwd`; \
	list='$(SOURCES) $(HEADERS)  $(LISP) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '{ files[$$0] = 1; nonempty = 1; } \
	      END { if (nonempty) { for (i in files) print i; }; }'`; \
	shift; \
	if test -z "$(ETAGS_ARGS)$$*$$unique"; then :; else \
	  test -n "$$unique" || unique=$$empty_fix; \
	  if test $$# -gt 0; then \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      "$$@" $$unique; \
	  else \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      $$unique; \
	  fi; \
	fi
ctags: CTAGS
CTAGS:  $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) \
		$(TAGS_FILES) $(LISP)
	list='$(SOURCES) $(HEADERS)  $(LISP) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '{ files[$$0] = 1; nonempty = 1; } \
	      END { if (nonempty) { for (i in files) print i; }; }'`; \
	test -z "$(CTAGS_ARGS)$$unique" \
	  || $(CTAGS) $(CTAGSFLAGS) $(AM_CTAGSFLAGS) $(CTAGS_ARGS) \
	     $$unique

GTAGS:
	here=`$(am__cd) $(top_builddir) && pwd` \
	  && $(am__cd) $(top_srcdir) \
	  && gtags -i $(GTAGS_ARGS) "$$here"

distclean-tags:
	-rm -f TAGS ID GTAGS GRTAGS GSYMS GPATH tags

distdir: $(DISTFILES)
	@srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	topsrcdirstrip=`echo "$(top_srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	list='$(DISTFILES)'; \
	  dist_files=`for file in $$list; do echo $$file; done | \
	  sed -e "s|^$$srcdirstrip/||;t" \
	      -e "s|^$$topsrcdirstrip/|$(top_builddir)/|;t"`; \
	case $$dist_files in \
	  */*) $(MKDIR_P) `echo "$$dist_files" | \
			   sed '/\//!d;s|^|$(distdir)/|;s,/[^/]*$$,,' | \
			   sort -u` ;; \
	esac; \
	for file in $$dist_files; do \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  if test -d $$d/$$file; then \
	    dir=`echo "/$$file" | sed -e 's,/[^/]*$$,,'`; \
	    if test -d "$(distdir)/$$file"; then \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \
	      cp -fpR $(srcdir)/$$file "$(distdir)$$dir" || exit 1; \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    cp -fpR $$d/$$file "$(distdir)$$dir" || exit 1; \
	  else \
	    test -f "$(distdir)/$$file" \
	    || cp -p $$d/$$file "$(distdir)/$$file" \
	    || exit 1; \
	  fi; \
	done
check-am: all-am
check: $(BUILT_SOURCES)
	$(MAKE) $(AM_MAKEFLAGS) check-am
all-am: Makefile $(LTLIBRARIES) $(HEADERS)
installdirs:
	for dir in "$(DESTDIR)$(libdir)" "$(DESTDIR)$(pkgincludedir)"; do \
	  test -z "$$dir" || $(MKDIR_P) "$$dir"; \
	done
install: $(BUILT_SOURCES)
	$(MAKE) $(AM_MAKEFLAGS) install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	if test -z '$(STRIP)'; then \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	      install; \
	else \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	    "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'" install; \
	fi
mostlyclean-generic:

clean-generic:

distclean-generic:
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)
	-test . = "$(srcdir)" || test -z "$(CONFIG_CLEAN_VPATH_FILES)" || rm -f $(CONFIG_CLEAN_VPATH_FILES)

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
	-test -z "$(BUILT_SOURCES)" || rm -f $(BUILT_SOURCES)
clean: clean-am

clean-am: clean-generic clean-libLTLIBRARIES clean-libtool \
	mostlyclean-am

distclean: distclean-am
	-rm -rf ./$(DEPDIR)
	-rm -f Makefile
distclean-am: clean-am distclean-compile distclean-generic \
	distclean-tags

dvi: dvi-am

dvi-am:

html: html-am

html-am:

info: info-am

info-am:

install-data-am: install-pkgincludeHEADERS

install-dvi: install-dvi-am

install-dvi-am:

install-exec-am: install-libLTLIBRARIES

install-html: install-html-am

install-html-am:

install-info: install-info-am

install-info-am:

install-man:

install-pdf: install-pdf-am

install-pdf-am:

install-ps: install-ps-am

install-ps-am:

installcheck-am:

maintainer-clean: maintainer-clean-am
	-rm -rf ./$(DEPDIR)
	-rm -f Makefile
maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-compile mostlyclean-generic \
	mostlyclean-libtool

pdf: pdf-am

pdf-am:

ps: ps-am

ps-am:

uninstall-am: uninstall-libLTLIBRARIES uninstall-pkgincludeHEADERS

.MAKE: all check install install-am install-strip

.PHONY: CTAGS GTAGS all all-am check check-am clean clean-generic \
	clean-libLTLIBRARIES clean-libtool ctags distclean \
	distclean-compile distclean-generic distclean-libtool \
	distclean-tags distdir dvi dvi-am html html-am info info-am \
	install install-am install-data install-data-am install-dvi \
	install-dvi-am install-exec install-exec-am install-html \
	install-html-am install-info install-info-am \
	install-libLTLIBRARIES install-man install-pdf install-pdf-am \
	install-pkgincludeHEADERS install-ps install-ps-am \
	install-strip installcheck installcheck-am installdirs \
	maintainer-clean maintainer-clean-generic mostlyclean \
	mostlyclean-compile mostlyclean-generic mostlyclean-libtool \
	pdf pdf-am ps ps-am tags uninstall uninstall-am \
	uninstall-libLTLIBRARIES uninstall-pkgincludeHEADERS


memtypes.h: $(srcdir)/memtypes.c $(srcdir)/memtypes.awk
	($(GAWK) -f $(srcdir)/memtypes.awk $(srcdir)/memtypes.c > $@)

route_types.h: $(srcdir)/route_types.txt $(srcdir)/route_types.pl
	/usr/bin/perl $(srcdir)/route_types.pl < $(srcdir)/route_types.txt > $@

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
