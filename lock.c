#include "main.h"

/**
 * driver - selector for type of input.
 * @format: string.
 * Description: the function loops through the structs
 * selector[] ment of the struct.
 * Return: a pointer
 * structype selector - Struct
 */

int (*driver(char *format))(char *format, va_list)
{
int a;

structype selector[] = {
{"%c", printc},
{"%s", printstr},
{"%d", printint},
{"%i", printint},
{"%%", printpercent},
{"%x", printhex},
{"%X", printHEX},
{"%o", printocta},
{NULL, NULL}
};

if (format[1] == ' ' || format[1] == '\0')
return (NULL);
for (a = 0; selector[a].k; a++)
{
if (format[1] == selector[a].k[1])
return (selector[k].u);
}
return (NULL);
}
