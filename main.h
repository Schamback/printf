#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * struct printstruct - structure container
 * @k: method and location to translate data to chars
 * @u: gives function for specific types
 * Return: int
 */
typedef struct printstruct
{
	char *k;
	int (*u)(char *format, va_list);
}structype;

int _printf(const char *format, ...);
#endif
