/*
 * Copyright (c) 2020, The SerenityOS Developers.
 * Copyright (c) 2025, The TernOS Developers.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <AK/Types.h>

/*
 * In the original SerenityOS Kernel, this structure used the fields
 * `tone` and `milliseconds_duration`. For TernOS, the naming convention
 * has been adjusted for clarity and consistency.
 */
struct BeepInstruction {
    u16 tone;
    u16 duration_ms;
};
