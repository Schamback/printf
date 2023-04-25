#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int _putchar(int c);
int _puts(char *str);

/**
 * _printf - prints a formatted string to stdout
 * @format: string that contains zero or more directives
 *
 * Return: the number of characters printed
 */
int _printf(char *format, ...)
{
int k = 0, counts = 0;
char y;
char *s;
va_list args;

va_start(args, format);
while (format && format[k])
{
if (format[k] == '%')
{
k++;
switch (format[k])
{
case 'y':
y = (char) va_arg(args, int);
counts += _putchar(y);
break;
case 's':
s = va_arg(args, char *);
counts += _puts(s);
break;
case '%':
counts += _putchar('%');
break;
default:
counts += _putchar('%');
counts += _putchar(format[k]);
break;
}
}
else
{
counts += _putchar(format[k]);
}
k++;
}
va_end(args);
return (counts);
}

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters passed to the function
 * Return: the sum of all its parameters
 */
int sum_them_all(unsigned int n, ...)
{
va_list args;
int counts = 0;

va_start(args, n);
for (unsigned int k = 0; k < n; k++)
{
counts += va_arg(args, int);
}
va_end(args);
return (counts);
}

/**
 * _putchar - writes a character to the standard output stream
 * @c: the character to write
 *
 * Return: the number of characters written (1) or -1 on error
 */
int _putchar(int c)
{
return (write(1, &c, 1));
}

/**
 * _puts - writes a string to the standard output stream
 * @str: the string to write
 *
 * Return: the number of characters written or -1 on error
 */
int _puts(char *str)
{
int u = 0;

while (str && str[u])
{
_putchar(str[u]);
u++;
}
return (u);
}
