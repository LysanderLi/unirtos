#ifndef __QOSA_SDK_VERSION_H__
#define __QOSA_SDK_VERSION_H__

#include "qosa_def.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Hardcoded SDK version — the single source of truth. */
#define QOSA_SDK_VERSION_MAJOR 1
#define QOSA_SDK_VERSION_MINOR 0
#define QOSA_SDK_VERSION_PATCH 4

#define QOSA_STRINGIFY_HELPER(x) #x
#define QOSA_STRINGIFY(x) QOSA_STRINGIFY_HELPER(x)
#define QOSA_SDK_VERSION_TAG "v" QOSA_STRINGIFY(QOSA_SDK_VERSION_MAJOR) "." QOSA_STRINGIFY(QOSA_SDK_VERSION_MINOR) "." QOSA_STRINGIFY(QOSA_SDK_VERSION_PATCH)

QOSA_INLINE const char *qosa_sdk_get_version(void)
{
    return QOSA_SDK_VERSION_TAG;
}

QOSA_INLINE const char *qosa_get_fw_version(void)
{
    return QOSA_FIRMWARE_VERSION;
}

#ifdef __cplusplus
}
#endif

#endif /* __QOSA_SDK_VERSION_H__ */
