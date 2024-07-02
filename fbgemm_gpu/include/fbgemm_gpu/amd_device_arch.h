/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree.
 */
#pragma once

#if __gfx1010__ || __gfx1011__ || __gfx1012__ || __gfx1030__ || __gfx1031__ || \
    __gfx1032__ || __gfx1100__ || __gfx1101__ || __gfx1102__
#define AMD_ARCH_NAVI
#endif