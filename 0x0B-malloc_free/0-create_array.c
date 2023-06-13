#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * create_array - function for creation array of char
 * @size: number of elements
 * @c: intial charcter the pointer points to it
 * Return: return null or address
 */

char *create_array(unsigned int size, char c)
{
	if (size)
	{
		char *str;

		str = malloc(size * sizeof(char));
		if (str)
		{
			str[0] = c;
		return (str);
		}
		else
		return (str);
	}

	else
		return (NULL);


}
