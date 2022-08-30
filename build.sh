#!/bin/sh -e

export ARCH=arm
export CROSS_COMPILE=${CROSS_COMPILE:-arm-hisiv500-linux-}

OUTPUTDIR="${HOME}/src/hisi/uboot"
SOCS="hi3516cv300 hi3516ev100"

for soc in ${SOCS};do

make clean
make ${soc}_config
cp reg_info_${soc}.bin .reg
make  -j8
make mini-boot.bin
cp mini-boot.bin u-boot-${soc}.bin
cp u-boot-${soc}.bin ${OUTPUTDIR}/u-boot-${soc}-universal.bin
#cp u-boot-${soc}.bin /srv/tftp/u-boot-${soc}-universal.bin

done
