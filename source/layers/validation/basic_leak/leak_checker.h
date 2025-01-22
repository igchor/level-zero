/*
 * Copyright (C) 2024 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 *
 */

#pragma once

#include <atomic>
#include <unordered_map>
#include <string>
#include <vector>

// Counts the number of calls to each function and reports (in the dtor)
// the difference between the number of calls to create and destroy functions
// if there is a mismatch.
//
// The functions to track are passed in the constructor.
//
// A sample output is this:
// ------------------------------------------------------------------------
//                zeContextCreate = 1     \--->        zeContextDestroy = 1
//           zeCommandQueueCreate = 1     \--->   zeCommandQueueDestroy = 1
//                 zeModuleCreate = 1     \--->         zeModuleDestroy = 1
//                 zeKernelCreate = 1     \--->         zeKernelDestroy = 1
//              zeEventPoolCreate = 1     \--->      zeEventPoolDestroy = 1
//   zeCommandListCreateImmediate = 1     |
//            zeCommandListCreate = 1     \--->    zeCommandListDestroy = 1  ---> LEAK = 1
//                  zeEventCreate = 2     \--->          zeEventDestroy = 2
//                  zeFenceCreate = 1     \--->          zeFenceDestroy = 1
//                  zeImageCreate = 0     \--->          zeImageDestroy = 0
//                zeSamplerCreate = 0     \--->        zeSamplerDestroy = 0
//               zeMemAllocDevice = 0     |
//                 zeMemAllocHost = 1     |
//               zeMemAllocShared = 0     \--->               zeMemFree = 1
//
struct LeakChecker {
    LeakChecker();
    ~LeakChecker();

    
private:
    
};
