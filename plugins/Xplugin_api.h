/* This file is generated by plugin_gen.py, do not edit. */

#define check_col (*p_check_col)
#define col_clear (*p_col_clear)
#define col_add_fstr (*p_col_add_fstr)
#define col_append_fstr (*p_col_append_fstr)
#define col_prepend_fstr (*p_col_prepend_fstr)
#define col_add_str (*p_col_add_str)
#define col_append_str (*p_col_append_str)
#define col_set_str (*p_col_set_str)
#define register_init_routine (*p_register_init_routine)
#define register_postseq_cleanup_routine (*p_register_postseq_cleanup_routine)
#define match_strval (*p_match_strval)
#define val_to_str (*p_val_to_str)
#define conversation_new (*p_conversation_new)
#define find_conversation (*p_find_conversation)
#define conversation_set_dissector (*p_conversation_set_dissector)
#define proto_register_protocol (*p_proto_register_protocol)
#define proto_register_field_array (*p_proto_register_field_array)
#define proto_register_subtree_array (*p_proto_register_subtree_array)
#define dissector_add (*p_dissector_add)
#define dissector_delete (*p_dissector_delete)
#define dissector_add_handle (*p_dissector_add_handle)
#define heur_dissector_add (*p_heur_dissector_add)
#define register_dissector (*p_register_dissector)
#define find_dissector (*p_find_dissector)
#define create_dissector_handle (*p_create_dissector_handle)
#define call_dissector (*p_call_dissector)
#define tcp_dissect_pdus (*p_tcp_dissect_pdus)
#define proto_is_protocol_enabled (*p_proto_is_protocol_enabled)
#define proto_item_get_len (*p_proto_item_get_len)
#define proto_item_set_len (*p_proto_item_set_len)
#define proto_item_set_text (*p_proto_item_set_text)
#define proto_item_append_text (*p_proto_item_append_text)
#define proto_item_add_subtree (*p_proto_item_add_subtree)
#define proto_tree_add_item (*p_proto_tree_add_item)
#define proto_tree_add_item_hidden (*p_proto_tree_add_item_hidden)
#define proto_tree_add_protocol_format (*p_proto_tree_add_protocol_format)
#define proto_tree_add_bytes (*p_proto_tree_add_bytes)
#define proto_tree_add_bytes_hidden (*p_proto_tree_add_bytes_hidden)
#define proto_tree_add_bytes_format (*p_proto_tree_add_bytes_format)
#define proto_tree_add_time (*p_proto_tree_add_time)
#define proto_tree_add_time_hidden (*p_proto_tree_add_time_hidden)
#define proto_tree_add_time_format (*p_proto_tree_add_time_format)
#define proto_tree_add_ipxnet (*p_proto_tree_add_ipxnet)
#define proto_tree_add_ipxnet_hidden (*p_proto_tree_add_ipxnet_hidden)
#define proto_tree_add_ipxnet_format (*p_proto_tree_add_ipxnet_format)
#define proto_tree_add_ipv4 (*p_proto_tree_add_ipv4)
#define proto_tree_add_ipv4_hidden (*p_proto_tree_add_ipv4_hidden)
#define proto_tree_add_ipv4_format (*p_proto_tree_add_ipv4_format)
#define proto_tree_add_ipv6 (*p_proto_tree_add_ipv6)
#define proto_tree_add_ipv6_hidden (*p_proto_tree_add_ipv6_hidden)
#define proto_tree_add_ipv6_format (*p_proto_tree_add_ipv6_format)
#define proto_tree_add_ether (*p_proto_tree_add_ether)
#define proto_tree_add_ether_hidden (*p_proto_tree_add_ether_hidden)
#define proto_tree_add_ether_format (*p_proto_tree_add_ether_format)
#define proto_tree_add_string (*p_proto_tree_add_string)
#define proto_tree_add_string_hidden (*p_proto_tree_add_string_hidden)
#define proto_tree_add_string_format (*p_proto_tree_add_string_format)
#define proto_tree_add_boolean (*p_proto_tree_add_boolean)
#define proto_tree_add_boolean_hidden (*p_proto_tree_add_boolean_hidden)
#define proto_tree_add_boolean_format (*p_proto_tree_add_boolean_format)
#define proto_tree_add_double (*p_proto_tree_add_double)
#define proto_tree_add_double_hidden (*p_proto_tree_add_double_hidden)
#define proto_tree_add_double_format (*p_proto_tree_add_double_format)
#define proto_tree_add_uint (*p_proto_tree_add_uint)
#define proto_tree_add_uint_hidden (*p_proto_tree_add_uint_hidden)
#define proto_tree_add_uint_format (*p_proto_tree_add_uint_format)
#define proto_tree_add_int (*p_proto_tree_add_int)
#define proto_tree_add_int_hidden (*p_proto_tree_add_int_hidden)
#define proto_tree_add_int_format (*p_proto_tree_add_int_format)
#define proto_tree_add_text (*p_proto_tree_add_text)
#define tvb_new_subset (*p_tvb_new_subset)
#define tvb_set_free_cb (*p_tvb_set_free_cb)
#define tvb_set_child_real_data_tvbuff (*p_tvb_set_child_real_data_tvbuff)
#define tvb_new_real_data (*p_tvb_new_real_data)
#define tvb_length (*p_tvb_length)
#define tvb_length_remaining (*p_tvb_length_remaining)
#define tvb_bytes_exist (*p_tvb_bytes_exist)
#define tvb_offset_exists (*p_tvb_offset_exists)
#define tvb_reported_length (*p_tvb_reported_length)
#define tvb_reported_length_remaining (*p_tvb_reported_length_remaining)
#define tvb_get_guint8 (*p_tvb_get_guint8)
#define tvb_get_ntohs (*p_tvb_get_ntohs)
#define tvb_get_ntoh24 (*p_tvb_get_ntoh24)
#define tvb_get_ntohl (*p_tvb_get_ntohl)
#define tvb_get_letohs (*p_tvb_get_letohs)
#define tvb_get_letoh24 (*p_tvb_get_letoh24)
#define tvb_get_letohl (*p_tvb_get_letohl)
#define tvb_memcpy (*p_tvb_memcpy)
#define tvb_memdup (*p_tvb_memdup)
#define tvb_get_ptr (*p_tvb_get_ptr)
#define tvb_find_guint8 (*p_tvb_find_guint8)
#define tvb_pbrk_guint8 (*p_tvb_pbrk_guint8)
#define tvb_strnlen (*p_tvb_strnlen)
#define tvb_format_text (*p_tvb_format_text)
#define tvb_get_nstringz (*p_tvb_get_nstringz)
#define tvb_get_nstringz0 (*p_tvb_get_nstringz0)
#define tvb_find_line_end (*p_tvb_find_line_end)
#define tvb_find_line_end_unquoted (*p_tvb_find_line_end_unquoted)
#define tvb_strneql (*p_tvb_strneql)
#define tvb_strncaseeql (*p_tvb_strncaseeql)
#define tvb_bytes_to_str (*p_tvb_bytes_to_str)
#define prefs_register_protocol (*p_prefs_register_protocol)
#define prefs_register_uint_preference (*p_prefs_register_uint_preference)
#define prefs_register_bool_preference (*p_prefs_register_bool_preference)
#define prefs_register_enum_preference (*p_prefs_register_enum_preference)
#define prefs_register_string_preference (*p_prefs_register_string_preference)
#define register_giop_user (*p_register_giop_user)
#define is_big_endian (*p_is_big_endian)
#define get_CDR_encap_info (*p_get_CDR_encap_info)
#define get_CDR_any (*p_get_CDR_any)
#define get_CDR_boolean (*p_get_CDR_boolean)
#define get_CDR_char (*p_get_CDR_char)
#define get_CDR_double (*p_get_CDR_double)
#define get_CDR_enum (*p_get_CDR_enum)
#define get_CDR_fixed (*p_get_CDR_fixed)
#define get_CDR_float (*p_get_CDR_float)
#define get_CDR_interface (*p_get_CDR_interface)
#define get_CDR_long (*p_get_CDR_long)
#define get_CDR_object (*p_get_CDR_object)
#define get_CDR_octet (*p_get_CDR_octet)
#define get_CDR_octet_seq (*p_get_CDR_octet_seq)
#define get_CDR_short (*p_get_CDR_short)
#define get_CDR_string (*p_get_CDR_string)
#define get_CDR_typeCode (*p_get_CDR_typeCode)
#define get_CDR_ulong (*p_get_CDR_ulong)
#define get_CDR_ushort (*p_get_CDR_ushort)
#define get_CDR_wchar (*p_get_CDR_wchar)
#define get_CDR_wstring (*p_get_CDR_wstring)
#define is_tpkt (*p_is_tpkt)
#define dissect_tpkt_encap (*p_dissect_tpkt_encap)
#define set_actual_length (*p_set_actual_length)
#define decode_boolean_bitfield (*p_decode_boolean_bitfield)
#define decode_numeric_bitfield (*p_decode_numeric_bitfield)
#define decode_enumerated_bitfield (*p_decode_enumerated_bitfield)
#define register_dissector_table (*p_register_dissector_table)
#define except_throw (*p_except_throw)
#define dissector_try_port (*p_dissector_try_port)
#define conversation_add_proto_data (*p_conversation_add_proto_data)
#define conversation_get_proto_data (*p_conversation_get_proto_data)
#define conversation_delete_proto_data (*p_conversation_delete_proto_data)
#define p_add_proto_data (*p_p_add_proto_data)
#define p_get_proto_data (*p_p_get_proto_data)
#define ip_to_str (*p_ip_to_str)
#define ip6_to_str (*p_ip6_to_str)
#define time_secs_to_str (*p_time_secs_to_str)
#define time_msecs_to_str (*p_time_msecs_to_str)
#define abs_time_to_str (*p_abs_time_to_str)
#define proto_get_id_by_filter_name (*p_proto_get_id_by_filter_name)
#define proto_get_protocol_name (*p_proto_get_protocol_name)
#define proto_get_protocol_short_name (*p_proto_get_protocol_short_name)
#define proto_get_protocol_filter_name (*p_proto_get_protocol_filter_name)
#define prefs_register_obsolete_preference (*p_prefs_register_obsolete_preference)
#define add_new_data_source (*p_add_new_data_source)
#define fragment_table_init (*p_fragment_table_init)
#define reassembled_table_init (*p_reassembled_table_init)
#define fragment_add (*p_fragment_add)
#define fragment_add_seq (*p_fragment_add_seq)
#define fragment_add_seq_check (*p_fragment_add_seq_check)
#define fragment_add_seq_next (*p_fragment_add_seq_next)
#define fragment_get (*p_fragment_get)
#define fragment_set_tot_len (*p_fragment_set_tot_len)
#define fragment_get_tot_len (*p_fragment_get_tot_len)
#define fragment_set_partial_reassembly (*p_fragment_set_partial_reassembly)
#define fragment_delete (*p_fragment_delete)
#define show_fragment_tree (*p_show_fragment_tree)
#define show_fragment_seq_tree (*p_show_fragment_seq_tree)
#define register_tap (*p_register_tap)
#define tap_queue_packet (*p_tap_queue_packet)
#define asn1_open (*p_asn1_open)
#define asn1_close (*p_asn1_close)
#define asn1_octet_decode (*p_asn1_octet_decode)
#define asn1_tag_decode (*p_asn1_tag_decode)
#define asn1_id_decode (*p_asn1_id_decode)
#define asn1_length_decode (*p_asn1_length_decode)
#define asn1_header_decode (*p_asn1_header_decode)
#define asn1_eoc (*p_asn1_eoc)
#define asn1_eoc_decode (*p_asn1_eoc_decode)
#define asn1_null_decode (*p_asn1_null_decode)
#define asn1_bool_decode (*p_asn1_bool_decode)
#define asn1_int32_value_decode (*p_asn1_int32_value_decode)
#define asn1_int32_decode (*p_asn1_int32_decode)
#define asn1_uint32_value_decode (*p_asn1_uint32_value_decode)
#define asn1_uint32_decode (*p_asn1_uint32_decode)
#define asn1_bits_decode (*p_asn1_bits_decode)
#define asn1_string_value_decode (*p_asn1_string_value_decode)
#define asn1_string_decode (*p_asn1_string_decode)
#define asn1_octet_string_decode (*p_asn1_octet_string_decode)
#define asn1_subid_decode (*p_asn1_subid_decode)
#define asn1_oid_value_decode (*p_asn1_oid_value_decode)
#define asn1_oid_decode (*p_asn1_oid_decode)
#define asn1_sequence_decode (*p_asn1_sequence_decode)
#define asn1_err_to_str (*p_asn1_err_to_str)
#define proto_item_set_end (*p_proto_item_set_end)
#define proto_tree_add_none_format (*p_proto_tree_add_none_format)
#define except_init (*p_except_init)
#define except_deinit (*p_except_deinit)
#define except_rethrow (*p_except_rethrow)
#define except_throwd (*p_except_throwd)
#define except_throwf (*p_except_throwf)
#define except_unhandled_catcher (*p_except_unhandled_catcher)
#define except_take_data (*p_except_take_data)
#define except_set_allocator (*p_except_set_allocator)
#define except_alloc (*p_except_alloc)
#define except_free (*p_except_free)
#define except_pop (*p_except_pop)
#define except_setup_try (*p_except_setup_try)
#define col_set_fence (*p_col_set_fence)
#define tvb_get_string (*p_tvb_get_string)
#define tvb_get_stringz (*p_tvb_get_stringz)
#define find_dissector_table (*p_find_dissector_table)
#define dissector_get_port_handle (*p_dissector_get_port_handle)
#define dissector_handle_get_short_name (*p_dissector_handle_get_short_name)
#define dissector_handle_get_protocol_index (*p_dissector_handle_get_protocol_index)
#define new_register_dissector (*p_new_register_dissector)
#define new_create_dissector_handle (*p_new_create_dissector_handle)
#define register_giop_user_module (*p_register_giop_user_module)
#define dissect_per_GeneralString (*p_dissect_per_GeneralString)
#define dissect_per_sequence_of (*p_dissect_per_sequence_of)
#define dissect_per_IA5String (*p_dissect_per_IA5String)
#define dissect_per_NumericString (*p_dissect_per_NumericString)
#define dissect_per_PrintableString (*p_dissect_per_PrintableString)
#define dissect_per_BMPString (*p_dissect_per_BMPString)
#define dissect_per_constrained_sequence_of (*p_dissect_per_constrained_sequence_of)
#define dissect_per_constrained_set_of (*p_dissect_per_constrained_set_of)
#define dissect_per_set_of (*p_dissect_per_set_of)
#define dissect_per_object_identifier (*p_dissect_per_object_identifier)
#define dissect_per_boolean (*p_dissect_per_boolean)
#define dissect_per_integer (*p_dissect_per_integer)
#define dissect_per_constrained_integer (*p_dissect_per_constrained_integer)
#define dissect_per_choice (*p_dissect_per_choice)
#define dissect_per_sequence (*p_dissect_per_sequence)
#define dissect_per_octet_string (*p_dissect_per_octet_string)
#define dissect_per_restricted_character_string (*p_dissect_per_restricted_character_string)
#define dissector_add_string (*p_dissector_add_string)
#define dissector_delete_string (*p_dissector_delete_string)
#define dissector_change_string (*p_dissector_change_string)
#define dissector_reset_string (*p_dissector_reset_string)
#define dissector_try_string (*p_dissector_try_string)
#define dissector_get_string_handle (*p_dissector_get_string_handle)
#define get_datafile_path (*p_get_datafile_path)
#define get_tempfile_path (*p_get_tempfile_path)
#define register_heur_dissector_list (*p_register_heur_dissector_list)
#define dissector_try_heuristic (*p_dissector_try_heuristic)
#define asn1_id_decode1 (*p_asn1_id_decode1)
#define col_get_writable (*p_col_get_writable)
#define col_set_writable (*p_col_set_writable)
#define decode_enumerated_bitfield_shifted (*p_decode_enumerated_bitfield_shifted)
#define dissect_xdlc_control (*p_dissect_xdlc_control)
#define find_protocol_by_id (*p_find_protocol_by_id)
#define tvb_strsize (*p_tvb_strsize)
#define report_open_failure (*p_report_open_failure)
#define report_read_failure (*p_report_read_failure)
#define dissect_per_bit_string (*p_dissect_per_bit_string)
#define dissect_ber_identifier (*p_dissect_ber_identifier)
#define dissect_ber_length (*p_dissect_ber_length)
#define dissect_ber_integer (*p_dissect_ber_integer)
#define dissect_ber_boolean (*p_dissect_ber_boolean)
#define dissect_ber_choice (*p_dissect_ber_choice)
#define dissect_ber_GeneralizedTime (*p_dissect_ber_GeneralizedTime)
#define dissect_ber_sequence (*p_dissect_ber_sequence)
#define dissect_ber_sequence_of (*p_dissect_ber_sequence_of)
#define dissect_ber_set_of (*p_dissect_ber_set_of)
#define dissect_ber_octet_string (*p_dissect_ber_octet_string)
#define dissect_ber_bitstring (*p_dissect_ber_bitstring)
#define dissect_ber_restricted_string (*p_dissect_ber_restricted_string)
#define dissect_ber_object_identifier (*p_dissect_ber_object_identifier)
#define get_ber_identifier (*p_get_ber_identifier)
#define get_ber_length (*p_get_ber_length)
#define proto_item_get_subtree (*p_proto_item_get_subtree)
#define proto_tree_get_parent (*p_proto_tree_get_parent)
#define proto_item_get_parent (*p_proto_item_get_parent)
#define proto_item_get_parent_nth (*p_proto_item_get_parent_nth)
#define get_ber_last_created_item (*p_get_ber_last_created_item)
#define report_failure (*p_report_failure)
#define rpc_init_proc_table (*p_rpc_init_proc_table)
#define rpc_init_prog (*p_rpc_init_prog)
#define rpc_prog_name (*p_rpc_prog_name)
#define rpc_proc_name (*p_rpc_proc_name)
#define rpc_prog_hf (*p_rpc_prog_hf)
#define rpc_roundup (*p_rpc_roundup)
#define dissect_rpc_bool (*p_dissect_rpc_bool)
#define dissect_rpc_string (*p_dissect_rpc_string)
#define dissect_rpc_opaque_data (*p_dissect_rpc_opaque_data)
#define dissect_rpc_data (*p_dissect_rpc_data)
#define dissect_rpc_bytes (*p_dissect_rpc_bytes)
#define dissect_rpc_list (*p_dissect_rpc_list)
#define dissect_rpc_array (*p_dissect_rpc_array)
#define dissect_rpc_uint32 (*p_dissect_rpc_uint32)
#define dissect_rpc_uint64 (*p_dissect_rpc_uint64)
#define dissect_rpc_indir_call (*p_dissect_rpc_indir_call)
#define dissect_rpc_indir_reply (*p_dissect_rpc_indir_reply)
#define crc16_ccitt_tvb (*p_crc16_ccitt_tvb)
#define tvb_get_letoh64 (*p_tvb_get_letoh64)
#define tvb_get_ntoh64 (*p_tvb_get_ntoh64)
#define proto_tree_add_float (*p_proto_tree_add_float)
#define proto_tree_add_float_hidden (*p_proto_tree_add_float_hidden)
#define proto_tree_add_float_format (*p_proto_tree_add_float_format)
#define tvb_get_ntohieee_float (*p_tvb_get_ntohieee_float)
#define tvb_get_ntohieee_double (*p_tvb_get_ntohieee_double)
#define tvb_get_letohieee_float (*p_tvb_get_letohieee_float)
#define tvb_get_letohieee_double (*p_tvb_get_letohieee_double)
#define proto_tree_add_debug_text (*p_proto_tree_add_debug_text)
#define rtp_add_address (*p_rtp_add_address)
#define rtcp_add_address (*p_rtcp_add_address)
#define register_tap_listener (*p_register_tap_listener)
#define get_datafile_dir (*p_get_datafile_dir)
#define proto_registrar_get_abbrev (*p_proto_registrar_get_abbrev)
#define proto_registrar_get_byname (*p_proto_registrar_get_byname)
#define fvalue_get_floating (*p_fvalue_get_floating)
#define fvalue_to_string_repr (*p_fvalue_to_string_repr)
#define fvalue_get_integer (*p_fvalue_get_integer)
