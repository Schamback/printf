#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints a formatted string to stdout
 * @format: string that contains zero or more directives
 *
 * Return: the number of characters printed (excluding the null byte used to end output to strings)
 */
int _printf(char *format, ...);
{

	  int i = 0, count = 0;
    char c;
    char *s;
    va_list args;

    va_start(args, format);

    while (format && format[i])
    {
        if (format[i] == '%')
        {
            i++;
            switch (format[i])
            {
                case 'c':
                    c = (char) va_arg(args, int);
                    count += _putchar(c);
                    break;
                case 's':
                    s = va_arg(args, char *);
                    count += _puts(s);
                    break;
                case '%':
                    count += _putchar('%');
                    break;
                default:
                    count += _putchar('%');
                    count += _putchar(format[i]);
                    break;
            }
        }
        else
        {
            count += _putchar(format[i]);
        }

        i++;
    }

    va_end(args);

    return count;
}

{
  va_list args;
  int sum = 0;

  va_start(args, count);
  for (int i = 0; i < count; i++) {
    sum += va_arg(args, int);
  }
  va_end(args);

  return sum;
}

/**
 * _putchar - writes a character to the standard output stream
 * @c: the character to write
 *
 * Return: the number of characters written (1) or -1 on error
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * _puts - writes a string to the standard output stream
 * @str: the string to write
 *
 * Return: the number of characters written or -1 on error
 */
int _puts(char *str)
{
    int i = 0;

    while (str && str[i])
    {
        _putchar(str[i]);
        i++;
    }

    return i;
}


