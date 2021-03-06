#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7c30cdd7, "module_layout" },
	{ 0xfe990052, "gpio_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfcc0236e, "gpiod_unexport" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa6564348, "gpiod_to_irq" },
	{ 0xb50425f6, "gpiod_set_debounce" },
	{ 0x1a7b7579, "gpiod_direction_input" },
	{ 0x597980c, "gpiod_export" },
	{ 0x9d4cb3b3, "gpiod_direction_output_raw" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x92997ed8, "_printk" },
	{ 0xaf78c0b, "gpiod_get_raw_value" },
	{ 0xb0592d98, "gpiod_set_raw_value" },
	{ 0xa32498f0, "gpio_to_desc" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "02EDA457986E5FD61ABDA67");
