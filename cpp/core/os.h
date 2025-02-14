#ifndef CORE_OS_H_
#define CORE_OS_H_

#if defined(_WIN32) || defined(_WIN64)
#define OS_IS_WINDOWS
#elif defined(__unix) || defined(__APPLE__)
#define OS_IS_UNIX_OR_APPLE
#else
#error Unknown operating system!
#endif

#ifdef __MINGW32__
#define BYTE_ORDER    __BYTE_ORDER__
#define LITTLE_ENDIAN __ORDER_LITTLE_ENDIAN__
#define BIG_ENDIAN    __ORDER_BIG_ENDIAN__
#endif

#endif //CORE_OS_H_
