#include "main.h"
/**
 * _printf - works like printf, prints out a modified string
 * @format: first argument which is a string to print out
 * @...: variables which could be any number
 * @Return: a few integers including 0 itself
 */

int _printf(const char *format, ...)
{
	va_list argument;
	int i = 0;
	int value = 0;
	int count = 0;
	int (*ff)(va_list);

	va_start(argument, format);

	if (format == NULL)
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			value = write(1, &format[i], 1);
			count = count + value;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			ff = checkformatspecifier(&format[i + 1]);
			if (ff != NULL)
			{
				value = (*ff)(argument);
				count = count + value;
				i = i + 2;
				continue;
			}
			if (format[i + 1] == '\0')
			{
				break;
			}
			if (format[i + 1] != '\0')
			{
				value = write(1, &format[i + 1], 1);
				count = count + value;
				i = i + 2;
				continue; 
			}
		}
	}
	va_end(argument);
	return (count);
}
