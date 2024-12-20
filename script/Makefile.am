#------------------------------------------------------------------------------
#
#  Makefile.am
#
#  IgH EtherCAT master
#
#  Copyright (C) 2006-2022  Florian Pose, Ingenieurgemeinschaft IgH
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
#------------------------------------------------------------------------------

sbin_SCRIPTS = ethercatctl

dist_sysconf_DATA = ethercat.conf

script_templates = \
	ethercatctl.in \
	ethercat.service.in \
	init.d/ethercat.in

EXTRA_DIST = \
	$(script_templates) \
	ethercat.bash_completion \
	ifup-eoe.sh

CLEANFILES = \
	ethercatctl \
	ethercat.service \
	init.d/ethercat \
	ethercat

if HAVE_SYSTEMD
systemdsystemunit_DATA = ethercat.service
endif

if HAVE_INITD
initdir = $(sysconfdir)/init.d
init_SCRIPTS = init.d/ethercat
sysdir = $(sysconfdir)/sysconfig
sys_DATA = ethercat
endif

completionsdir = $(datadir)/bash-completion/completions
completions_DATA = ethercat.bash_completion

install-data-hook:
	cd $(DESTDIR)$(completionsdir); \
    mv ethercat.bash_completion ethercat

uninstall-hook:
	cd $(DESTDIR)$(completionsdir); \
    rm ethercat

# Any precious variable used inside script_templates should appear here
expand_script = $(SED) \
	-e 's,[@]VERSION[@],$(VERSION),g' \
	-e 's,[@]bindir[@],$(bindir),g' \
	-e 's,[@]sbindir[@],$(sbindir),g' \
	-e 's,[@]sysconfdir[@],$(sysconfdir),g'

ethercatctl: $(srcdir)/ethercatctl.in Makefile
	$(expand_script) < $< > $@

ethercat.service: $(srcdir)/ethercat.service.in Makefile
	$(expand_script) < $< > $@

init.d/ethercat: $(srcdir)/init.d/ethercat.in Makefile
	$(MKDIR_P) init.d && \
	$(expand_script) < $< > $@

ethercat: $(srcdir)/ethercat.conf Makefile
	$(SED) -e 's,for use with ethercatctl,for use with init.d,g' < $< > $@

#------------------------------------------------------------------------------
