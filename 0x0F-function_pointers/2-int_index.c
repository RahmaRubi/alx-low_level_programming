#include "function_pointers.h"
/**
 * int_index - function
 * @array: first
 * @size: second
 * @cmp: third
 * Return: -1 or  1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x;

	if (array != NULL && cmp != NULL)
	{
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		x = cmp(array[i]);
		if (x == 1)
		return (i);
	}
	if (i == size)
		return (-1);
	}
	return (-1);
}
