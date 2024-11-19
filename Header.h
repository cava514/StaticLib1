#pragma once

// Экспортирование функций для DLL или LIB
#ifdef MYLIBRARY_EXPORTS
#define MYLIBRARY_API __declspec(dllexport)
#else
#define MYLIBRARY_API __declspec(dllimport)
#endif

extern "C" MYLIBRARY_API int add(int a, int b);
extern "C" MYLIBRARY_API int multiply(int a, int b);