#include "main.h"
/**
 * set_bit - set the value of bit index
 * @n: number
 * @index: index
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = (1UL << index | *n);
		return (1);
	}
	return (-1);
}
