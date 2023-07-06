#include "main.h"
/**
 * binary_to_unit - binary to decimal
 * @b: para
 * Return: 0 or decimal value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, bpow, x;
	int c, i;

	sum = 0, bpow = 1, c = 0;
	if (b == NULL || *b == '\0')
		return (0);
	while (b[c] != '\0')
		c++;
	for (i = c - 1; i >= 0; i--)
	{
		if ((b[i] ==  '1') || (b[i] == '0'))
		{
			x = (b[i] - '0');
			sum += (bpow * x);
			bpow *=  2;
		}
		else
		{
			sum = 0;
			break;

		}

	}
		return (sum);
	}

