/*
 * Copyright (C) 2023 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <cstdint>
#include <gui/Surface.h>
#include <ui/GraphicBufferMapper.h>
#include <ui/Rect.h>

namespace android {

extern "C" {
    void _ZN7android19GraphicBufferMapper9lockYCbCrEPK13native_handlejRKNS_4RectEP13android_ycbcr(
            void* mapper, const native_handle_t* handle, uint32_t usage, const Rect& bounds, android_ycbcr *ycbcr);
}

void _ZN7android19GraphicBufferMapper9lockYCbCrEPK13native_handlejRKNS_4RectEP13android_ycbcr(
        void* /* mapper */, const native_handle_t* handle, uint32_t usage, const Rect& bounds, android_ycbcr *ycbcr) {
    GraphicBufferMapper::get().lockYCbCr(handle, usage, bounds, ycbcr);
}

extern "C" void _ZN7android18BnProducerListener16onBufferDetachedEi() {
    return;
}

}
