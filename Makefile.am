#-----------------------------------------------------------------------------
#
#  Copyright (C) 2006-2023  Florian Pose, Ingenieurgemeinschaft IgH
#
#  This file is part of the IgH EtherCAT Master.
#
#  The IgH EtherCAT Master is free software; you can redistribute it and/or
#  modify it under the terms of the GNU General Public License version 2, as
#  published by the Free Software Foundation.
#
#  The IgH EtherCAT Master is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General
#  Public License for more details.
#
#  You should have received a copy of the GNU General Public License along
#  with the IgH EtherCAT Master; if not, write to the Free Software
#  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
#
#  ---
#
#  The license mentioned above concerns the source code only. Using the
#  EtherCAT technology and brand is only permitted in compliance with the
#  industrial property and similar rights of Beckhoff Automation GmbH.
#
#-----------------------------------------------------------------------------

include $(top_srcdir)/Makefile.kbuild

ACLOCAL_AMFLAGS = -I m4

AM_DISTCHECK_CONFIGURE_FLAGS = \
	--with-systemdsystemunitdir=$$dc_install_base/$(systemdsystemunitdir)

SUBDIRS = \
	include \
	script

if ENABLE_KERNEL
SUBDIRS += \
	devices \
	master
endif

if BUILD_TOOL
SUBDIRS += tool
endif

if ENABLE_USERLIB
# userspace examples depend on lib/
SUBDIRS += \
	lib \
	examples
endif

if ENABLE_TTY
SUBDIRS += tty
endif

noinst_HEADERS = \
	globals.h

EXTRA_DIST = \
	CodingStyle.md \
	FEATURES.md \
	INSTALL.md \
	README.EoE \
	README.md \
	ethercat.spec

mydist:
	git -C $(srcdir) log > ChangeLog
	@REV=`git -C $(srcdir) describe` && \
		$(MAKE) dist-bzip2 distdir=$(PACKAGE)-$(VERSION)-$${REV}

dist-hook:
	-if which git >/dev/null 2>&1; then \
		git -C $(srcdir) describe 2>/dev/null >$(distdir)/revision; \
	fi

mrproper: clean cleandoc
	rm -rf \
		*~ \
		ChangeLog \
		Doxyfile \
		Kbuild \
		Makefile \
		Makefile.in \
		TAGS \
		aclocal.m4 \
		autoconf \
		autom4te.cache \
		config.h \
		config.h.in \
		config.log \
		config.status \
		configure \
		configure.in \
		libtool \
		stamp-h1 \
		ethercat.spec \
		script/init.d/ethercat \
		m4/*.m4 \
		`find -path ./documentation -prune -o "(" -name Makefile -o -name Makefile.in -o -name Kbuild -o -name .deps -o -name Module.symvers -o -name .tmp_versions ")" -print`

doc:
	doxygen Doxyfile

cleandoc:
	@rm -rf doxygen-output

#-----------------------------------------------------------------------------
