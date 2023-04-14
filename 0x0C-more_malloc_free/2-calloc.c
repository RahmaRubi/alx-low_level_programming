#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - array
 * @nmemb: 1 input
 * @size: size of array
 *
 * Return: char
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *y;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	y = malloc(size * nmemb);
	if (y == NULL)
	{
		return (NULL);
	}
	memset(y, 0, size * nmemb);
	return (y);
}
