/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree.
 */
#pragma once

#if defined(__gfx1010__) || defined(__gfx1011__) || defined(__gfx1012__) ||    \
    defined(__gfx1030__) || defined(__gfx1031__) || defined(__gfx1032__) ||    \
    defined(__gfx1100__) || defined(__gfx1101__) || defined(__gfx1102__)
#define AMD_ARCH_NAVI
#endif