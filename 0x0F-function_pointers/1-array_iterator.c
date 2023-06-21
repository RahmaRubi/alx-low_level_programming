#include "function_pointers.h"
/**
 *array_iterator - function prints array decimal and hexa  values
 *through a pointer function, its paramter is arr[index]
 *@array: first
 *@size: second
 *@action: third
 *Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array != NULL && action != NULL)
	for (i = 0; i < size; i++)
		action(array[i]);
}
