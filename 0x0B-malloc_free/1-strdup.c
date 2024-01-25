#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _strdup - duplicated string
 * @str: first paramter
 * Return: pointer or null
 */

char *_strdup(char *str)
{
	if (str)
	{
		char *p;

		p = malloc(strlen(str) + 1);
				if (p)
				{
					p = str;

					return (p);
				}
				else
					return (NULL);

	}
	else
	return (NULL);

}
