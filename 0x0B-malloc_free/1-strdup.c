#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* _strdup - array
* @str: string
*
* Return: char
*/
char *_strdup(char *str)
{
	char *x;
	unsigned int i;
	unsigned int size;

	if (str == NULL)
		return (NULL);

	size = strlen(str);
		x = malloc(size * sizeof(*str) + 1);
		if (x == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; *(str + i); i++)
			{
				*(x + i) = *(str + i);
			}
		}
		return (x);
}
