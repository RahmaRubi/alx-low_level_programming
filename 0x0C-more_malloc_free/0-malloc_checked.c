#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * malloc_checked - checking the return value of malloc function
 * @b: desired allocating size
 * Return: 98 in failure or pointer in success
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	else
		return (p);




}

