/*
 * Copyright (C) 2024 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 *
 * @file zel_basic_leak_checker.cpp
 *
 */
#include "zel_basic_leak_checker.h"

namespace validation_layer
{
    class basic_leakChecker basic_leak_checker;

    basic_leakChecker::basic_leakChecker() {
        enablebasic_leak = getenv_tobool( "ZEL_ENABLE_BASIC_LEAK_CHECKER" );
        if(enablebasic_leak) {
            basic_leakChecker::ZEbasic_leakChecker *zeChecker = new basic_leakChecker::ZEbasic_leakChecker;
            basic_leakChecker::ZESbasic_leakChecker *zesChecker = new basic_leakChecker::ZESbasic_leakChecker;
            basic_leakChecker::ZETbasic_leakChecker *zetChecker = new basic_leakChecker::ZETbasic_leakChecker;
            basic_leak_checker.zeValidation = zeChecker;
            basic_leak_checker.zetValidation = zetChecker;
            basic_leak_checker.zesValidation = zesChecker;
            validation_layer::context.validationHandlers.push_back(&basic_leak_checker);
        }
    }

    basic_leakChecker::~basic_leakChecker() {
        if(enablebasic_leak) {
            delete basic_leak_checker.zeValidation;
            delete basic_leak_checker.zetValidation;
            delete basic_leak_checker.zesValidation;
        }
    }
}