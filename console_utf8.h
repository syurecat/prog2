#ifndef CONSOLE_UTF8_H
#define CONSOLE_UTF8_H

#ifdef _WIN32

#include <windows.h>

static inline void console_use_utf8(void)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
}

#else

static inline void console_use_utf8(void)
{
    /* Linux nope */
}

#endif

#endif