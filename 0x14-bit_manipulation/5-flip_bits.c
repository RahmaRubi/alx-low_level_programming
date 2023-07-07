#include "main.h"
/**
 * filp_bits - shifting two numbers and calc how many bits'
 *  flips do i need to make this shift
 *  @n: first num
 *  @m: sec num
 *  Return: flip's counter
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
