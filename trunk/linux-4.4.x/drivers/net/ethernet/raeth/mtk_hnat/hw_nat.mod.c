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

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x345d9e6c, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0xc424df9c, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x7e6a143a, __VMLINUX_SYMBOL_STR(devm_ioremap_nocache) },
	{ 0x96ba0245, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x3ae944e1, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xf193314c, __VMLINUX_SYMBOL_STR(of_property_read_u32_index) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xbafbfaae, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x7061d8e8, __VMLINUX_SYMBOL_STR(arp_tbl) },
	{ 0xe4f3fb11, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0xba7ff66d, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x6c546e4a, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x21a19f49, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x2a516ecc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xf7cdd847, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xaa9b0ad, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x2aa9ff82, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8deb2d0, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0xdf9b567d, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x69689144, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x67b131ed, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xa3b98508, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x42640b04, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xdb9a33b7, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xb6091ec0, __VMLINUX_SYMBOL_STR(__copy_user) },
	{ 0xd4f462eb, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x2bc95bd4, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xc684b54, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x4ea56f9, __VMLINUX_SYMBOL_STR(_kstrtol) },
	{ 0xf3840edc, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x91e3dfaf, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0x4fe1eddf, __VMLINUX_SYMBOL_STR(unregister_netevent_notifier) },
	{ 0xe6962589, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x35d33cf1, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x7301162a, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x8348b893, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x82186e04, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x3c2ab938, __VMLINUX_SYMBOL_STR(nd_tbl) },
	{ 0xceccff1d, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x75d2d18e, __VMLINUX_SYMBOL_STR(skb_vlan_untag) },
	{ 0x7a994f62, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x2495c050, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0xfeb60e39, __VMLINUX_SYMBOL_STR(of_prop_next_string) },
	{ 0x502c5f15, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xf9d2bae2, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x8afcdb37, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x6dbbb006, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x7eb6d315, __VMLINUX_SYMBOL_STR(mips_dma_free_coherent) },
	{ 0x5e55833a, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x96609e31, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xf1b2eb76, __VMLINUX_SYMBOL_STR(debugfs_create_regset32) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1d016117, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xe5c7afc5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xdb5f9d97, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xcdd55f9a, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0x7c4f4b00, __VMLINUX_SYMBOL_STR(mips_dma_alloc_coherent) },
	{ 0xa86b1d7d, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x11f7ce5e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9e0eabf4, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xa309b1a1, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x7a2a3a6a, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0xaa39f95c, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xaffc16b5, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xf871de6c, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x4761f17c, __VMLINUX_SYMBOL_STR(register_netevent_notifier) },
	{ 0x7aa103f, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x46786d5e, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x33d76a95, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cmediatek,mtk-hnat*");
MODULE_ALIAS("of:N*T*Cmediatek,mtk-hnat_v1*");
MODULE_ALIAS("of:N*T*Cmediatek,mtk-hnat_v2*");
MODULE_ALIAS("of:N*T*Cmediatek,mtk-hnat_v3*");
