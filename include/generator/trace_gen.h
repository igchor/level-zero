/*
 *
 * Copyright (C) 2021-2022 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 *
 * @file trace_gen.h
 *
 */
#ifndef trace_gen_H
#define trace_gen_H

#include "ze_api.h"

template <typename T> concept Handle = AnyOf<
ze_driver_handle_t,
ze_device_handle_t,
ze_context_handle_t,
ze_command_queue_handle_t,
ze_command_list_handle_t,
ze_fence_handle_t,
ze_event_pool_handle_t,
ze_event_handle_t,
ze_image_handle_t,
ze_module_handle_t,
ze_module_build_log_handle_t,
ze_kernel_handle_t,
ze_sampler_handle_t,
ze_physical_mem_handle_t,
ze_fabric_vertex_handle_t,
ze_fabric_edge_handle_t,
ze_external_semaphore_ext_handle_t,
ze_rtas_builder_exp_handle_t,
ze_rtas_parallel_operation_exp_handle_t,
ze_device_handle_t
>;

Args make_args(ze_init_params_t params) { 
    Args args;
    args.addArg("flags", params.flags, InArg{});
    return args;
 }
Args make_args(ze_driver_get_params_t params) { 
    Args args;
    return args;
 }
Args make_args(ze_init_drivers_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("flags=" + std::to_string(flags));
    return args;
 }
Args make_args(ze_driver_get_api_version_params_t params) { 
    Args args;
    args.addArg("hDriver", params.hDriver, InArg{});
    args.addArg("version", params.version, OutArg{});
    return args;
 }
Args make_args(ze_driver_get_properties_params_t params) { 
    Args args;
    args.addArg("hDriver", params.hDriver, InArg{});
    return args;
 }
Args make_args(ze_driver_get_ipc_properties_params_t params) { 
    Args args;
    args.addArg("hDriver", params.hDriver, InArg{});
    return args;
 }
Args make_args(ze_driver_get_extension_properties_params_t params) { 
    Args args;
    args.addArg("hDriver", params.hDriver, InArg{});
    return args;
 }
Args make_args(ze_driver_get_extension_function_address_params_t params) { 
    Args args;
    args.addArg("hDriver", params.hDriver, InArg{});
    args.addArg("name", params.name, InArg{});
    args.addArg("ppFunctionAddress", params.ppFunctionAddress, OutArg{});
    return args;
 }
Args make_args(ze_driver_get_last_error_description_params_t params) { 
    Args args;
    args.addArg("hDriver", params.hDriver, InArg{});
    return args;
 }
Args make_args(ze_device_get_params_t params) { 
    Args args;
    args.addArg("hDriver", params.hDriver, InArg{});
    return args;
 }
Args make_args(ze_device_get_root_device_params_t params) { 
    Args args;
    args.addArg("hDevice", params.hDevice, InArg{});
    return args;
 }
Args make_args(ze_device_get_sub_devices_params_t params) { 
    Args args;
    args.addArg("hDevice", params.hDevice, InArg{});
    return args;
 }
Args make_args(ze_device_get_properties_params_t params) { 
    Args args;
    args.addArg("hDevice", params.hDevice, InArg{});
    return args;
 }
Args make_args(ze_device_get_compute_properties_params_t params) { 
    Args args;
    args.addArg("hDevice", params.hDevice, InArg{});
    return args;
 }
Args make_args(ze_device_get_module_properties_params_t params) { 
    Args args;
    args.addArg("hDevice", params.hDevice, InArg{});
    return args;
 }
Args make_args(ze_device_get_command_queue_group_properties_params_t params) { 
    Args args;
    args.addArg("hDevice", params.hDevice, InArg{});
    return args;
 }
Args make_args(ze_device_get_memory_properties_params_t params) { 
    Args args;
    args.addArg("hDevice", params.hDevice, InArg{});
    return args;
 }
Args make_args(ze_device_get_memory_access_properties_params_t params) { 
    Args args;
    args.addArg("hDevice", params.hDevice, InArg{});
    return args;
 }
Args make_args(ze_device_get_cache_properties_params_t params) { 
    Args args;
    args.addArg("hDevice", params.hDevice, InArg{});
    return args;
 }
Args make_args(ze_device_get_image_properties_params_t params) { 
    Args args;
    args.addArg("hDevice", params.hDevice, InArg{});
    return args;
 }
Args make_args(ze_device_get_external_memory_properties_params_t params) { 
    Args args;
    args.addArg("hDevice", params.hDevice, InArg{});
    return args;
 }
Args make_args(ze_device_get_p2_p_properties_params_t params) { 
    Args args;
    args.addArg("hDevice", params.hDevice, InArg{});
    args.addArg("hPeerDevice", params.hPeerDevice, InArg{});
    return args;
 }
Args make_args(ze_device_can_access_peer_params_t params) { 
    Args args;
    args.addArg("hDevice", params.hDevice, InArg{});
    args.addArg("hPeerDevice", params.hPeerDevice, InArg{});
    args.addArg("value", params.value, OutArg{});
    return args;
 }
Args make_args(ze_device_get_status_params_t params) { 
    Args args;
    args.addArg("hDevice", params.hDevice, InArg{});
    return args;
 }
Args make_args(ze_device_get_global_timestamps_params_t params) { 
    Args args;
    args.addArg("hDevice", params.hDevice, InArg{});
    args.addArg("hostTimestamp", params.hostTimestamp, OutArg{});
    return args;
 }
Args make_args(ze_context_create_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("flags=" + std::to_string(flags));
    args.addArg("hDriver", params.hDriver, InArg{});
    args.addArg("desc", params.desc, InArg{});
    args.addArg("phContext", params.phContext, OutArg{});
    return args;
 }
Args make_args(ze_context_create_ex_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("flags=" + std::to_string(flags));
    args.addArg("hDriver", params.hDriver, InArg{});
    args.addArg("desc", params.desc, InArg{});
    args.addArg("numDevices", params.numDevices, InArg{});
    args.addArg("phContext", params.phContext, InArg{});
    return args;
 }
Args make_args(ze_context_destroy_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    return args;
 }
Args make_args(ze_context_get_status_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    return args;
 }
Args make_args(ze_command_queue_create_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("ordinal=" + std::to_string(ordinal));
    assignments.push_back("index=" + std::to_string(index));
    assignments.push_back("flags=" + std::to_string(flags));
    assignments.push_back("mode=" + std::to_string(mode));
    assignments.push_back("priority=" + std::to_string(priority));
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("hDevice", params.hDevice, InArg{});
    args.addArg("desc", params.desc, InArg{});
    args.addArg("phCommandQueue", params.phCommandQueue, OutArg{});
    return args;
 }
Args make_args(ze_command_queue_destroy_params_t params) { 
    Args args;
    args.addArg("hCommandQueue", params.hCommandQueue, InArg{});
    return args;
 }
Args make_args(ze_command_queue_execute_command_lists_params_t params) { 
    Args args;
    args.addArg("hCommandQueue", params.hCommandQueue, InArg{});
    args.addArg("numCommandLists", params.numCommandLists, InArg{});
    args.addArg("phCommandLists", params.phCommandLists, InArg{});
    return args;
 }
Args make_args(ze_command_queue_synchronize_params_t params) { 
    Args args;
    args.addArg("hCommandQueue", params.hCommandQueue, InArg{});
    args.addArg("timeout", params.timeout, InArg{});
    return args;
 }
Args make_args(ze_command_queue_get_ordinal_params_t params) { 
    Args args;
    args.addArg("hCommandQueue", params.hCommandQueue, InArg{});
    args.addArg("pOrdinal", params.pOrdinal, OutArg{});
    return args;
 }
Args make_args(ze_command_queue_get_index_params_t params) { 
    Args args;
    args.addArg("hCommandQueue", params.hCommandQueue, InArg{});
    args.addArg("pIndex", params.pIndex, OutArg{});
    return args;
 }
Args make_args(ze_command_list_create_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("commandQueueGroupOrdinal=" + std::to_string(commandQueueGroupOrdinal));
    assignments.push_back("flags=" + std::to_string(flags));
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("hDevice", params.hDevice, InArg{});
    args.addArg("desc", params.desc, InArg{});
    args.addArg("phCommandList", params.phCommandList, OutArg{});
    return args;
 }
Args make_args(ze_command_list_create_immediate_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("ordinal=" + std::to_string(ordinal));
    assignments.push_back("index=" + std::to_string(index));
    assignments.push_back("flags=" + std::to_string(flags));
    assignments.push_back("mode=" + std::to_string(mode));
    assignments.push_back("priority=" + std::to_string(priority));
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("hDevice", params.hDevice, InArg{});
    args.addArg("altdesc", params.altdesc, InArg{});
    args.addArg("phCommandList", params.phCommandList, OutArg{});
    return args;
 }
Args make_args(ze_command_list_destroy_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    return args;
 }
Args make_args(ze_command_list_close_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    return args;
 }
Args make_args(ze_command_list_reset_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    return args;
 }
Args make_args(ze_command_list_append_write_global_timestamp_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("numWaitEvents", params.numWaitEvents, InArg{});
    args.addArg("phWaitEvents", params.phWaitEvents, InArg{});
    return args;
 }
Args make_args(ze_command_list_host_synchronize_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("timeout", params.timeout, InArg{});
    return args;
 }
Args make_args(ze_command_list_get_device_handle_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("phDevice", params.phDevice, OutArg{});
    return args;
 }
Args make_args(ze_command_list_get_context_handle_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("phContext", params.phContext, OutArg{});
    return args;
 }
Args make_args(ze_command_list_get_ordinal_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("pOrdinal", params.pOrdinal, OutArg{});
    return args;
 }
Args make_args(ze_command_list_immediate_get_index_params_t params) { 
    Args args;
    args.addArg("hCommandListImmediate", params.hCommandListImmediate, InArg{});
    args.addArg("pIndex", params.pIndex, OutArg{});
    return args;
 }
Args make_args(ze_command_list_is_immediate_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("pIsImmediate", params.pIsImmediate, OutArg{});
    return args;
 }
Args make_args(ze_command_list_append_barrier_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("hSignalEvent", params.hSignalEvent, InArg{});
    args.addArg("numWaitEvents", params.numWaitEvents, InArg{});
    return args;
 }
Args make_args(ze_command_list_append_memory_ranges_barrier_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("numRanges", params.numRanges, InArg{});
    args.addArg("pRangeSizes", params.pRangeSizes, InArg{});
    args.addArg("pRanges", params.pRanges, InArg{});
    args.addArg("hSignalEvent", params.hSignalEvent, InArg{});
    args.addArg("numWaitEvents", params.numWaitEvents, InArg{});
    return args;
 }
Args make_args(ze_context_system_barrier_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("hDevice", params.hDevice, InArg{});
    return args;
 }
Args make_args(ze_command_list_append_memory_copy_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("dstptr", params.dstptr, InArg{});
    args.addArg("srcptr", params.srcptr, InArg{});
    args.addArg("size", params.size, InArg{});
    args.addArg("hSignalEvent", params.hSignalEvent, InArg{});
    args.addArg("numWaitEvents", params.numWaitEvents, InArg{});
    return args;
 }
Args make_args(ze_command_list_append_memory_fill_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("ptr", params.ptr, InArg{});
    args.addArg("pattern", params.pattern, InArg{});
    args.addArg("pattern_size", params.pattern_size, InArg{});
    args.addArg("size", params.size, InArg{});
    args.addArg("hSignalEvent", params.hSignalEvent, InArg{});
    args.addArg("numWaitEvents", params.numWaitEvents, InArg{});
    return args;
 }
Args make_args(ze_command_list_append_memory_copy_region_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("dstptr", params.dstptr, InArg{});
    args.addArg("dstRegion", params.dstRegion, InArg{});
    args.addArg("dstPitch", params.dstPitch, InArg{});
    args.addArg("dstSlicePitch", params.dstSlicePitch, InArg{});
    args.addArg("srcPitch", params.srcPitch, InArg{});
    args.addArg("srcSlicePitch", params.srcSlicePitch, InArg{});
    args.addArg("hSignalEvent", params.hSignalEvent, InArg{});
    args.addArg("numWaitEvents", params.numWaitEvents, InArg{});
    return args;
 }
Args make_args(ze_command_list_append_memory_copy_from_context_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("dstptr", params.dstptr, InArg{});
    args.addArg("hContextSrc", params.hContextSrc, InArg{});
    args.addArg("srcptr", params.srcptr, InArg{});
    args.addArg("size", params.size, InArg{});
    args.addArg("hSignalEvent", params.hSignalEvent, InArg{});
    args.addArg("numWaitEvents", params.numWaitEvents, InArg{});
    return args;
 }
Args make_args(ze_command_list_append_image_copy_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("hDstImage", params.hDstImage, InArg{});
    args.addArg("hSrcImage", params.hSrcImage, InArg{});
    args.addArg("hSignalEvent", params.hSignalEvent, InArg{});
    args.addArg("numWaitEvents", params.numWaitEvents, InArg{});
    return args;
 }
Args make_args(ze_command_list_append_image_copy_region_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("hDstImage", params.hDstImage, InArg{});
    args.addArg("hSrcImage", params.hSrcImage, InArg{});
    args.addArg("pDstRegion", params.pDstRegion, InArg{});
    args.addArg("pSrcRegion", params.pSrcRegion, InArg{});
    args.addArg("hSignalEvent", params.hSignalEvent, InArg{});
    args.addArg("numWaitEvents", params.numWaitEvents, InArg{});
    return args;
 }
Args make_args(ze_command_list_append_image_copy_to_memory_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("dstptr", params.dstptr, InArg{});
    args.addArg("hSrcImage", params.hSrcImage, InArg{});
    args.addArg("pSrcRegion", params.pSrcRegion, InArg{});
    args.addArg("hSignalEvent", params.hSignalEvent, InArg{});
    args.addArg("numWaitEvents", params.numWaitEvents, InArg{});
    return args;
 }
Args make_args(ze_command_list_append_image_copy_from_memory_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("hDstImage", params.hDstImage, InArg{});
    args.addArg("srcptr", params.srcptr, InArg{});
    args.addArg("pDstRegion", params.pDstRegion, InArg{});
    args.addArg("hSignalEvent", params.hSignalEvent, InArg{});
    args.addArg("numWaitEvents", params.numWaitEvents, InArg{});
    return args;
 }
Args make_args(ze_command_list_append_memory_prefetch_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("ptr", params.ptr, InArg{});
    args.addArg("size", params.size, InArg{});
    return args;
 }
Args make_args(ze_command_list_append_mem_advise_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("hDevice", params.hDevice, InArg{});
    args.addArg("ptr", params.ptr, InArg{});
    args.addArg("size", params.size, InArg{});
    args.addArg("advice", params.advice, InArg{});
    return args;
 }
Args make_args(ze_event_pool_create_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("flags=" + std::to_string(flags));
    assignments.push_back("count=" + std::to_string(count));
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("desc", params.desc, InArg{});
    args.addArg("numDevices", params.numDevices, InArg{});
    args.addArg("phEventPool", params.phEventPool, InArg{});
    return args;
 }
Args make_args(ze_event_pool_destroy_params_t params) { 
    Args args;
    args.addArg("hEventPool", params.hEventPool, InArg{});
    return args;
 }
Args make_args(ze_event_create_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("index=" + std::to_string(index));
    assignments.push_back("signal=" + std::to_string(signal));
    assignments.push_back("wait=" + std::to_string(wait));
    args.addArg("hEventPool", params.hEventPool, InArg{});
    args.addArg("desc", params.desc, InArg{});
    args.addArg("phEvent", params.phEvent, OutArg{});
    return args;
 }
Args make_args(ze_event_destroy_params_t params) { 
    Args args;
    args.addArg("hEvent", params.hEvent, InArg{});
    return args;
 }
Args make_args(ze_event_pool_get_ipc_handle_params_t params) { 
    Args args;
    args.addArg("hEventPool", params.hEventPool, InArg{});
    args.addArg("phIpc", params.phIpc, OutArg{});
    return args;
 }
Args make_args(ze_event_pool_put_ipc_handle_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    return args;
 }
Args make_args(ze_event_pool_open_ipc_handle_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("phEventPool", params.phEventPool, InArg{});
    return args;
 }
Args make_args(ze_event_pool_close_ipc_handle_params_t params) { 
    Args args;
    args.addArg("hEventPool", params.hEventPool, InArg{});
    return args;
 }
Args make_args(ze_command_list_append_signal_event_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("hEvent", params.hEvent, InArg{});
    return args;
 }
Args make_args(ze_command_list_append_wait_on_events_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("numEvents", params.numEvents, InArg{});
    args.addArg("phEvents", params.phEvents, InArg{});
    return args;
 }
Args make_args(ze_event_host_signal_params_t params) { 
    Args args;
    args.addArg("hEvent", params.hEvent, InArg{});
    return args;
 }
Args make_args(ze_event_host_synchronize_params_t params) { 
    Args args;
    args.addArg("hEvent", params.hEvent, InArg{});
    args.addArg("timeout", params.timeout, InArg{});
    return args;
 }
Args make_args(ze_event_query_status_params_t params) { 
    Args args;
    args.addArg("hEvent", params.hEvent, InArg{});
    return args;
 }
Args make_args(ze_command_list_append_event_reset_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("hEvent", params.hEvent, InArg{});
    return args;
 }
Args make_args(ze_event_host_reset_params_t params) { 
    Args args;
    args.addArg("hEvent", params.hEvent, InArg{});
    return args;
 }
Args make_args(ze_event_query_kernel_timestamp_params_t params) { 
    Args args;
    args.addArg("hEvent", params.hEvent, InArg{});
    return args;
 }
Args make_args(ze_command_list_append_query_kernel_timestamps_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("numEvents", params.numEvents, InArg{});
    args.addArg("phEvents", params.phEvents, InArg{});
    args.addArg("hSignalEvent", params.hSignalEvent, InArg{});
    return args;
 }
Args make_args(ze_event_get_event_pool_params_t params) { 
    Args args;
    args.addArg("hEvent", params.hEvent, InArg{});
    args.addArg("phEventPool", params.phEventPool, OutArg{});
    return args;
 }
Args make_args(ze_event_get_signal_scope_params_t params) { 
    Args args;
    args.addArg("hEvent", params.hEvent, InArg{});
    args.addArg("pSignalScope", params.pSignalScope, OutArg{});
    return args;
 }
Args make_args(ze_event_get_wait_scope_params_t params) { 
    Args args;
    args.addArg("hEvent", params.hEvent, InArg{});
    args.addArg("pWaitScope", params.pWaitScope, OutArg{});
    return args;
 }
Args make_args(ze_event_pool_get_context_handle_params_t params) { 
    Args args;
    args.addArg("hEventPool", params.hEventPool, InArg{});
    args.addArg("phContext", params.phContext, OutArg{});
    return args;
 }
Args make_args(ze_event_pool_get_flags_params_t params) { 
    Args args;
    args.addArg("hEventPool", params.hEventPool, InArg{});
    args.addArg("pFlags", params.pFlags, OutArg{});
    return args;
 }
Args make_args(ze_fence_create_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("flags=" + std::to_string(flags));
    args.addArg("hCommandQueue", params.hCommandQueue, InArg{});
    args.addArg("desc", params.desc, InArg{});
    args.addArg("phFence", params.phFence, OutArg{});
    return args;
 }
Args make_args(ze_fence_destroy_params_t params) { 
    Args args;
    args.addArg("hFence", params.hFence, InArg{});
    return args;
 }
Args make_args(ze_fence_host_synchronize_params_t params) { 
    Args args;
    args.addArg("hFence", params.hFence, InArg{});
    args.addArg("timeout", params.timeout, InArg{});
    return args;
 }
Args make_args(ze_fence_query_status_params_t params) { 
    Args args;
    args.addArg("hFence", params.hFence, InArg{});
    return args;
 }
Args make_args(ze_fence_reset_params_t params) { 
    Args args;
    args.addArg("hFence", params.hFence, InArg{});
    return args;
 }
Args make_args(ze_image_get_properties_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("flags=" + std::to_string(flags));
    assignments.push_back("type=" + std::to_string(type));
    assignments.push_back("format=" + std::to_string(format));
    assignments.push_back("width=" + std::to_string(width));
    assignments.push_back("height=" + std::to_string(height));
    assignments.push_back("depth=" + std::to_string(depth));
    assignments.push_back("arraylevels=" + std::to_string(arraylevels));
    assignments.push_back("miplevels=" + std::to_string(miplevels));
    args.addArg("hDevice", params.hDevice, InArg{});
    args.addArg("desc", params.desc, InArg{});
    args.addArg("pImageProperties", params.pImageProperties, OutArg{});
    return args;
 }
Args make_args(ze_image_create_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("flags=" + std::to_string(flags));
    assignments.push_back("type=" + std::to_string(type));
    assignments.push_back("format=" + std::to_string(format));
    assignments.push_back("width=" + std::to_string(width));
    assignments.push_back("height=" + std::to_string(height));
    assignments.push_back("depth=" + std::to_string(depth));
    assignments.push_back("arraylevels=" + std::to_string(arraylevels));
    assignments.push_back("miplevels=" + std::to_string(miplevels));
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("hDevice", params.hDevice, InArg{});
    args.addArg("desc", params.desc, InArg{});
    args.addArg("phImage", params.phImage, OutArg{});
    return args;
 }
Args make_args(ze_image_destroy_params_t params) { 
    Args args;
    args.addArg("hImage", params.hImage, InArg{});
    return args;
 }
Args make_args(ze_mem_alloc_shared_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("flags=" + std::to_string(flags));
    assignments.push_back("ordinal=" + std::to_string(ordinal));
  std::vector<std::string> assignments;
    assignments.push_back("flags=" + std::to_string(flags));
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("device_desc", params.device_desc, InArg{});
    args.addArg("host_desc", params.host_desc, InArg{});
    args.addArg("size", params.size, InArg{});
    args.addArg("hDevice", params.hDevice, InArg{});
    return args;
 }
Args make_args(ze_mem_alloc_device_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("flags=" + std::to_string(flags));
    assignments.push_back("ordinal=" + std::to_string(ordinal));
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("device_desc", params.device_desc, InArg{});
    args.addArg("size", params.size, InArg{});
    args.addArg("hDevice", params.hDevice, InArg{});
    return args;
 }
Args make_args(ze_mem_alloc_host_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("flags=" + std::to_string(flags));
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("host_desc", params.host_desc, InArg{});
    args.addArg("size", params.size, InArg{});
    args.addArg("pptr", params.pptr, InArg{});
    return args;
 }
Args make_args(ze_mem_free_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("ptr", params.ptr, InArg{});
    return args;
 }
Args make_args(ze_mem_get_alloc_properties_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("ptr", params.ptr, InArg{});
    args.addArg("phDevice", params.phDevice, OutArg{});
    return args;
 }
Args make_args(ze_mem_get_address_range_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("ptr", params.ptr, InArg{});
    return args;
 }
Args make_args(ze_mem_get_ipc_handle_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("ptr", params.ptr, InArg{});
    args.addArg("pIpcHandle", params.pIpcHandle, OutArg{});
    return args;
 }
Args make_args(ze_mem_get_ipc_handle_from_file_descriptor_exp_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("handle", params.handle, InArg{});
    args.addArg("pIpcHandle", params.pIpcHandle, OutArg{});
    return args;
 }
Args make_args(ze_mem_get_file_descriptor_from_ipc_handle_exp_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("ipcHandle", params.ipcHandle, InArg{});
    args.addArg("pHandle", params.pHandle, OutArg{});
    return args;
 }
Args make_args(ze_mem_put_ipc_handle_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("handle", params.handle, InArg{});
    return args;
 }
Args make_args(ze_mem_open_ipc_handle_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("hDevice", params.hDevice, InArg{});
    args.addArg("handle", params.handle, InArg{});
    args.addArg("flags", params.flags, InArg{});
    return args;
 }
Args make_args(ze_mem_close_ipc_handle_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("ptr", params.ptr, InArg{});
    return args;
 }
Args make_args(ze_mem_set_atomic_access_attribute_exp_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("hDevice", params.hDevice, InArg{});
    args.addArg("ptr", params.ptr, InArg{});
    args.addArg("size", params.size, InArg{});
    args.addArg("attr", params.attr, InArg{});
    return args;
 }
Args make_args(ze_mem_get_atomic_access_attribute_exp_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("hDevice", params.hDevice, InArg{});
    args.addArg("ptr", params.ptr, InArg{});
    args.addArg("size", params.size, InArg{});
    args.addArg("pAttr", params.pAttr, OutArg{});
    return args;
 }
Args make_args(ze_module_create_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("format=" + std::to_string(format));
    assignments.push_back("inputSize=" + std::to_string(inputSize));
    assignments.push_back("pInputModule=" + std::to_string(pInputModule));
    assignments.push_back("pBuildFlags=" + std::to_string(pBuildFlags));
    assignments.push_back("pConstants=" + std::to_string(pConstants));
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("hDevice", params.hDevice, InArg{});
    args.addArg("desc", params.desc, InArg{});
    args.addArg("phModule", params.phModule, OutArg{});
    args.addArg("phBuildLog", params.phBuildLog, OutArg{});
    return args;
 }
Args make_args(ze_module_destroy_params_t params) { 
    Args args;
    args.addArg("hModule", params.hModule, InArg{});
    return args;
 }
Args make_args(ze_module_dynamic_link_params_t params) { 
    Args args;
    args.addArg("numModules", params.numModules, InArg{});
    args.addArg("phModules", params.phModules, InArg{});
    return args;
 }
Args make_args(ze_module_build_log_destroy_params_t params) { 
    Args args;
    args.addArg("hModuleBuildLog", params.hModuleBuildLog, InArg{});
    return args;
 }
Args make_args(ze_module_build_log_get_string_params_t params) { 
    Args args;
    args.addArg("hModuleBuildLog", params.hModuleBuildLog, InArg{});
    return args;
 }
Args make_args(ze_module_get_native_binary_params_t params) { 
    Args args;
    args.addArg("hModule", params.hModule, InArg{});
    return args;
 }
Args make_args(ze_module_get_global_pointer_params_t params) { 
    Args args;
    args.addArg("hModule", params.hModule, InArg{});
    args.addArg("pGlobalName", params.pGlobalName, InArg{});
    return args;
 }
Args make_args(ze_module_get_kernel_names_params_t params) { 
    Args args;
    args.addArg("hModule", params.hModule, InArg{});
    return args;
 }
Args make_args(ze_module_get_properties_params_t params) { 
    Args args;
    args.addArg("hModule", params.hModule, InArg{});
    return args;
 }
Args make_args(ze_kernel_create_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("flags=" + std::to_string(flags));
    assignments.push_back("pKernelName=" + std::to_string(pKernelName));
    args.addArg("hModule", params.hModule, InArg{});
    args.addArg("desc", params.desc, InArg{});
    args.addArg("phKernel", params.phKernel, OutArg{});
    return args;
 }
Args make_args(ze_kernel_destroy_params_t params) { 
    Args args;
    args.addArg("hKernel", params.hKernel, InArg{});
    return args;
 }
Args make_args(ze_module_get_function_pointer_params_t params) { 
    Args args;
    args.addArg("hModule", params.hModule, InArg{});
    args.addArg("pFunctionName", params.pFunctionName, InArg{});
    args.addArg("pfnFunction", params.pfnFunction, OutArg{});
    return args;
 }
Args make_args(ze_kernel_set_group_size_params_t params) { 
    Args args;
    args.addArg("hKernel", params.hKernel, InArg{});
    args.addArg("groupSizeX", params.groupSizeX, InArg{});
    args.addArg("groupSizeY", params.groupSizeY, InArg{});
    args.addArg("groupSizeZ", params.groupSizeZ, InArg{});
    return args;
 }
Args make_args(ze_kernel_suggest_group_size_params_t params) { 
    Args args;
    args.addArg("hKernel", params.hKernel, InArg{});
    args.addArg("globalSizeX", params.globalSizeX, InArg{});
    args.addArg("globalSizeY", params.globalSizeY, InArg{});
    args.addArg("globalSizeZ", params.globalSizeZ, InArg{});
    args.addArg("groupSizeX", params.groupSizeX, OutArg{});
    args.addArg("groupSizeY", params.groupSizeY, OutArg{});
    args.addArg("groupSizeZ", params.groupSizeZ, OutArg{});
    return args;
 }
Args make_args(ze_kernel_suggest_max_cooperative_group_count_params_t params) { 
    Args args;
    args.addArg("hKernel", params.hKernel, InArg{});
    args.addArg("totalGroupCount", params.totalGroupCount, OutArg{});
    return args;
 }
Args make_args(ze_kernel_set_argument_value_params_t params) { 
    Args args;
    args.addArg("hKernel", params.hKernel, InArg{});
    args.addArg("argIndex", params.argIndex, InArg{});
    args.addArg("argSize", params.argSize, InArg{});
    args.addArg("pArgValue", params.pArgValue, InArg{});
    return args;
 }
Args make_args(ze_kernel_set_indirect_access_params_t params) { 
    Args args;
    args.addArg("hKernel", params.hKernel, InArg{});
    args.addArg("flags", params.flags, InArg{});
    return args;
 }
Args make_args(ze_kernel_get_indirect_access_params_t params) { 
    Args args;
    args.addArg("hKernel", params.hKernel, InArg{});
    args.addArg("pFlags", params.pFlags, OutArg{});
    return args;
 }
Args make_args(ze_kernel_get_source_attributes_params_t params) { 
    Args args;
    args.addArg("hKernel", params.hKernel, InArg{});
    return args;
 }
Args make_args(ze_kernel_set_cache_config_params_t params) { 
    Args args;
    args.addArg("hKernel", params.hKernel, InArg{});
    args.addArg("flags", params.flags, InArg{});
    return args;
 }
Args make_args(ze_kernel_get_properties_params_t params) { 
    Args args;
    args.addArg("hKernel", params.hKernel, InArg{});
    return args;
 }
Args make_args(ze_kernel_get_name_params_t params) { 
    Args args;
    args.addArg("hKernel", params.hKernel, InArg{});
    return args;
 }
Args make_args(ze_command_list_append_launch_kernel_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("hKernel", params.hKernel, InArg{});
    args.addArg("pLaunchFuncArgs", params.pLaunchFuncArgs, InArg{});
    args.addArg("hSignalEvent", params.hSignalEvent, InArg{});
    args.addArg("numWaitEvents", params.numWaitEvents, InArg{});
    return args;
 }
Args make_args(ze_command_list_append_launch_cooperative_kernel_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("hKernel", params.hKernel, InArg{});
    args.addArg("pLaunchFuncArgs", params.pLaunchFuncArgs, InArg{});
    args.addArg("hSignalEvent", params.hSignalEvent, InArg{});
    args.addArg("numWaitEvents", params.numWaitEvents, InArg{});
    return args;
 }
Args make_args(ze_command_list_append_launch_kernel_indirect_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("hKernel", params.hKernel, InArg{});
    args.addArg("pLaunchArgumentsBuffer", params.pLaunchArgumentsBuffer, InArg{});
    args.addArg("numWaitEvents", params.numWaitEvents, InArg{});
    args.addArg("phWaitEvents", params.phWaitEvents, InArg{});
    return args;
 }
Args make_args(ze_command_list_append_launch_multiple_kernels_indirect_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("numKernels", params.numKernels, InArg{});
    args.addArg("phKernels", params.phKernels, InArg{});
    args.addArg("pCountBuffer", params.pCountBuffer, InArg{});
    args.addArg("numWaitEvents", params.numWaitEvents, InArg{});
    return args;
 }
Args make_args(ze_context_make_memory_resident_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("hDevice", params.hDevice, InArg{});
    args.addArg("ptr", params.ptr, InArg{});
    args.addArg("size", params.size, InArg{});
    return args;
 }
Args make_args(ze_context_evict_memory_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("hDevice", params.hDevice, InArg{});
    args.addArg("ptr", params.ptr, InArg{});
    args.addArg("size", params.size, InArg{});
    return args;
 }
Args make_args(ze_context_make_image_resident_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("hDevice", params.hDevice, InArg{});
    args.addArg("hImage", params.hImage, InArg{});
    return args;
 }
Args make_args(ze_context_evict_image_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("hDevice", params.hDevice, InArg{});
    args.addArg("hImage", params.hImage, InArg{});
    return args;
 }
Args make_args(ze_sampler_create_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("addressMode=" + std::to_string(addressMode));
    assignments.push_back("filterMode=" + std::to_string(filterMode));
    assignments.push_back("isNormalized=" + std::to_string(isNormalized));
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("hDevice", params.hDevice, InArg{});
    args.addArg("desc", params.desc, InArg{});
    args.addArg("phSampler", params.phSampler, OutArg{});
    return args;
 }
Args make_args(ze_sampler_destroy_params_t params) { 
    Args args;
    args.addArg("hSampler", params.hSampler, InArg{});
    return args;
 }
Args make_args(ze_virtual_mem_reserve_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("pStart", params.pStart, InArg{});
    args.addArg("pptr", params.pptr, InArg{});
    return args;
 }
Args make_args(ze_virtual_mem_free_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("ptr", params.ptr, InArg{});
    args.addArg("size", params.size, InArg{});
    return args;
 }
Args make_args(ze_virtual_mem_query_page_size_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("hDevice", params.hDevice, InArg{});
    args.addArg("size", params.size, InArg{});
    args.addArg("pagesize", params.pagesize, OutArg{});
    return args;
 }
Args make_args(ze_physical_mem_create_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("flags=" + std::to_string(flags));
    assignments.push_back("size=" + std::to_string(size));
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("hDevice", params.hDevice, InArg{});
    args.addArg("phPhysicalMemory", params.phPhysicalMemory, InArg{});
    return args;
 }
Args make_args(ze_physical_mem_destroy_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("hPhysicalMemory", params.hPhysicalMemory, InArg{});
    return args;
 }
Args make_args(ze_virtual_mem_map_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("ptr", params.ptr, InArg{});
    args.addArg("size", params.size, InArg{});
    args.addArg("offset", params.offset, InArg{});
    args.addArg("access", params.access, InArg{});
    return args;
 }
Args make_args(ze_virtual_mem_unmap_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("ptr", params.ptr, InArg{});
    args.addArg("size", params.size, InArg{});
    return args;
 }
Args make_args(ze_virtual_mem_set_access_attribute_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("ptr", params.ptr, InArg{});
    args.addArg("size", params.size, InArg{});
    args.addArg("access", params.access, InArg{});
    return args;
 }
Args make_args(ze_virtual_mem_get_access_attribute_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("ptr", params.ptr, InArg{});
    args.addArg("size", params.size, InArg{});
    args.addArg("access", params.access, OutArg{});
    args.addArg("outSize", params.outSize, OutArg{});
    return args;
 }
Args make_args(ze_kernel_set_global_offset_exp_params_t params) { 
    Args args;
    args.addArg("hKernel", params.hKernel, InArg{});
    args.addArg("offsetX", params.offsetX, InArg{});
    args.addArg("offsetY", params.offsetY, InArg{});
    args.addArg("offsetZ", params.offsetZ, InArg{});
    return args;
 }
Args make_args(ze_kernel_get_binary_exp_params_t params) { 
    Args args;
    args.addArg("hKernel", params.hKernel, InArg{});
    return args;
 }
Args make_args(ze_device_import_external_semaphore_ext_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("flags=" + std::to_string(flags));
    args.addArg("hDevice", params.hDevice, InArg{});
    args.addArg("desc", params.desc, InArg{});
    args.addArg("phSemaphore", params.phSemaphore, OutArg{});
    return args;
 }
Args make_args(ze_device_release_external_semaphore_ext_params_t params) { 
    Args args;
    args.addArg("hSemaphore", params.hSemaphore, InArg{});
    return args;
 }
Args make_args(ze_command_list_append_signal_external_semaphore_ext_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("numSemaphores", params.numSemaphores, InArg{});
    args.addArg("phSemaphores", params.phSemaphores, InArg{});
    args.addArg("hSignalEvent", params.hSignalEvent, InArg{});
    args.addArg("numWaitEvents", params.numWaitEvents, InArg{});
    args.addArg("phWaitEvents", params.phWaitEvents, InArg{});
    return args;
 }
Args make_args(ze_command_list_append_wait_external_semaphore_ext_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("numSemaphores", params.numSemaphores, InArg{});
    args.addArg("phSemaphores", params.phSemaphores, InArg{});
    args.addArg("hSignalEvent", params.hSignalEvent, InArg{});
    args.addArg("numWaitEvents", params.numWaitEvents, InArg{});
    args.addArg("phWaitEvents", params.phWaitEvents, InArg{});
    return args;
 }
Args make_args(ze_device_reserve_cache_ext_params_t params) { 
    Args args;
    args.addArg("hDevice", params.hDevice, InArg{});
    args.addArg("cacheLevel", params.cacheLevel, InArg{});
    return args;
 }
Args make_args(ze_device_set_cache_advice_ext_params_t params) { 
    Args args;
    args.addArg("hDevice", params.hDevice, InArg{});
    args.addArg("ptr", params.ptr, InArg{});
    args.addArg("regionSize", params.regionSize, InArg{});
    args.addArg("cacheRegion", params.cacheRegion, InArg{});
    return args;
 }
Args make_args(ze_event_query_timestamps_exp_params_t params) { 
    Args args;
    args.addArg("hEvent", params.hEvent, InArg{});
    args.addArg("hDevice", params.hDevice, InArg{});
    return args;
 }
Args make_args(ze_image_get_memory_properties_exp_params_t params) { 
    Args args;
    args.addArg("hImage", params.hImage, InArg{});
    return args;
 }
Args make_args(ze_image_view_create_ext_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("flags=" + std::to_string(flags));
    assignments.push_back("type=" + std::to_string(type));
    assignments.push_back("format=" + std::to_string(format));
    assignments.push_back("width=" + std::to_string(width));
    assignments.push_back("height=" + std::to_string(height));
    assignments.push_back("depth=" + std::to_string(depth));
    assignments.push_back("arraylevels=" + std::to_string(arraylevels));
    assignments.push_back("miplevels=" + std::to_string(miplevels));
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("hDevice", params.hDevice, InArg{});
    args.addArg("desc", params.desc, InArg{});
    args.addArg("hImage", params.hImage, InArg{});
    args.addArg("phImageView", params.phImageView, OutArg{});
    return args;
 }
Args make_args(ze_image_view_create_exp_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("flags=" + std::to_string(flags));
    assignments.push_back("type=" + std::to_string(type));
    assignments.push_back("format=" + std::to_string(format));
    assignments.push_back("width=" + std::to_string(width));
    assignments.push_back("height=" + std::to_string(height));
    assignments.push_back("depth=" + std::to_string(depth));
    assignments.push_back("arraylevels=" + std::to_string(arraylevels));
    assignments.push_back("miplevels=" + std::to_string(miplevels));
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("hDevice", params.hDevice, InArg{});
    args.addArg("desc", params.desc, InArg{});
    args.addArg("hImage", params.hImage, InArg{});
    args.addArg("phImageView", params.phImageView, OutArg{});
    return args;
 }
Args make_args(ze_kernel_scheduling_hint_exp_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("flags=" + std::to_string(flags));
    args.addArg("hKernel", params.hKernel, InArg{});
    args.addArg("pHint", params.pHint, InArg{});
    return args;
 }
Args make_args(ze_device_pci_get_properties_ext_params_t params) { 
    Args args;
    args.addArg("hDevice", params.hDevice, InArg{});
    return args;
 }
Args make_args(ze_command_list_append_image_copy_to_memory_ext_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("dstptr", params.dstptr, InArg{});
    args.addArg("hSrcImage", params.hSrcImage, InArg{});
    args.addArg("pSrcRegion", params.pSrcRegion, InArg{});
    args.addArg("destRowPitch", params.destRowPitch, InArg{});
    args.addArg("hSignalEvent", params.hSignalEvent, InArg{});
    args.addArg("phWaitEvents", params.phWaitEvents, InArg{});
    return args;
 }
Args make_args(ze_command_list_append_image_copy_from_memory_ext_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("hDstImage", params.hDstImage, InArg{});
    args.addArg("srcptr", params.srcptr, InArg{});
    args.addArg("pDstRegion", params.pDstRegion, InArg{});
    args.addArg("srcRowPitch", params.srcRowPitch, InArg{});
    args.addArg("hSignalEvent", params.hSignalEvent, InArg{});
    args.addArg("phWaitEvents", params.phWaitEvents, InArg{});
    return args;
 }
Args make_args(ze_image_get_alloc_properties_ext_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("hImage", params.hImage, InArg{});
    return args;
 }
Args make_args(ze_module_inspect_linkage_ext_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("flags=" + std::to_string(flags));
    args.addArg("pInspectDesc", params.pInspectDesc, InArg{});
    args.addArg("numModules", params.numModules, InArg{});
    args.addArg("phModules", params.phModules, InArg{});
    return args;
 }
Args make_args(ze_mem_free_ext_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("freePolicy=" + std::to_string(freePolicy));
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("pMemFreeDesc", params.pMemFreeDesc, InArg{});
    args.addArg("ptr", params.ptr, InArg{});
    return args;
 }
Args make_args(ze_fabric_vertex_get_exp_params_t params) { 
    Args args;
    args.addArg("hDriver", params.hDriver, InArg{});
    return args;
 }
Args make_args(ze_fabric_vertex_get_sub_vertices_exp_params_t params) { 
    Args args;
    args.addArg("hVertex", params.hVertex, InArg{});
    return args;
 }
Args make_args(ze_fabric_vertex_get_properties_exp_params_t params) { 
    Args args;
    args.addArg("hVertex", params.hVertex, InArg{});
    return args;
 }
Args make_args(ze_fabric_vertex_get_device_exp_params_t params) { 
    Args args;
    args.addArg("hVertex", params.hVertex, InArg{});
    args.addArg("phDevice", params.phDevice, OutArg{});
    return args;
 }
Args make_args(ze_device_get_fabric_vertex_exp_params_t params) { 
    Args args;
    args.addArg("hDevice", params.hDevice, InArg{});
    args.addArg("phVertex", params.phVertex, OutArg{});
    return args;
 }
Args make_args(ze_fabric_edge_get_exp_params_t params) { 
    Args args;
    args.addArg("hVertexA", params.hVertexA, InArg{});
    args.addArg("hVertexB", params.hVertexB, InArg{});
    return args;
 }
Args make_args(ze_fabric_edge_get_vertices_exp_params_t params) { 
    Args args;
    args.addArg("hEdge", params.hEdge, InArg{});
    args.addArg("phVertexA", params.phVertexA, OutArg{});
    args.addArg("phVertexB", params.phVertexB, OutArg{});
    return args;
 }
Args make_args(ze_fabric_edge_get_properties_exp_params_t params) { 
    Args args;
    args.addArg("hEdge", params.hEdge, InArg{});
    return args;
 }
Args make_args(ze_event_query_kernel_timestamps_ext_params_t params) { 
    Args args;
    args.addArg("hEvent", params.hEvent, InArg{});
    args.addArg("hDevice", params.hDevice, InArg{});
    return args;
 }
Args make_args(ze_rtas_builder_create_exp_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("builderVersion=" + std::to_string(builderVersion));
    args.addArg("hDriver", params.hDriver, InArg{});
    args.addArg("pDescriptor", params.pDescriptor, InArg{});
    args.addArg("phBuilder", params.phBuilder, OutArg{});
    return args;
 }
Args make_args(ze_rtas_builder_get_build_properties_exp_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("rtasFormat=" + std::to_string(rtasFormat));
    assignments.push_back("buildQuality=" + std::to_string(buildQuality));
    assignments.push_back("buildFlags=" + std::to_string(buildFlags));
    assignments.push_back("ppGeometries=" + std::to_string(ppGeometries));
    assignments.push_back("numGeometries=" + std::to_string(numGeometries));
    args.addArg("hBuilder", params.hBuilder, InArg{});
    args.addArg("pBuildOpDescriptor", params.pBuildOpDescriptor, InArg{});
    return args;
 }
Args make_args(ze_driver_rtas_format_compatibility_check_exp_params_t params) { 
    Args args;
    args.addArg("hDriver", params.hDriver, InArg{});
    args.addArg("rtasFormatA", params.rtasFormatA, InArg{});
    args.addArg("rtasFormatB", params.rtasFormatB, InArg{});
    return args;
 }
Args make_args(ze_rtas_builder_build_exp_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("rtasFormat=" + std::to_string(rtasFormat));
    assignments.push_back("buildQuality=" + std::to_string(buildQuality));
    assignments.push_back("buildFlags=" + std::to_string(buildFlags));
    assignments.push_back("ppGeometries=" + std::to_string(ppGeometries));
    assignments.push_back("numGeometries=" + std::to_string(numGeometries));
    args.addArg("hBuilder", params.hBuilder, InArg{});
    args.addArg("pBuildOpDescriptor", params.pBuildOpDescriptor, InArg{});
    args.addArg("pScratchBuffer", params.pScratchBuffer, InArg{});
    args.addArg("pRtasBuffer", params.pRtasBuffer, InArg{});
    args.addArg("rtasBufferSizeBytes", params.rtasBufferSizeBytes, InArg{});
    args.addArg("hParallelOperation", params.hParallelOperation, InArg{});
    args.addArg("pBuildUserPtr", params.pBuildUserPtr, InArg{});
    args.addArg("pBounds", params.pBounds, InArg{});
    return args;
 }
Args make_args(ze_rtas_builder_destroy_exp_params_t params) { 
    Args args;
    args.addArg("hBuilder", params.hBuilder, InArg{});
    return args;
 }
Args make_args(ze_rtas_parallel_operation_create_exp_params_t params) { 
    Args args;
    args.addArg("hDriver", params.hDriver, InArg{});
    args.addArg("phParallelOperation", params.phParallelOperation, OutArg{});
    return args;
 }
Args make_args(ze_rtas_parallel_operation_get_properties_exp_params_t params) { 
    Args args;
    args.addArg("hParallelOperation", params.hParallelOperation, InArg{});
    return args;
 }
Args make_args(ze_rtas_parallel_operation_join_exp_params_t params) { 
    Args args;
    args.addArg("hParallelOperation", params.hParallelOperation, InArg{});
    return args;
 }
Args make_args(ze_rtas_parallel_operation_destroy_exp_params_t params) { 
    Args args;
    args.addArg("hParallelOperation", params.hParallelOperation, InArg{});
    return args;
 }
Args make_args(ze_mem_get_pitch_for2d_image_params_t params) { 
    Args args;
    args.addArg("hContext", params.hContext, InArg{});
    args.addArg("hDevice", params.hDevice, InArg{});
    args.addArg("imageWidth", params.imageWidth, InArg{});
    args.addArg("imageHeight", params.imageHeight, InArg{});
    args.addArg("elementSizeInBytes", params.elementSizeInBytes, InArg{});
    args.addArg("rowPitch", params.rowPitch, OutArg{});
    return args;
 }
Args make_args(ze_image_get_device_offset_exp_params_t params) { 
    Args args;
    args.addArg("hImage", params.hImage, InArg{});
    args.addArg("pDeviceOffset", params.pDeviceOffset, OutArg{});
    return args;
 }
Args make_args(ze_command_list_create_clone_exp_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("phClonedCommandList", params.phClonedCommandList, OutArg{});
    return args;
 }
Args make_args(ze_command_list_immediate_append_command_lists_exp_params_t params) { 
    Args args;
    args.addArg("hCommandListImmediate", params.hCommandListImmediate, InArg{});
    args.addArg("numCommandLists", params.numCommandLists, InArg{});
    args.addArg("phCommandLists", params.phCommandLists, InArg{});
    args.addArg("hSignalEvent", params.hSignalEvent, InArg{});
    return args;
 }
Args make_args(ze_command_list_get_next_command_id_exp_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("flags=" + std::to_string(flags));
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("desc", params.desc, InArg{});
    args.addArg("pCommandId", params.pCommandId, OutArg{});
    return args;
 }
Args make_args(ze_command_list_get_next_command_id_with_kernels_exp_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("flags=" + std::to_string(flags));
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("desc", params.desc, InOutArg{});
    args.addArg("numKernels", params.numKernels, InArg{});
    args.addArg("phKernels", params.phKernels, InArg{});
    return args;
 }
Args make_args(ze_command_list_update_mutable_commands_exp_params_t params) { 
    Args args;
  std::vector<std::string> assignments;
    assignments.push_back("flags=" + std::to_string(flags));
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("desc", params.desc, InArg{});
    return args;
 }
Args make_args(ze_command_list_update_mutable_command_signal_event_exp_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("commandId", params.commandId, InArg{});
    args.addArg("hSignalEvent", params.hSignalEvent, InArg{});
    return args;
 }
Args make_args(ze_command_list_update_mutable_command_wait_events_exp_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("commandId", params.commandId, InArg{});
    args.addArg("numWaitEvents", params.numWaitEvents, InArg{});
    args.addArg("phWaitEvents", params.phWaitEvents, InArg{});
    return args;
 }
Args make_args(ze_command_list_update_mutable_command_kernels_exp_params_t params) { 
    Args args;
    args.addArg("hCommandList", params.hCommandList, InArg{});
    args.addArg("numKernels", params.numKernels, InArg{});
    args.addArg("pCommandId", params.pCommandId, InArg{});
    args.addArg("phKernels", params.phKernels, InArg{});
    return args;
 }

///////////////////////////////////////////////////////////////////////////////
/// @brief Container for all callbacks
struct ze_call_generator
{
    Global.pfnInitCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeInit", make_args(params), result);
    };
    Driver.pfnGetCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDriverGet", make_args(params), result);
    };
    Global.pfnInitDriversCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeInitDrivers", make_args(params), result);
    };
    Driver.pfnGetApiVersionCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDriverGetApiVersion", make_args(params), result);
    };
    Driver.pfnGetPropertiesCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDriverGetProperties", make_args(params), result);
    };
    Driver.pfnGetIpcPropertiesCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDriverGetIpcProperties", make_args(params), result);
    };
    Driver.pfnGetExtensionPropertiesCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDriverGetExtensionProperties", make_args(params), result);
    };
    Driver.pfnGetExtensionFunctionAddressCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDriverGetExtensionFunctionAddress", make_args(params), result);
    };
    Driver.pfnGetLastErrorDescriptionCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDriverGetLastErrorDescription", make_args(params), result);
    };
    Device.pfnGetCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDeviceGet", make_args(params), result);
    };
    Device.pfnGetRootDeviceCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDeviceGetRootDevice", make_args(params), result);
    };
    Device.pfnGetSubDevicesCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDeviceGetSubDevices", make_args(params), result);
    };
    Device.pfnGetPropertiesCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDeviceGetProperties", make_args(params), result);
    };
    Device.pfnGetComputePropertiesCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDeviceGetComputeProperties", make_args(params), result);
    };
    Device.pfnGetModulePropertiesCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDeviceGetModuleProperties", make_args(params), result);
    };
    Device.pfnGetCommandQueueGroupPropertiesCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDeviceGetCommandQueueGroupProperties", make_args(params), result);
    };
    Device.pfnGetMemoryPropertiesCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDeviceGetMemoryProperties", make_args(params), result);
    };
    Device.pfnGetMemoryAccessPropertiesCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDeviceGetMemoryAccessProperties", make_args(params), result);
    };
    Device.pfnGetCachePropertiesCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDeviceGetCacheProperties", make_args(params), result);
    };
    Device.pfnGetImagePropertiesCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDeviceGetImageProperties", make_args(params), result);
    };
    Device.pfnGetExternalMemoryPropertiesCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDeviceGetExternalMemoryProperties", make_args(params), result);
    };
    Device.pfnGetP2PPropertiesCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDeviceGetP2PProperties", make_args(params), result);
    };
    Device.pfnCanAccessPeerCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDeviceCanAccessPeer", make_args(params), result);
    };
    Device.pfnGetStatusCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDeviceGetStatus", make_args(params), result);
    };
    Device.pfnGetGlobalTimestampsCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDeviceGetGlobalTimestamps", make_args(params), result);
    };
    Context.pfnCreateCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeContextCreate", make_args(params), result);
    };
    Context.pfnCreateExCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeContextCreateEx", make_args(params), result);
    };
    Context.pfnDestroyCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeContextDestroy", make_args(params), result);
    };
    Context.pfnGetStatusCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeContextGetStatus", make_args(params), result);
    };
    CommandQueue.pfnCreateCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandQueueCreate", make_args(params), result);
    };
    CommandQueue.pfnDestroyCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandQueueDestroy", make_args(params), result);
    };
    CommandQueue.pfnExecuteCommandListsCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandQueueExecuteCommandLists", make_args(params), result);
    };
    CommandQueue.pfnSynchronizeCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandQueueSynchronize", make_args(params), result);
    };
    CommandQueue.pfnGetOrdinalCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandQueueGetOrdinal", make_args(params), result);
    };
    CommandQueue.pfnGetIndexCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandQueueGetIndex", make_args(params), result);
    };
    CommandList.pfnCreateCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListCreate", make_args(params), result);
    };
    CommandList.pfnCreateImmediateCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListCreateImmediate", make_args(params), result);
    };
    CommandList.pfnDestroyCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListDestroy", make_args(params), result);
    };
    CommandList.pfnCloseCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListClose", make_args(params), result);
    };
    CommandList.pfnResetCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListReset", make_args(params), result);
    };
    CommandList.pfnAppendWriteGlobalTimestampCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListAppendWriteGlobalTimestamp", make_args(params), result);
    };
    CommandList.pfnHostSynchronizeCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListHostSynchronize", make_args(params), result);
    };
    CommandList.pfnGetDeviceHandleCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListGetDeviceHandle", make_args(params), result);
    };
    CommandList.pfnGetContextHandleCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListGetContextHandle", make_args(params), result);
    };
    CommandList.pfnGetOrdinalCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListGetOrdinal", make_args(params), result);
    };
    CommandList.pfnImmediateGetIndexCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListImmediateGetIndex", make_args(params), result);
    };
    CommandList.pfnIsImmediateCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListIsImmediate", make_args(params), result);
    };
    CommandList.pfnAppendBarrierCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListAppendBarrier", make_args(params), result);
    };
    CommandList.pfnAppendMemoryRangesBarrierCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListAppendMemoryRangesBarrier", make_args(params), result);
    };
    Context.pfnSystemBarrierCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeContextSystemBarrier", make_args(params), result);
    };
    CommandList.pfnAppendMemoryCopyCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListAppendMemoryCopy", make_args(params), result);
    };
    CommandList.pfnAppendMemoryFillCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListAppendMemoryFill", make_args(params), result);
    };
    CommandList.pfnAppendMemoryCopyRegionCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListAppendMemoryCopyRegion", make_args(params), result);
    };
    CommandList.pfnAppendMemoryCopyFromContextCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListAppendMemoryCopyFromContext", make_args(params), result);
    };
    CommandList.pfnAppendImageCopyCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListAppendImageCopy", make_args(params), result);
    };
    CommandList.pfnAppendImageCopyRegionCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListAppendImageCopyRegion", make_args(params), result);
    };
    CommandList.pfnAppendImageCopyToMemoryCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListAppendImageCopyToMemory", make_args(params), result);
    };
    CommandList.pfnAppendImageCopyFromMemoryCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListAppendImageCopyFromMemory", make_args(params), result);
    };
    CommandList.pfnAppendMemoryPrefetchCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListAppendMemoryPrefetch", make_args(params), result);
    };
    CommandList.pfnAppendMemAdviseCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListAppendMemAdvise", make_args(params), result);
    };
    EventPool.pfnCreateCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeEventPoolCreate", make_args(params), result);
    };
    EventPool.pfnDestroyCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeEventPoolDestroy", make_args(params), result);
    };
    Event.pfnCreateCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeEventCreate", make_args(params), result);
    };
    Event.pfnDestroyCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeEventDestroy", make_args(params), result);
    };
    EventPool.pfnGetIpcHandleCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeEventPoolGetIpcHandle", make_args(params), result);
    };
    EventPool.pfnPutIpcHandleCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeEventPoolPutIpcHandle", make_args(params), result);
    };
    EventPool.pfnOpenIpcHandleCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeEventPoolOpenIpcHandle", make_args(params), result);
    };
    EventPool.pfnCloseIpcHandleCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeEventPoolCloseIpcHandle", make_args(params), result);
    };
    CommandList.pfnAppendSignalEventCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListAppendSignalEvent", make_args(params), result);
    };
    CommandList.pfnAppendWaitOnEventsCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListAppendWaitOnEvents", make_args(params), result);
    };
    Event.pfnHostSignalCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeEventHostSignal", make_args(params), result);
    };
    Event.pfnHostSynchronizeCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeEventHostSynchronize", make_args(params), result);
    };
    Event.pfnQueryStatusCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeEventQueryStatus", make_args(params), result);
    };
    CommandList.pfnAppendEventResetCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListAppendEventReset", make_args(params), result);
    };
    Event.pfnHostResetCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeEventHostReset", make_args(params), result);
    };
    Event.pfnQueryKernelTimestampCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeEventQueryKernelTimestamp", make_args(params), result);
    };
    CommandList.pfnAppendQueryKernelTimestampsCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListAppendQueryKernelTimestamps", make_args(params), result);
    };
    Event.pfnGetEventPoolCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeEventGetEventPool", make_args(params), result);
    };
    Event.pfnGetSignalScopeCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeEventGetSignalScope", make_args(params), result);
    };
    Event.pfnGetWaitScopeCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeEventGetWaitScope", make_args(params), result);
    };
    EventPool.pfnGetContextHandleCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeEventPoolGetContextHandle", make_args(params), result);
    };
    EventPool.pfnGetFlagsCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeEventPoolGetFlags", make_args(params), result);
    };
    Fence.pfnCreateCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeFenceCreate", make_args(params), result);
    };
    Fence.pfnDestroyCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeFenceDestroy", make_args(params), result);
    };
    Fence.pfnHostSynchronizeCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeFenceHostSynchronize", make_args(params), result);
    };
    Fence.pfnQueryStatusCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeFenceQueryStatus", make_args(params), result);
    };
    Fence.pfnResetCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeFenceReset", make_args(params), result);
    };
    Image.pfnGetPropertiesCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeImageGetProperties", make_args(params), result);
    };
    Image.pfnCreateCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeImageCreate", make_args(params), result);
    };
    Image.pfnDestroyCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeImageDestroy", make_args(params), result);
    };
    Mem.pfnAllocSharedCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeMemAllocShared", make_args(params), result);
    };
    Mem.pfnAllocDeviceCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeMemAllocDevice", make_args(params), result);
    };
    Mem.pfnAllocHostCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeMemAllocHost", make_args(params), result);
    };
    Mem.pfnFreeCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeMemFree", make_args(params), result);
    };
    Mem.pfnGetAllocPropertiesCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeMemGetAllocProperties", make_args(params), result);
    };
    Mem.pfnGetAddressRangeCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeMemGetAddressRange", make_args(params), result);
    };
    Mem.pfnGetIpcHandleCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeMemGetIpcHandle", make_args(params), result);
    };
    MemExp.pfnGetIpcHandleFromFileDescriptorExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeMemGetIpcHandleFromFileDescriptorExp", make_args(params), result);
    };
    MemExp.pfnGetFileDescriptorFromIpcHandleExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeMemGetFileDescriptorFromIpcHandleExp", make_args(params), result);
    };
    Mem.pfnPutIpcHandleCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeMemPutIpcHandle", make_args(params), result);
    };
    Mem.pfnOpenIpcHandleCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeMemOpenIpcHandle", make_args(params), result);
    };
    Mem.pfnCloseIpcHandleCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeMemCloseIpcHandle", make_args(params), result);
    };
    MemExp.pfnSetAtomicAccessAttributeExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeMemSetAtomicAccessAttributeExp", make_args(params), result);
    };
    MemExp.pfnGetAtomicAccessAttributeExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeMemGetAtomicAccessAttributeExp", make_args(params), result);
    };
    Module.pfnCreateCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeModuleCreate", make_args(params), result);
    };
    Module.pfnDestroyCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeModuleDestroy", make_args(params), result);
    };
    Module.pfnDynamicLinkCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeModuleDynamicLink", make_args(params), result);
    };
    ModuleBuildLog.pfnDestroyCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeModuleBuildLogDestroy", make_args(params), result);
    };
    ModuleBuildLog.pfnGetStringCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeModuleBuildLogGetString", make_args(params), result);
    };
    Module.pfnGetNativeBinaryCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeModuleGetNativeBinary", make_args(params), result);
    };
    Module.pfnGetGlobalPointerCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeModuleGetGlobalPointer", make_args(params), result);
    };
    Module.pfnGetKernelNamesCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeModuleGetKernelNames", make_args(params), result);
    };
    Module.pfnGetPropertiesCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeModuleGetProperties", make_args(params), result);
    };
    Kernel.pfnCreateCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeKernelCreate", make_args(params), result);
    };
    Kernel.pfnDestroyCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeKernelDestroy", make_args(params), result);
    };
    Module.pfnGetFunctionPointerCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeModuleGetFunctionPointer", make_args(params), result);
    };
    Kernel.pfnSetGroupSizeCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeKernelSetGroupSize", make_args(params), result);
    };
    Kernel.pfnSuggestGroupSizeCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeKernelSuggestGroupSize", make_args(params), result);
    };
    Kernel.pfnSuggestMaxCooperativeGroupCountCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeKernelSuggestMaxCooperativeGroupCount", make_args(params), result);
    };
    Kernel.pfnSetArgumentValueCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeKernelSetArgumentValue", make_args(params), result);
    };
    Kernel.pfnSetIndirectAccessCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeKernelSetIndirectAccess", make_args(params), result);
    };
    Kernel.pfnGetIndirectAccessCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeKernelGetIndirectAccess", make_args(params), result);
    };
    Kernel.pfnGetSourceAttributesCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeKernelGetSourceAttributes", make_args(params), result);
    };
    Kernel.pfnSetCacheConfigCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeKernelSetCacheConfig", make_args(params), result);
    };
    Kernel.pfnGetPropertiesCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeKernelGetProperties", make_args(params), result);
    };
    Kernel.pfnGetNameCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeKernelGetName", make_args(params), result);
    };
    CommandList.pfnAppendLaunchKernelCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListAppendLaunchKernel", make_args(params), result);
    };
    CommandList.pfnAppendLaunchCooperativeKernelCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListAppendLaunchCooperativeKernel", make_args(params), result);
    };
    CommandList.pfnAppendLaunchKernelIndirectCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListAppendLaunchKernelIndirect", make_args(params), result);
    };
    CommandList.pfnAppendLaunchMultipleKernelsIndirectCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListAppendLaunchMultipleKernelsIndirect", make_args(params), result);
    };
    Context.pfnMakeMemoryResidentCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeContextMakeMemoryResident", make_args(params), result);
    };
    Context.pfnEvictMemoryCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeContextEvictMemory", make_args(params), result);
    };
    Context.pfnMakeImageResidentCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeContextMakeImageResident", make_args(params), result);
    };
    Context.pfnEvictImageCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeContextEvictImage", make_args(params), result);
    };
    Sampler.pfnCreateCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeSamplerCreate", make_args(params), result);
    };
    Sampler.pfnDestroyCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeSamplerDestroy", make_args(params), result);
    };
    VirtualMem.pfnReserveCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeVirtualMemReserve", make_args(params), result);
    };
    VirtualMem.pfnFreeCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeVirtualMemFree", make_args(params), result);
    };
    VirtualMem.pfnQueryPageSizeCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeVirtualMemQueryPageSize", make_args(params), result);
    };
    PhysicalMem.pfnCreateCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zePhysicalMemCreate", make_args(params), result);
    };
    PhysicalMem.pfnDestroyCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zePhysicalMemDestroy", make_args(params), result);
    };
    VirtualMem.pfnMapCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeVirtualMemMap", make_args(params), result);
    };
    VirtualMem.pfnUnmapCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeVirtualMemUnmap", make_args(params), result);
    };
    VirtualMem.pfnSetAccessAttributeCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeVirtualMemSetAccessAttribute", make_args(params), result);
    };
    VirtualMem.pfnGetAccessAttributeCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeVirtualMemGetAccessAttribute", make_args(params), result);
    };
    KernelExp.pfnSetGlobalOffsetExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeKernelSetGlobalOffsetExp", make_args(params), result);
    };
    KernelExp.pfnGetBinaryExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeKernelGetBinaryExp", make_args(params), result);
    };
    Device.pfnImportExternalSemaphoreExtCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDeviceImportExternalSemaphoreExt", make_args(params), result);
    };
    Device.pfnReleaseExternalSemaphoreExtCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDeviceReleaseExternalSemaphoreExt", make_args(params), result);
    };
    CommandList.pfnAppendSignalExternalSemaphoreExtCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListAppendSignalExternalSemaphoreExt", make_args(params), result);
    };
    CommandList.pfnAppendWaitExternalSemaphoreExtCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListAppendWaitExternalSemaphoreExt", make_args(params), result);
    };
    Device.pfnReserveCacheExtCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDeviceReserveCacheExt", make_args(params), result);
    };
    Device.pfnSetCacheAdviceExtCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDeviceSetCacheAdviceExt", make_args(params), result);
    };
    EventExp.pfnQueryTimestampsExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeEventQueryTimestampsExp", make_args(params), result);
    };
    ImageExp.pfnGetMemoryPropertiesExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeImageGetMemoryPropertiesExp", make_args(params), result);
    };
    Image.pfnViewCreateExtCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeImageViewCreateExt", make_args(params), result);
    };
    ImageExp.pfnViewCreateExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeImageViewCreateExp", make_args(params), result);
    };
    KernelExp.pfnSchedulingHintExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeKernelSchedulingHintExp", make_args(params), result);
    };
    Device.pfnPciGetPropertiesExtCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDevicePciGetPropertiesExt", make_args(params), result);
    };
    CommandList.pfnAppendImageCopyToMemoryExtCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListAppendImageCopyToMemoryExt", make_args(params), result);
    };
    CommandList.pfnAppendImageCopyFromMemoryExtCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListAppendImageCopyFromMemoryExt", make_args(params), result);
    };
    Image.pfnGetAllocPropertiesExtCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeImageGetAllocPropertiesExt", make_args(params), result);
    };
    Module.pfnInspectLinkageExtCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeModuleInspectLinkageExt", make_args(params), result);
    };
    Mem.pfnFreeExtCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeMemFreeExt", make_args(params), result);
    };
    FabricVertexExp.pfnGetExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeFabricVertexGetExp", make_args(params), result);
    };
    FabricVertexExp.pfnGetSubVerticesExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeFabricVertexGetSubVerticesExp", make_args(params), result);
    };
    FabricVertexExp.pfnGetPropertiesExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeFabricVertexGetPropertiesExp", make_args(params), result);
    };
    FabricVertexExp.pfnGetDeviceExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeFabricVertexGetDeviceExp", make_args(params), result);
    };
    DeviceExp.pfnGetFabricVertexExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDeviceGetFabricVertexExp", make_args(params), result);
    };
    FabricEdgeExp.pfnGetExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeFabricEdgeGetExp", make_args(params), result);
    };
    FabricEdgeExp.pfnGetVerticesExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeFabricEdgeGetVerticesExp", make_args(params), result);
    };
    FabricEdgeExp.pfnGetPropertiesExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeFabricEdgeGetPropertiesExp", make_args(params), result);
    };
    Event.pfnQueryKernelTimestampsExtCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeEventQueryKernelTimestampsExt", make_args(params), result);
    };
    RTASBuilderExp.pfnCreateExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeRTASBuilderCreateExp", make_args(params), result);
    };
    RTASBuilderExp.pfnGetBuildPropertiesExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeRTASBuilderGetBuildPropertiesExp", make_args(params), result);
    };
    DriverExp.pfnRTASFormatCompatibilityCheckExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeDriverRTASFormatCompatibilityCheckExp", make_args(params), result);
    };
    RTASBuilderExp.pfnBuildExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeRTASBuilderBuildExp", make_args(params), result);
    };
    RTASBuilderExp.pfnDestroyExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeRTASBuilderDestroyExp", make_args(params), result);
    };
    RTASParallelOperationExp.pfnCreateExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeRTASParallelOperationCreateExp", make_args(params), result);
    };
    RTASParallelOperationExp.pfnGetPropertiesExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeRTASParallelOperationGetPropertiesExp", make_args(params), result);
    };
    RTASParallelOperationExp.pfnJoinExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeRTASParallelOperationJoinExp", make_args(params), result);
    };
    RTASParallelOperationExp.pfnDestroyExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeRTASParallelOperationDestroyExp", make_args(params), result);
    };
    Mem.pfnGetPitchFor2dImageCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeMemGetPitchFor2dImage", make_args(params), result);
    };
    ImageExp.pfnGetDeviceOffsetExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeImageGetDeviceOffsetExp", make_args(params), result);
    };
    CommandListExp.pfnCreateCloneExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListCreateCloneExp", make_args(params), result);
    };
    CommandListExp.pfnImmediateAppendCommandListsExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListImmediateAppendCommandListsExp", make_args(params), result);
    };
    CommandListExp.pfnGetNextCommandIdExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListGetNextCommandIdExp", make_args(params), result);
    };
    CommandListExp.pfnGetNextCommandIdWithKernelsExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListGetNextCommandIdWithKernelsExp", make_args(params), result);
    };
    CommandListExp.pfnUpdateMutableCommandsExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListUpdateMutableCommandsExp", make_args(params), result);
    };
    CommandListExp.pfnUpdateMutableCommandSignalEventExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListUpdateMutableCommandSignalEventExp", make_args(params), result);
    };
    CommandListExp.pfnUpdateMutableCommandWaitEventsExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListUpdateMutableCommandWaitEventsExp", make_args(params), result);
    };
    CommandListExp.pfnUpdateMutableCommandKernelsExpCb = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("zeCommandListUpdateMutableCommandKernelsExp", make_args(params), result);
    };
};

#endif // trace_gen_H
