#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - such as printf function
 * @format: const variable
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int i, n;
	va_list ptr;
	char *sep, *string;
	sep = ", ";
	i = 0, n = 0;
	va_start(ptr, format);
	while(format[n++])
	n--;
	while ( i < n)
	{
		if (i == (n - 1))
			sep = "";	
	switch (format[i])
	{
		case 'i':
			printf("%d%s", va_arg(ptr, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(ptr, double), sep);
			break;
		case 'c':
			printf("%c%s", va_arg(ptr, int), sep);
			break;
		case 's':
			string = va_arg(ptr, char *);
			printf("%s%s", string ? string : "(nil)", sep);
			break;
	}
	i++;
	}
	va_end(ptr);
	printf("\n");


}
