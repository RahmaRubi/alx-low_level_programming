#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers- variadic function prints paramters
 * individually followed by a new line
 * @separator: char seprating paramters
 * @n: fixed paramter to the number of paramter coming after
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	int x;
if (n != 0)
{
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{	x =  va_arg(ptr, unsigned int);
		if (separator && i < n - 1)
			printf("%d%s", x, separator);
		else
			printf("%d", x);
	}
	printf("\n");
}

return;
}
