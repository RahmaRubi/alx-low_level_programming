#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * array_range - stoaring an array
 * @min: min value
 * @max: max value
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int size, *p, i;

	size = (max - min) + 1;
	p = malloc(size * sizeof(int));
	if (size < 0 || p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = min + i;
	return (p);
}

