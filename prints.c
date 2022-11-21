#include "main.h"

/**
 * prints - prints a string
 * @argument: argument of va_list type
 * Return: count
 */

int prints(va_list argument)
{
	int i;
	int counts = 0;
	char *str = va_arg(argument, char *);

	if (!str)
		str = "(null)";

	if (str[0] == '\0')
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
	{
		counts = counts + write(1, &str[i], 1);
	}
	return (counts);
}
