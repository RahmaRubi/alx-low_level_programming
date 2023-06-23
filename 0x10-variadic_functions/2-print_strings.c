#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings- variadic function prints paramters
 * individually followed by a new line
 * @separator: char seprating paramters
 * @n: fixed paramter to the number of paramter coming after
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	char *x;
if (n != 0)
{
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{	x =  va_arg(ptr, char *);
		if (separator == NULL || i == n - 1)
			printf("%s", x ? x : "(nil)");
		else
			printf("%s%s", x ? x : "(nil)", separator);
	}
	printf("\n");
	va_end(ptr);
return;
}
}
