#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int (*checkformatspecifier(const char*))(va_list);

/**
 * struct func - data type that stores addresses and function pointers
 * @t: normal variable pointers for characters
 * @f: function pointers
 */

typedef struct func
{
	char *t;
	int (*f)(va_list);
} funcn;

int printc(va_list argument);
int prints(va_list argument);
int printpercent(va_list argument);
int printd(va_list argument);



#endif
