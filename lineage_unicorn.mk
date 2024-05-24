#
# Copyright (C) 2022-2024 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

# Inherit from unicorn device
$(call inherit-product, device/xiaomi/unicorn/device.mk)

# Inherit from common lineage configuration
TARGET_DISABLE_EPPE := true
$(call inherit-product, vendor/lineage/config/common_full_phone.mk)

PRODUCT_NAME := lineage_unicorn
PRODUCT_DEVICE := unicorn
PRODUCT_MANUFACTURER := Xiaomi
PRODUCT_BRAND := Xiaomi
PRODUCT_MODEL := 2206122SC

PRODUCT_GMS_CLIENTID_BASE := android-xiaomi

BUILD_FINGERPRINT := Xiaomi/unicorn/unicorn:12/SKQ1.230401.001/V816.0.4.0.ULECNXM:user/release-keys

# Miui Camera for unicorn
$(call inherit-product, device/xiaomi/miuicamera-unicorn/device.mk)
$(call inherit-product, device/xiaomi/miuicamera-unicorn/BoardConfig.mk)