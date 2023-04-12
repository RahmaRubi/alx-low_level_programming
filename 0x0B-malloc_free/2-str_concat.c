#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* str_concat - array
* @s1: string
* @s2: string
*
* Return: char
*/
char *str_concat(char *s1, char *s2)
{
	char *x;
	unsigned int i;
	unsigned int size1;
	unsigned int size2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = strlen(s1);
	size2 = strlen(s2);
		x = malloc((size1 + size2) * sizeof(char) + 1);
		if (x == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size1; i++)
			{
				*(x + i) = *(s1 + i);
			}
			for (i = 0; i < size2; i++)
			{
				*(x + i + size1) = *(s2 + i);
			}
		}
		return (x);
}

