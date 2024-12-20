#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

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

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x55eb09de, "__tracepoint_xdp_exception" },
	{ 0xb3c4c9cd, "alloc_etherdev_mqs" },
	{ 0xb8c09eb, "pci_save_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x61dc00f5, "pcie_capability_read_word" },
	{ 0xa230ebc2, "device_set_wakeup_enable" },
	{ 0x8fa9d9e8, "__SCT__tp_func_xdp_exception" },
	{ 0x1f3dd9fe, "__skb_pad" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xa121b0d4, "pcie_capability_write_word" },
	{ 0x7cc06627, "bpf_prog_put" },
	{ 0x985c2b3c, "skb_copy_bits" },
	{ 0xa584fc0, "param_ops_uint" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x3070d37b, "pci_request_selected_regions" },
	{ 0xbc34942a, "pci_release_selected_regions" },
	{ 0x6e3ea13e, "devm_kmalloc" },
	{ 0x62b56787, "pci_wake_from_d3" },
	{ 0xe4ee50d3, "skb_put" },
	{ 0x1dd53ea3, "skb_tstamp_tx" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x852946c5, "__napi_alloc_skb" },
	{ 0x3eee9c58, "pci_enable_device_mem" },
	{ 0x7aeae620, "dca_remove_requester" },
	{ 0x1136a89f, "consume_skb" },
	{ 0x36d0f8ac, "pci_iomap" },
	{ 0xbb7195a5, "xdp_warn" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xfc7a80e0, "netif_napi_add_weight" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x756dc6d2, "pci_vfs_assigned" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb326faf7, "i2c_bit_add_bus" },
	{ 0x261145ae, "bpf_warn_invalid_xdp_action" },
	{ 0x7d80f619, "unregister_netdev" },
	{ 0xa2759719, "xdp_convert_zc_to_xdp_frame" },
	{ 0xd7b17566, "xdp_features_set_redirect_target" },
	{ 0x5536c54, "rt_mutex_base_init" },
	{ 0x9bf890ca, "dma_unmap_page_attrs" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xf7370f56, "system_state" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0xee2a406b, "__pci_register_driver" },
	{ 0x7e33a443, "dma_sync_single_for_device" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xedc03953, "iounmap" },
	{ 0x599ff15b, "pci_num_vf" },
	{ 0x7aefb8d0, "flow_rule_match_eth_addrs" },
	{ 0x893e2cfa, "skb_add_rx_frag" },
	{ 0x997e4945, "dev_trans_start" },
	{ 0x7695609e, "pci_disable_msi" },
	{ 0xedb925a5, "ptp_clock_index" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3567f9b, "pcpu_hot" },
	{ 0x3b72f08d, "preempt_schedule_notrace_thunk" },
	{ 0x3a001255, "xdp_do_redirect" },
	{ 0xebaad449, "eth_validate_addr" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8dc21995, "netdev_warn" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xc86e4a78, "pci_set_power_state" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xec06f8aa, "xdp_rxq_info_unreg_mem_model" },
	{ 0x58444c9, "__netif_napi_del" },
	{ 0x79dbb00c, "__dynamic_dev_dbg" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x27b71678, "pci_unregister_driver" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0xff909c43, "netdev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xddd0f8f6, "pskb_expand_head" },
	{ 0x1970f357, "dev_driver_string" },
	{ 0xff8879ef, "dev_addr_mod" },
	{ 0xffae5af7, "xdp_rxq_info_reg_mem_model" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xf35c103b, "ptp_find_pin" },
	{ 0x78d86520, "eth_type_trans" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd9fff8b4, "dma_map_page_attrs" },
	{ 0xee2978f, "napi_complete_done" },
	{ 0x122c3a7e, "_printk" },
	{ 0x9a4efe7c, "ndo_dflt_fdb_add" },
	{ 0x1c735893, "pm_schedule_suspend" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xa84a1e78, "skb_checksum_help" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xf7a7e522, "__napi_schedule" },
	{ 0x17c5960, "pci_enable_msix_range" },
	{ 0xa916b694, "strnlen" },
	{ 0x3d173db7, "__alloc_skb" },
	{ 0xef1c86b3, "netif_device_detach" },
	{ 0x618911fc, "numa_node" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x6c044258, "__free_pages" },
	{ 0x80b91047, "_dev_info" },
	{ 0xe31b6bd3, "__hw_addr_unsync_dev" },
	{ 0x5531a241, "napi_gro_receive" },
	{ 0x96436e96, "netif_device_attach" },
	{ 0xbc3f2cb0, "timecounter_cyc2time" },
	{ 0x46a3b218, "xdp_features_clear_redirect_target" },
	{ 0x6bf54da9, "i2c_del_adapter" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x66de8cbd, "pci_select_bars" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x6d2383de, "eth_get_headlen" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5fb7872c, "xdp_rxq_info_is_reg" },
	{ 0xc99237c7, "flow_block_cb_setup_simple" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x2f25934b, "flow_rule_match_basic" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x4ea5d10, "ksize" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x2d2d9331, "pci_enable_msi" },
	{ 0xa975b653, "_dev_err" },
	{ 0x2c8a7138, "softnet_data" },
	{ 0x3d621d48, "dca_add_requester" },
	{ 0xac7adb60, "xdp_return_frame" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4648d34d, "ptp_clock_register" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xdb9b8066, "netif_set_real_num_tx_queues" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc88477bc, "netif_set_real_num_rx_queues" },
	{ 0xe6952df3, "kfree_skb_reason" },
	{ 0x8af3a586, "pci_device_is_present" },
	{ 0xebfd0e0a, "dma_alloc_attrs" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0xe2d4cd, "pci_read_config_word" },
	{ 0x123f008, "napi_enable" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x8133a121, "register_netdev" },
	{ 0x9166fada, "strncpy" },
	{ 0x6349d342, "free_netdev" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x9d305795, "eth_platform_get_mac_address" },
	{ 0x2efaeba8, "i2c_new_client_device" },
	{ 0xfa24dcc7, "__SCK__tp_func_xdp_exception" },
	{ 0x19ade636, "pci_iounmap" },
	{ 0x1a33ab9, "dca_unregister_notify" },
	{ 0x55dfdc62, "netif_tx_stop_all_queues" },
	{ 0x1371ecee, "pci_restore_state" },
	{ 0x4da00908, "netif_tx_wake_queue" },
	{ 0xd6742002, "preempt_schedule_thunk" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xac34ecec, "dca_register_notify" },
	{ 0x688b2316, "dma_sync_single_for_cpu" },
	{ 0xe3af60f7, "devm_hwmon_device_register_with_groups" },
	{ 0x5338184f, "ethtool_sprintf" },
	{ 0xfb578fc5, "memset" },
	{ 0x76edae16, "_dev_warn" },
	{ 0xb050661b, "ptp_clock_event" },
	{ 0x70294c09, "netif_schedule_queue" },
	{ 0x8c6960d8, "__alloc_pages" },
	{ 0x97748bbe, "dca3_get_tag" },
	{ 0x6c85b8b4, "pci_set_master" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8f056aa2, "ptp_clock_unregister" },
	{ 0xfb61e528, "netif_rx" },
	{ 0x4db410c5, "__netdev_alloc_skb" },
	{ 0xadf55bee, "rt_spin_unlock" },
	{ 0xb3dbb5b3, "rt_spin_lock" },
	{ 0x705fd0c9, "__dynamic_netdev_dbg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2909c016, "dma_set_coherent_mask" },
	{ 0x381f588b, "__page_frag_cache_drain" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x146cc88f, "bpf_master_redirect_enabled_key" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xc77a53b7, "dma_free_attrs" },
	{ 0x999e8297, "vfree" },
	{ 0x64229f03, "pci_enable_wake" },
	{ 0x8bef250d, "__pm_runtime_resume" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x62b586b4, "driver_for_each_device" },
	{ 0x99ff6dad, "flow_rule_match_vlan" },
	{ 0x474155c7, "xdp_rxq_info_unreg" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x96a352b9, "napi_build_skb" },
	{ 0xe72fcb08, "__xdp_rxq_info_reg" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9d18ba4f, "netif_carrier_off" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe0e64fbd, "__hw_addr_sync_dev" },
	{ 0xc079d50, "pci_disable_sriov" },
	{ 0x9702f809, "netif_carrier_on" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x3b814ca, "bpf_dispatcher_xdp_func" },
	{ 0xb3271b55, "pci_disable_msix" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x3aebf97b, "i2c_smbus_write_byte_data" },
	{ 0x18166c7a, "pci_disable_device" },
	{ 0xd6aff15c, "dma_set_mask" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xe054faa, "kmalloc_trace" },
	{ 0x11d4a5db, "xdp_master_redirect" },
	{ 0xeaa28ed9, "napi_schedule_prep" },
	{ 0x68cc55c1, "napi_consume_skb" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x42613458, "pci_sriov_set_totalvfs" },
	{ 0x6db46649, "napi_disable" },
	{ 0x14cdd87a, "dev_kfree_skb_any_reason" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x9420061c, "param_ops_int" },
	{ 0xa3248d0e, "i2c_smbus_read_byte_data" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xd7c4a241, "pci_write_config_word" },
	{ 0xcc392eea, "kmalloc_size_roundup" },
	{ 0xafc50afa, "pci_enable_sriov" },
	{ 0x930c1f40, "skb_clone_tx_timestamp" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x6d9f51fd, "__pm_runtime_idle" },
	{ 0x862258db, "timecounter_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa8e0492, "kmalloc_caches" },
	{ 0x99be0143, "netdev_info" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb9681621, "xdp_do_flush" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xea31146e, "module_layout" },
};

MODULE_INFO(depends, "dca,i2c-algo-bit");

MODULE_ALIAS("pci:v00008086d00001F40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001539sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001533sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001536sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001537sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001538sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000157Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000157Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001521sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001522sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001523sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001524sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001527sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001510sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001511sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001516sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000438sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000043Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000043Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000440sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001518sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001526sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "82FEF6A31BBCCE3A91EE7F4");
