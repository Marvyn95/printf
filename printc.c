#include "main.h"
/**
 * printc - replaces characters in a string
 * @argument: argument of va_list type
 * @Return: number of characters printed
 */

int printc(va_list argument)
{
	char cc = (char)va_arg(argument, int);
	int count = 0;
	
	if(cc)
	{
		count = write(1, &cc, 1);
		return (count);
	}
	return (0);
}
