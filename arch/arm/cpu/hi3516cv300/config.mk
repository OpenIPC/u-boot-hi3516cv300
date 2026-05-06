#
# Copyright (c) 2016 HiSilicon Technologies Co., Ltd.
#
# This program is free software; you can redistribute  it and/or modify it
# under  the terms of  the GNU General Public License as published by the
# Free Software Foundation;  either version 2 of the  License, or (at your
# option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#

PLATFORM_RELFLAGS += -fno-strict-aliasing -fno-common -ffixed-r8
#		     -msoft-float

# Hi3516CV300 / Hi3516EV100 are ARM926EJ-S (ARMv5TEJ). The earlier
# config comment claimed "v7a" but the silicon is V3 / ARM9, confirmed
# by the QEMU machine model in widgetii/qemu-hisilicon. Stay on
# armv5te to match.
PLATFORM_RELFLAGS += -fno-aggressive-loop-optimizations
PLATFORM_CPPFLAGS += -march=armv5te
PLATFORM_CPPFLAGS += -mno-unaligned-access
# =========================================================================
#
# Supply options according to compiler version
#
# =========================================================================
PLATFORM_RELFLAGS +=$(call cc-option,-mshort-load-bytes,\
		    $(call cc-option,-malignment-traps,))
