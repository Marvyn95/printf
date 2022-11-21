#include "main.h"

/**checkformatspecifier - checks format speciifer in our printffunction
 * and assigns the appropriate function to handle the replacement of characters
 * @f: input argument which is a string
 * Return: ponter to a function that takes in variable of type va_list  ot NULL
 */

int (*checkformatspecifier(const char *ch))(va_list)
{
	int i;
	funcn varr[4] = {{"c", printc}, {"s", prints}, {"%", printpercent}, {NULL, NULL}};

	for (i = 0; varr[i].t != NULL; i++)
	{
		if (*(varr[i].t) == *ch)
		{
			return (varr[i].f);
		}
	}
	return (NULL);
}
