/*
 *
 * Copyright (C) 2024 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 *
 * @file zel_basic_leak_checker.h
 *
 */

#pragma once 

#include <string>
#include "ze_api.h"
#include "ze_validation_layer.h"

namespace validation_layer
{
    class __zedlllocal basic_leakChecker : public validationChecker{
        public:
            basic_leakChecker();
            ~basic_leakChecker();

            class ZEbasic_leakChecker : public ZEValidationEntryPoints {};
            class ZESbasic_leakChecker : public ZESValidationEntryPoints {};
            class ZETbasic_leakChecker : public ZETValidationEntryPoints {};
            bool enablebasic_leak = false;

        private:
            void countFunctionCall(const std::string &functionName);

            std::unordered_map<std::string, std::atomic<int64_t>> counts;
    };
    extern class basic_leakChecker basic_leak_checker;
}