#include "main.h"

/**
 * get_endianness - bit order
 *
 * Return: int
 */
int get_endianness(void)
{
	int a = 0x1234;
	char *b;

	b = (char *)&a;
	if (*b == 0x12)
		return (0);
	else if (*b == 0x34)
		return (1);
	return (0);
}
