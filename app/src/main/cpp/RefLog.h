

#ifndef SMARTPOITERDEMO_REFLOG_H
#define SMARTPOITERDEMO_REFLOG_H

#include <android/log.h>
#include <cstring>
#include <errno.h>
#define ENABLE_REF_LOG

#ifdef ENABLE_REF_LOG

#define APPNAME "smartPointer"

#define REFError(format, ...) __android_log_print(ANDROID_LOG_ERROR,APPNAME,format,##__VA_ARGS__)
#define REFWarning(format, ...)                                                                   \
    __android_log_print(ANDROID_LOG_WARN, APPNAME, format, ##__VA_ARGS__)
#define REFInfo(format, ...) __android_log_print(ANDROID_LOG_INFO, APPNAME, format, ##__VA_ARGS__)

#ifndef NDEBUG
#define REFDebug(format, ...)                                                                     \
    __android_log_print(ANDROID_LOG_DEBUG, APPNAME, format, ##__VA_ARGS__)
#else
#define REFDebug(format, ...)                                                                     \
    {}
#endif
#endif


#endif //SMARTPOITERDEMO_REFLOG_H
