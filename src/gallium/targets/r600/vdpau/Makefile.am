# Copyright © 2012 Intel Corporation
#
# Permission is hereby granted, free of charge, to any person obtaining a
# copy of this software and associated documentation files (the "Software"),
# to deal in the Software without restriction, including without limitation
# the rights to use, copy, modify, merge, publish, distribute, sublicense,
# and/or sell copies of the Software, and to permit persons to whom the
# Software is furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice (including the next
# paragraph) shall be included in all copies or substantial portions of the
# Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
# EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
# NONINFRINGEMENT.  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
# HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
# WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
# DEALINGS IN THE SOFTWARE.

include $(top_srcdir)/src/gallium/Automake.inc

AM_CFLAGS = \
	$(GALLIUM_VIDEO_CFLAGS)

vdpaudir = $(VDPAU_LIB_INSTALL_DIR)
vdpau_LTLIBRARIES = libvdpau_r600.la

nodist_EXTRA_libvdpau_r600_la_SOURCES = dummy.cpp
libvdpau_r600_la_SOURCES = \
	drm_target.c \
	$(top_srcdir)/src/gallium/auxiliary/vl/vl_winsys_dri.c

libvdpau_r600_la_LDFLAGS = \
	$(GALLIUM_VDPAU_LINKER_FLAGS) \
	-Wl,--dynamic-list=$(srcdir)/../../r300/dri/radeon.dyn

libvdpau_r600_la_LIBADD = \
	$(top_builddir)/src/gallium/drivers/radeon/libradeon.la \
	$(top_builddir)/src/gallium/drivers/r600/libr600.la \
	$(top_builddir)/src/gallium/winsys/radeon/drm/libradeonwinsys.la \
	$(GALLIUM_VDPAU_LIB_DEPS) \
	$(RADEON_LIBS)

include $(top_srcdir)/install-gallium-links.mk
