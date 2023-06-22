#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - variadic function does an adding processs
 * @n: fixed paramter to the number of paramter coming after
 * Return: int
 */


int sum_them_all(const unsigned int n, ...)
{
	int sum;

	unsigned int i;

	sum = 0;

if (n != 0)
{
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, unsigned int);

	}
	return (sum);

}

return (0);



}
