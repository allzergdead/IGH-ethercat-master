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
	{ 0x811080aa, "cpu_latency_qos_remove_request" },
	{ 0xaf6df8a2, "napi_alloc_skb" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x4f6af9a4, "alloc_etherdev_mqs" },
	{ 0x951a8f9d, "pci_save_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x201e528b, "device_set_wakeup_enable" },
	{ 0x42f98a24, "dev_get_stats" },
	{ 0xf7d0c84b, "pcie_capability_read_word" },
	{ 0xfab803dd, "__skb_pad" },
	{ 0xdb9be806, "pci_request_selected_regions_exclusive" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x17da1c54, "pcie_capability_write_word" },
	{ 0xe02b32d8, "skb_copy_bits" },
	{ 0xe18bb682, "param_ops_uint" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7ff1b29c, "pci_release_selected_regions" },
	{ 0xbd703ed6, "skb_put" },
	{ 0xd3a6b561, "skb_tstamp_tx" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xcb4a87d2, "pci_enable_device_mem" },
	{ 0x88dd0d8, "consume_skb" },
	{ 0xbd3fe1e3, "disable_hardirq" },
	{ 0xe1e0f3d6, "netif_napi_add_weight" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x73a6e43, "trace_raw_output_prep" },
	{ 0x4e9d60cb, "unregister_netdev" },
	{ 0x8550f327, "__trace_trigger_soft_disabled" },
	{ 0x1eba4b65, "rt_mutex_base_init" },
	{ 0x6d0742ff, "dma_unmap_page_attrs" },
	{ 0xc60f2dfe, "trace_event_printf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xc9084842, "__pci_register_driver" },
	{ 0x4735eb22, "pci_dev_run_wake" },
	{ 0xd7930e92, "pci_prepare_to_sleep" },
	{ 0xedc03953, "iounmap" },
	{ 0x839b8198, "get_device_system_crosststamp" },
	{ 0xe3928e75, "dev_trans_start" },
	{ 0x697b9cd1, "pci_disable_msi" },
	{ 0x605fad3d, "ptp_clock_index" },
	{ 0x99722c28, "param_array_ops" },
	{ 0x8d4762c4, "___pskb_trim" },
	{ 0xf7a0dd37, "trace_event_raw_init" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd4bc9170, "cpu_latency_qos_add_request" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x898f57fd, "pcpu_hot" },
	{ 0xc6bcf9e5, "eth_validate_addr" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xd440f6be, "dev_kfree_skb_irq_reason" },
	{ 0xa81c8630, "netdev_warn" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x5686d044, "pci_unregister_driver" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0x74cd2cb8, "netdev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfa0ef133, "pskb_expand_head" },
	{ 0x683b5873, "dev_driver_string" },
	{ 0x322fdf74, "trace_event_buffer_commit" },
	{ 0x1b62b0ef, "dev_addr_mod" },
	{ 0xdcfa364, "eth_type_trans" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf3e74ee4, "dma_map_page_attrs" },
	{ 0x357b4448, "napi_complete_done" },
	{ 0xf19faf04, "passthru_features_check" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe1ecc5fb, "pm_schedule_suspend" },
	{ 0xf390f6f1, "__bitmap_andnot" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xc960ad47, "__napi_schedule" },
	{ 0x8a23d07d, "pci_enable_msix_range" },
	{ 0xa916b694, "strnlen" },
	{ 0x5fd7ba89, "__alloc_skb" },
	{ 0xd38759ff, "netif_device_detach" },
	{ 0x746a9be4, "const_pcpu_hot" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x5f21c2be, "pci_disable_link_state" },
	{ 0x565e65d0, "_dev_info" },
	{ 0x84ccbf03, "napi_gro_receive" },
	{ 0xb85cf4c1, "netif_device_attach" },
	{ 0xbc3f2cb0, "timecounter_cyc2time" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xc8c36c1d, "pci_select_bars" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xcf479647, "pci_clear_master" },
	{ 0x2ba3dddc, "__dma_sync_single_for_cpu" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0xe8e79279, "pci_enable_msi" },
	{ 0x1b438e15, "perf_trace_run_bpf_submit" },
	{ 0xfe2f2b20, "_dev_err" },
	{ 0x4d77c937, "device_wakeup_enable" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xace6bc37, "ptp_clock_register" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4d4bbc82, "pcie_capability_clear_and_set_word_locked" },
	{ 0x13eb5c3f, "mutex_lock" },
	{ 0xf477f9c2, "cpu_latency_qos_update_request" },
	{ 0x61138cf8, "dma_alloc_attrs" },
	{ 0xaf63a28e, "pci_read_config_word" },
	{ 0xc731489b, "napi_enable" },
	{ 0x90c9e946, "register_netdev" },
	{ 0x239d771b, "trace_event_reg" },
	{ 0x3d5db57d, "free_netdev" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x1f7155cb, "dql_completed" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0xde80cd09, "ioremap" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xd4552124, "__put_devmap_managed_folio_refs" },
	{ 0x9de49a4c, "ethtool_op_get_link" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x4e36cdc4, "__ubsan_handle_divrem_overflow" },
	{ 0xf33e69c5, "pci_restore_state" },
	{ 0xa0937a29, "bpf_trace_run1" },
	{ 0x8aa654cb, "netif_tx_wake_queue" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xfb578fc5, "memset" },
	{ 0x8a4ec4d1, "_dev_warn" },
	{ 0xce0acc03, "netif_schedule_queue" },
	{ 0x35a8cbe1, "pci_set_master" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xbbee88, "ptp_clock_unregister" },
	{ 0xd2e8eb52, "__pskb_pull_tail" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x7da99617, "__netdev_alloc_skb" },
	{ 0xe4ffa755, "rt_spin_unlock" },
	{ 0x61e5c77b, "skb_trim" },
	{ 0x42f10995, "rt_spin_lock" },
	{ 0x2bfb6cca, "__dynamic_netdev_dbg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x42635d55, "pm_suspend_global_flags" },
	{ 0x9b171f4d, "dma_set_coherent_mask" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x5ce36272, "_dev_notice" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x66bea750, "pci_disable_link_state_locked" },
	{ 0xb03607e3, "dma_free_attrs" },
	{ 0x999e8297, "vfree" },
	{ 0xebd2d575, "pci_enable_wake" },
	{ 0x9c5e4515, "trace_event_buffer_reserve" },
	{ 0x312ed64d, "__pm_runtime_resume" },
	{ 0xc969f1f7, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9d096f2e, "netif_queue_set_napi" },
	{ 0xe632c77, "__dma_sync_single_for_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x2252ba28, "__folio_put" },
	{ 0x185416ed, "__kmalloc_cache_noprof" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x401140c9, "netif_carrier_off" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x226e83c2, "netif_carrier_on" },
	{ 0x373b0d5, "dql_reset" },
	{ 0xb8d5d53e, "pci_disable_msix" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x80f43b9d, "alloc_pages_noprof" },
	{ 0x9bec5190, "pci_disable_device" },
	{ 0x38194a3e, "boot_cpu_data" },
	{ 0x91a0ec2b, "dma_set_mask" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x33686679, "napi_schedule_prep" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x8c864a95, "napi_disable" },
	{ 0x4e57e048, "dev_kfree_skb_any_reason" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x49ef7bd9, "param_ops_int" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x2c386bcc, "pci_write_config_word" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x1015764f, "skb_clone_tx_timestamp" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x4098a4d9, "__pm_runtime_idle" },
	{ 0x862258db, "timecounter_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x6e4cd5a9, "ethtool_op_get_ts_info" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4dde1912, "kmalloc_caches" },
	{ 0x71f54901, "netdev_info" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x488ae32f, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d0000105Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000105Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000108Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000108Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000109Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001096sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001098sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001049sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001501sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000294Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001525sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001503sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000153Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000153Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000155Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001559sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000156Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001570sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015B7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015BEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015BBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D4Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D4Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D4Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D4Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D55sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015FCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015F9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015FAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015F4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000DC5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000DC6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A1Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A1Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A1Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A1Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000DC7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000DC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000550Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000550Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000550Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000550Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000550Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000550Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005510sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005511sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000057A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000057A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000057B3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000057B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000057B5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000057B6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000057B7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000057B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000057B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000057BAsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "846B990E67FA4C8059F5D4D");
