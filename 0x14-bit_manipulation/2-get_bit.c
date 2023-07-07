#include "main.h"
/**
 * get_bit - checking value of the desired bit
 * @n: number
 * @index: index
 * Return: 1 or 0 or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return (n >> index & 1);


}
