/*
 * Copyright (c) 2020, The SerenityOS Developers.
 * Copyright (c) 2025, The TernOS Developers.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <AK/Types.h>

/**
 * @brief Represents a device-related event within the system.
 *
 * This structure encapsulates information about hardware device events,
 * such as insertion, removal, recovery, or fatal errors. It can be used
 * by kernel subsystems or user-space services to track the state of
 * block and character devices.
 */
struct DeviceEvent {
    /**
     * @brief Current state of the device event.
     *
     * This corresponds to one of the values defined in the `State` enum below.
     */
    int state;

    /**
     * @brief Indicates whether the device is a block device.
     *
     * - `1` if the device is a block device (e.g., disk drive).
     * - `0` if the device is a character device (e.g., serial port).
     */
    int is_block_device;

    /**
     * @brief The major device number.
     *
     * This number identifies the device driver associated with the device.
     */
    unsigned major_number;

    /**
     * @brief The minor device number.
     *
     * This number is used to distinguish individual devices controlled by the same driver.
     */
    unsigned minor_number;

    /**
     * @brief Enumerates possible device event states.
     *
     * These constants represent the different lifecycle events that a device
     * can go through within the kernel or hardware layer.
     */
    enum State {
        Removed     = 0x01, /**< Device was removed from the system. */
        Inserted    = 0x02, /**< Device was inserted or detected. */
        Recovered   = 0x03, /**< Device recovered from an error condition. */
        FatalError  = 0x04, /**< Device encountered a fatal, unrecoverable error. */
    };
};
