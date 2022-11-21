#include "main.h"

/**
 * printpercent - prints the percentage sign
 * @argument: argument of type va_list
 * @Return: number of charaters printed out
 */

int printpercent(va_list argument)
{
	(void)argument;
	char cc = '%';
	int count = 0;
	
	if(cc != NULL)
	{
		count = write(1, &cc, 1);
		return (count);
	}
	return (0);
}
