# Retired: hi3516cv300 is built in OpenIPC/u-boot

This repository is archived. U-Boot for Hi3516CV300 and Hi3516EV100 is now
built from the same tree as every other HiSilicon and Goke SoC OpenIPC
supports: the `openipc-hisilicon` branch of
[OpenIPC/u-boot](https://github.com/OpenIPC/u-boot/tree/openipc-hisilicon),
with its CI on the `openipc` branch. Those builds are published as
`u-boot-hi3516cv300-nor.bin`, `u-boot-hi3516cv300-nand.bin` and
`u-boot-hi3516ev100-nor.bin` in the
[OpenIPC/firmware `latest`](https://github.com/OpenIPC/firmware/releases/tag/latest)
release; the NOR builds find the flash layout at boot, fixed slots or the
split NOR image (OpenIPC/u-boot#42).

The U-Boot 2010.06 images this repository built,
`u-boot-hi3516cv300-universal.bin` and `u-boot-hi3516ev100-universal.bin`,
stay on `latest` as they are: qemu-hisilicon CI and OpenIPC/distributor still
use them, and cameras in the field run them. They are no longer rebuilt.

The history here stays readable for reference.
