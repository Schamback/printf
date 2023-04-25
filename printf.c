/**
 * _printf - prints a formatted string to stdout
 * @format: string that contains zero or more directives
 *
 * Return: the number of characters printed
 */
int _printf(char *format, ...);
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

{
	va_list args;

	int sums = 0;

	va_start(args, counts);

	for (int k = 0; k < counts; k++)
	{
		sums += va_arg(args, int);
	}
	va_end(args);
	return (sums);
}

/**
 * _putchar - writes a character to the standard output stream
 * @c: the character to write
 *
 * Return: the number of characters written (1) or -1 on error
 */
int _putchar(char c)
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
