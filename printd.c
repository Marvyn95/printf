#include "main.h"

/**
 * printd - prints out integers to the standard output
 * @args: input argument
 * Return: returns an integer
 */

int printd(va_list argument)
{
	long int digit = va_arg(argument, int);
	int ct = 0;

	if (digit < 0)
	{
		ct = ct + _putchar('-');
		digit = digit * (-1);
	}

	if (digit < 10)
	{
		_putchar(digit + '0');
		ct = ct + 1;
		return (ct);
	}

	if (digit > 9 && digit < 100)
	{
		ct = ct + _putchar(digit / 10 + '0');
		ct = ct + _putchar(digit % 10 + '0');
		return (ct);
	}
}
