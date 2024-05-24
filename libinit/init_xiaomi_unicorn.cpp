/*
 * Copyright (C) 2021-2022 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>
#include <libinit_utils.h>

#include "vendor_init.h"

#define FINGERPRINT_CN "Xiaomi/unicorn/unicorn:12/SKQ1.230401.001/V816.0.4.0.ULECNXM:user/release-keys"


static const variant_info_t unicorn_info = {
    .hwc_value = "CN",
    .sku_value = "",
    .brand = "Xiaomi",
    .device = "unicorn",
    .marketname = "Xiaomi 12S Pro",
    .model = "2206122SC",
//  .mod_device = "unicorn",
    .mod_device = "unicorn", // Fixed miuicamera crash
    .build_fingerprint = FINGERPRINT_CN,
};

static const std::vector<variant_info_t> variants = {
    unicorn_info,
};

void vendor_load_properties() {
    set_dalvik_heap();
    search_variant(variants);

    // SafetyNet workaround
    property_override("ro.boot.verifiedbootstate", "green");
}
