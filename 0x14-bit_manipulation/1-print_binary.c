#include "main.h"
/**
 * print_binary - decimel to binary
 * @n: para
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n <= 1)
	{
		_putchar(n + '0');
		return;
	}
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
}
