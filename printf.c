#include "main.h"

/**
 * _printf - prints data to stdout
 * @format: string that contains the format to print
 * Return: number of characters written
 */
int _printf(char *format, ...)
{
	int write = 0, (*structype)(char *, va_list);
	char k[3];
	va_list ra;

	if (format == NULL)
		return (-1);
	k[2] = '\0';
	va_start(ra, format);
	_putchar(-1);
	while (format[0])
	{
		if (format[0] == '%')
		{
			structype = driver(format);
			if (structype)
			{
				k[0] = '%';
				k[1] = format[1];
				write += structype(k, ra);
			}
			else if (format[1] != '\0')
			{
				write += _putchar('%');
				write += _putchar(format[1]);
			}
			else
			{
				write += _putchar('%');
				break;
			}
			format += 2;
		}
		else
		{
			write += _putchar(format[0]);
			format++;
		}
	}
	_putchar(-2);
	return (write);
}

