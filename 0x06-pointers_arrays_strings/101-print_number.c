alx-low_level_programming/0x06-pointers_arrays_strings/101-print_number.c
@EmadAnwer
EmadAnwer task 9
Latest commit 391eb37 yesterday
 History
 1 contributor
30 lines (27 sloc)  385 Bytes

/*
 * 0x06. C - More pointers, arrays and strings
 * task 9
 */
#include "main.h"
/**
 * print_number - encodes a string into  rot13.
 * @n: number
 * Return: *src encodd string into  rot13.
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	} else
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}

