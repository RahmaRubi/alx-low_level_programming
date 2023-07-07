#include "main.h"
/**
 * flip_bits - shifting between two numbers
 * and calc how many bits do we need to flip to get this shift
 * @n: first num
 * @m: sec num
 * Return: counter
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, c;
	unsigned long x;

	i = 0, c = 0;
	x = n ^ m;
	for (i = 0; i < 64; i++)
	{
		if (x & 1)
			c++;
		x = x >> 1;
	}
	return (c);


}
