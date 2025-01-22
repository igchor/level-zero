/*
 * Copyright (C) 2024 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 *
 */

#include "leak_checker.h"

#include <cassert>
#include <iostream>
#include <sstream>
#include <iomanip>

void LeakChecker::initialize(const std::vector<std::string> &functionsToTrack)
{
    for (const auto &functionName : functionsToTrack) {
        counts[functionName] = 0;
    }
}

void LeakChecker::countFunctionCall(const std::string &functionName)
{
    auto it = counts.find(functionName);

    // make sure there is no insertion happening during program exeuction
    // as inserting to the map is not thread safe
    if (it == counts.end()) {
        assert(false);
        return;
    }

    it->second.fetch_add(1, std::memory_order_relaxed);
}

LeakChecker::~LeakChecker()
{
    if (counts.empty()) {
        return;
    }

    // The format of this table is such that each row accounts for a
    // specific type of objects, and all elements in the raw except the last
    // one are allocating objects of that type, while the last element is known
    // to deallocate objects of that type.
    //
    std::vector<std::vector<std::string>> CreateDestroySet = {
    {"zeContextCreate",      "zeContextDestroy"},
    {"zeCommandQueueCreate", "zeCommandQueueDestroy"},
    {"zeModuleCreate",       "zeModuleDestroy"},
    {"zeKernelCreate",       "zeKernelDestroy"},
    {"zeEventPoolCreate",    "zeEventPoolDestroy"},
    {"zeCommandListCreateImmediate", "zeCommandListCreate", "zeCommandListDestroy"},
    {"zeEventCreate",        "zeEventDestroy"},
    {"zeFenceCreate",        "zeFenceDestroy"},
    {"zeImageCreate",        "zeImageDestroy"},
    {"zeSamplerCreate",      "zeSamplerDestroy"},
    {"zeMemAllocDevice", "zeMemAllocHost", "zeMemAllocShared", "zeMemFree"},
    };

    std::cerr << "Check balance of create/destroy calls\n";
    std::cerr << "----------------------------------------------------------\n";
    std::stringstream ss;
    for (const auto &Row : CreateDestroySet) {
        int diff = 0;
        for (auto I = Row.begin(); I != Row.end();) {
        const char *ZeName = (*I).c_str();
        const auto &ZeCount = (counts)[*I];

        bool First = (I == Row.begin());
        bool Last = (++I == Row.end());

        if (Last) {
            ss << " \\--->";
            diff -= ZeCount;
        } else {
            diff += ZeCount;
            if (!First) {
            ss << " | ";
            std::cerr << ss.str() << "\n";
            ss.str("");
            ss.clear();
            }
        }
        ss << std::setw(30) << std::right << ZeName;
        ss << " = ";
        ss << std::setw(5) << std::left << ZeCount;
        }

        if (diff) {
        ss << " ---> LEAK = " << diff;
        }

        std::cerr << ss.str() << '\n';
        ss.str("");
        ss.clear();
    }
}
