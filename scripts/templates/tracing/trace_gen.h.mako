<%
import re
from templates import helper as th
%><%
    n=namespace
    N=n.upper()

    x=tags['$x']
    X=x.upper()
%>/*
 *
 * Copyright (C) 2021-2022 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 *
 * @file ${name}.h
 *
 */
#ifndef ${name}_H
#define ${name}_H

#include "${x}_api.h"

template <typename T> concept Handle = AnyOf<
%for obj in th.extract_objs(specs, r"handle"):
${obj['name'].replace("$x", "ze")},
%endfor
ze_device_handle_t
>;

%for obj in th.extract_objs(specs, r"function"):
Args make_args(${th.make_pfncb_param_type(n, tags, obj)} params) { 
    Args args;
%for p in th.get_descriptor_objects(specs, n, tags, obj):
%if p:
  std::vector<std::string> assignments;
  %for member in p['members']:
   %if 'pNext' not in member['name'] and 'stype' not in member['name']:
    assignments.push_back("${member['name']}=" + std::to_string(${member['name']}));
   %endif
  %endfor
 %endif
%endfor
    %for line,param_name in zip(th.make_param_lines(n, tags, obj), th.make_param_lines(n, tags, obj, format=["name"])):
    %if "[in][out]" in line:
    args.addArg("${param_name}", params.${param_name}, InOutArg{});
    %elif "[in]" in line:
    args.addArg("${param_name}", params.${param_name}, InArg{});
    %elif "[out]" in line:
    args.addArg("${param_name}", params.${param_name}, OutArg{});
    %endif
    %endfor
    return args;
 }
%endfor

///////////////////////////////////////////////////////////////////////////////
/// @brief Container for all callbacks
struct ze_call_generator
{
%for obj in th.extract_objs(specs, r"function"):
    ${th.get_table_name(n, tags, obj)}.${th.make_pfncb_name(n, tags, obj)} = [](auto params, ze_result_t result, void*, void**) {
        return ze_cb_invoke("${th.make_func_name(n, tags, obj)}", make_args(params), result);
    };
%endfor
};

#endif // ${name}_H
