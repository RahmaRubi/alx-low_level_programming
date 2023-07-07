#include "main.h"
/**
 * get_bit - git the value of bit index
 * @n: number
 * @index: index
 * Return: 1 or 0 or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
	{
		return (n >> index & 1);
	}
	return (-1);
}
