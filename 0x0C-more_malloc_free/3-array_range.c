#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * array_range - range
 * @min: 1 input
 * @max: 2 input
 *
 * Return: poiner
 */
int *array_range(int min, int max)
{
	int *x;
	int b;

	if (min > max)
		return (NULL);
	x = malloc((max - min + 1) * sizeof(int));
	if (x == NULL)
		return (NULL);
	for (b = 0; b < (max - min + 1); b++)
	{
		*(x + b) = min + b;
	}
	return (x);
}
