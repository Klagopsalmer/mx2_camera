#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-dma-contig,soc_camera,soc_mediabus,videobuf2-core,v4l2-common";

MODULE_ALIAS("platform:imx27-camera");
MODULE_ALIAS("of:N*T*Cfsl,mx27-camera*");

MODULE_INFO(srcversion, "31AF953145C612C19C7495D");
