#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdbe9612f, "__tracepoint_xdp_exception" },
	{ 0xacf78b55, "xsk_tx_completed" },
	{ 0xaf6df8a2, "napi_alloc_skb" },
	{ 0x4f6af9a4, "alloc_etherdev_mqs" },
	{ 0x951a8f9d, "pci_save_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x43799207, "xp_alloc" },
	{ 0x8fa9d9e8, "__SCT__tp_func_xdp_exception" },
	{ 0x201e528b, "device_set_wakeup_enable" },
	{ 0xf7d0c84b, "pcie_capability_read_word" },
	{ 0xfab803dd, "__skb_pad" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x17da1c54, "pcie_capability_write_word" },
	{ 0xe7bab1ed, "bpf_prog_put" },
	{ 0x9b9bf990, "xp_dma_map" },
	{ 0xe02b32d8, "skb_copy_bits" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xff5cfe81, "pci_request_selected_regions" },
	{ 0x7ff1b29c, "pci_release_selected_regions" },
	{ 0xe4368c47, "netif_set_real_num_queues" },
	{ 0x5b020790, "pci_wake_from_d3" },
	{ 0xbd703ed6, "skb_put" },
	{ 0xd3a6b561, "skb_tstamp_tx" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xcb4a87d2, "pci_enable_device_mem" },
	{ 0x88dd0d8, "consume_skb" },
	{ 0xbb7195a5, "xdp_warn" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xe1e0f3d6, "netif_napi_add_weight" },
	{ 0x31435ec4, "ethtool_puts" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa1d35e3d, "bpf_warn_invalid_xdp_action" },
	{ 0x4e9d60cb, "unregister_netdev" },
	{ 0xbeca722, "xdp_convert_zc_to_xdp_frame" },
	{ 0x76710af4, "xdp_features_set_redirect_target" },
	{ 0x1eba4b65, "rt_mutex_base_init" },
	{ 0x6d0742ff, "dma_unmap_page_attrs" },
	{ 0x96848186, "scnprintf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xf7370f56, "system_state" },
	{ 0xc9084842, "__pci_register_driver" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xedc03953, "iounmap" },
	{ 0x5497c1a2, "hrtimer_init" },
	{ 0x522c2023, "pci_disable_ptm" },
	{ 0x839b8198, "get_device_system_crosststamp" },
	{ 0xe3928e75, "dev_trans_start" },
	{ 0x697b9cd1, "pci_disable_msi" },
	{ 0x605fad3d, "ptp_clock_index" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x898f57fd, "pcpu_hot" },
	{ 0x5d4c2eb9, "xdp_do_redirect" },
	{ 0xa36243e6, "led_classdev_unregister" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xa81c8630, "netdev_warn" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x62ab9517, "pci_set_power_state" },
	{ 0xce5e8cb5, "xdp_rxq_info_unreg_mem_model" },
	{ 0xce12d5d0, "__netif_napi_del" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x5686d044, "pci_unregister_driver" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0x74cd2cb8, "netdev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfa0ef133, "pskb_expand_head" },
	{ 0x683b5873, "dev_driver_string" },
	{ 0x1b62b0ef, "dev_addr_mod" },
	{ 0x4d8c5d87, "xdp_rxq_info_reg_mem_model" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xed2e4c5f, "ptp_find_pin" },
	{ 0xdcfa364, "eth_type_trans" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf3e74ee4, "dma_map_page_attrs" },
	{ 0x357b4448, "napi_complete_done" },
	{ 0x114ccc10, "__alloc_pages_noprof" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe1ecc5fb, "pm_schedule_suspend" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xf7710711, "skb_checksum_help" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc960ad47, "__napi_schedule" },
	{ 0x8a23d07d, "pci_enable_msix_range" },
	{ 0x830581be, "xsk_set_rx_need_wakeup" },
	{ 0xa916b694, "strnlen" },
	{ 0x5fd7ba89, "__alloc_skb" },
	{ 0xd38759ff, "netif_device_detach" },
	{ 0x618911fc, "numa_node" },
	{ 0x746a9be4, "const_pcpu_hot" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xd72ce752, "__free_pages" },
	{ 0x565e65d0, "_dev_info" },
	{ 0x84ccbf03, "napi_gro_receive" },
	{ 0xb85cf4c1, "netif_device_attach" },
	{ 0x4f3a62bd, "xdp_features_clear_redirect_target" },
	{ 0xc8c36c1d, "pci_select_bars" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xeddc4e91, "xp_raw_get_dma" },
	{ 0x8464b0ac, "eth_get_headlen" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xd184a178, "xdp_rxq_info_is_reg" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xcf479647, "pci_clear_master" },
	{ 0x2ba3dddc, "__dma_sync_single_for_cpu" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0xe8e79279, "pci_enable_msi" },
	{ 0xfe2f2b20, "_dev_err" },
	{ 0xd4a17b4f, "xdp_return_frame" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xace6bc37, "ptp_clock_register" },
	{ 0x68b32953, "xsk_tx_peek_desc" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0xc22df183, "netdev_printk" },
	{ 0x13eb5c3f, "mutex_lock" },
	{ 0xc13d1655, "pci_device_is_present" },
	{ 0x61138cf8, "dma_alloc_attrs" },
	{ 0xaf63a28e, "pci_read_config_word" },
	{ 0xc731489b, "napi_enable" },
	{ 0x42322695, "xsk_clear_rx_need_wakeup" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0xb39916e8, "xsk_uses_need_wakeup" },
	{ 0x90c9e946, "register_netdev" },
	{ 0x3d5db57d, "free_netdev" },
	{ 0x566a795f, "xsk_get_pool_from_qid" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x1f7155cb, "dql_completed" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0xde80cd09, "ioremap" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x630729f9, "led_classdev_register_ext" },
	{ 0xaa702448, "eth_platform_get_mac_address" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x5054728e, "__SCK__tp_func_xdp_exception" },
	{ 0x4e36cdc4, "__ubsan_handle_divrem_overflow" },
	{ 0x8bc556d7, "pci_iounmap" },
	{ 0xf6d4655a, "netif_tx_stop_all_queues" },
	{ 0xf33e69c5, "pci_restore_state" },
	{ 0x8aa654cb, "netif_tx_wake_queue" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x5338184f, "ethtool_sprintf" },
	{ 0xfb578fc5, "memset" },
	{ 0x8a4ec4d1, "_dev_warn" },
	{ 0x71e127f, "hrtimer_start_range_ns" },
	{ 0x2d98542f, "ptp_clock_event" },
	{ 0xce0acc03, "netif_schedule_queue" },
	{ 0x35a8cbe1, "pci_set_master" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x3e315e9b, "netdev_set_tc_queue" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xbbee88, "ptp_clock_unregister" },
	{ 0x6380fea8, "xp_dma_unmap" },
	{ 0x6ff71baf, "netif_rx" },
	{ 0x7da99617, "__netdev_alloc_skb" },
	{ 0xe4ffa755, "rt_spin_unlock" },
	{ 0x42f10995, "rt_spin_lock" },
	{ 0x2bfb6cca, "__dynamic_netdev_dbg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9b171f4d, "dma_set_coherent_mask" },
	{ 0x585fded9, "__page_frag_cache_drain" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x146cc88f, "bpf_master_redirect_enabled_key" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3781a417, "xsk_set_tx_need_wakeup" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x510f1e64, "netdev_reset_tc" },
	{ 0xb03607e3, "dma_free_attrs" },
	{ 0x999e8297, "vfree" },
	{ 0xebd2d575, "pci_enable_wake" },
	{ 0x312ed64d, "__pm_runtime_resume" },
	{ 0xc969f1f7, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe632c77, "__dma_sync_single_for_device" },
	{ 0x76e92ab5, "pcie_print_link_status" },
	{ 0xe308298e, "xp_set_rxq_info" },
	{ 0xab57d055, "xdp_rxq_info_unreg" },
	{ 0xb2c4cd56, "napi_build_skb" },
	{ 0x85454f9d, "__xdp_rxq_info_reg" },
	{ 0x185416ed, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x401140c9, "netif_carrier_off" },
	{ 0x88107220, "pci_enable_ptm" },
	{ 0x3ed820d2, "__hw_addr_sync_dev" },
	{ 0x226e83c2, "netif_carrier_on" },
	{ 0x3934d8eb, "netdev_set_num_tc" },
	{ 0x373b0d5, "dql_reset" },
	{ 0x3b814ca, "bpf_dispatcher_xdp_func" },
	{ 0xb8d5d53e, "pci_disable_msix" },
	{ 0x23f18a70, "ktime_get_snapshot" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x906719d0, "hrtimer_cancel" },
	{ 0x9bec5190, "pci_disable_device" },
	{ 0x326306fa, "xp_free" },
	{ 0x91a0ec2b, "dma_set_mask" },
	{ 0x5525b120, "skb_add_rx_frag_netmem" },
	{ 0x8bac9a10, "xdp_master_redirect" },
	{ 0xa4bdf683, "xp_raw_get_data" },
	{ 0x33686679, "napi_schedule_prep" },
	{ 0x4c665a97, "napi_consume_skb" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x8c864a95, "napi_disable" },
	{ 0x4e57e048, "dev_kfree_skb_any_reason" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x49ef7bd9, "param_ops_int" },
	{ 0xc77665cb, "pcie_ptm_enabled" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x2c386bcc, "pci_write_config_word" },
	{ 0x1015764f, "skb_clone_tx_timestamp" },
	{ 0x8ffa7cf9, "__mutex_rt_init" },
	{ 0x4098a4d9, "__pm_runtime_idle" },
	{ 0x862258db, "timecounter_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x3f047456, "xsk_tx_release" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4dde1912, "kmalloc_caches" },
	{ 0x71f54901, "netdev_info" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb9681621, "xdp_do_flush" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x488ae32f, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d000015F2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015F3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015F8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015F7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003102sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005503sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D9Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000125Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000125Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000125Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000125Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000125Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015FDsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1CC2EE30597B69F544333F5");
