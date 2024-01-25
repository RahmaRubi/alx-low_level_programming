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
					int i;
					for ( i = 0; i < strlen(str); i++)
					{
						*(p + i) = *(str + i);
					}

					return (p);
				}
				else
					return (NULL);

	}
	else
	return (NULL);

}
