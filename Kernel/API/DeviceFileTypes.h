/*
 * Copyright (c) 2020, The SerenityOS Developers.
 * Copyright (c) 2025, The TernOS Developers.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <AK/DistinctNumeric.h>

/**
 * @brief Represents the major device number.
 *
 * The major number identifies the driver or device class associated with
 * a particular device. Devices that share the same major number are managed
 * by the same driver within the system.
 */
AK_TYPEDEF_DISTINCT_ORDERED_ID(unsigned, MajorNumber);

/**
 * @brief Represents the minor device number.
 *
 * The minor number is used to differentiate between individual devices
 * managed by the same driver. For example, multiple storage partitions
 * on the same disk may share the same major number but have unique minor numbers.
 */
AK_TYPEDEF_DISTINCT_ORDERED_ID(unsigned, MinorNumber);

/**
 * @brief Defines the type of device node.
 *
 * Device nodes represent interfaces to devices in the filesystem (e.g., `/dev/*`).
 * This enumeration distinguishes between block and character devices.
 */
enum class DeviceNodeType {
    Block = 1,     /**< Block device (e.g., disks, partitions). */
    Character = 2, /**< Character device (e.g., serial ports, terminals). */
};
