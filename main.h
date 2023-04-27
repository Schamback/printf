#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _aprintf(const char *format, va_list args);
#endif
