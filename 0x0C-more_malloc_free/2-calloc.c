#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _calloc - function for creation array of char
* @nmemb: number of elements
* @size: intial charcter the pointer points to it
* Return: return pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	if (size && nmemb)
	{
		char *str;

		str = malloc(size * nmemb);
		if (str)
		{
			for (i = 0; i < size * nmemb; i++)
			str[i] = 0;
			return (str);
		}
		else
			return (NULL);
	}
	return (NULL);
}
