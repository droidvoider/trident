#ifndef __SHARED_H__
#define __SHARED_H__

#include <android/log.h>

//dirtycow proper
extern int dcow(const char *dst, const char *src);

// log info
#define LOGV(...) { __android_log_print(ANDROID_LOG_INFO, "trident", __VA_ARGS__); }

// log notice
#define LOGN(x) { __android_log_print(ANDROID_LOG_INFO, "trident", "NOTICE: %s", (x)); }
#endif
