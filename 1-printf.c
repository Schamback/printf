#include "main.h"

/**
 * _aprintf - prints data
 * @format: it contains the format to print
 *
 * Return: number of char written
 */
int _aprintf(const char *format, va_list args)
{
	int nchar = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd' || *format == 'i')
			{
				int arg = va_arg(args, int);

				nchar += printf("%d", arg);
			}
			else
			{
				putchar(*format);
				nchar++;
			}
		}
		else
		{
			putchar(*format);
			nchar++;
		}
		format++;
	}

	return (nchar);
}

int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	int nchar = _aprintf(format, args);

	va_end(args);

	return (nchar);
}
