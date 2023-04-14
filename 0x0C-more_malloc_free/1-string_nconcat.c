#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - reurn sum of two string
 * @s1: 1 input
 * @s2: 2 input
 * @n: 3 input
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *x;
unsigned int i, w;
i = strlen(s1);

w = strlen(s2);

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
if (w >= n)
w = n;
x = malloc(i + n + 1);
if (x == NULL)
	{
		return (NULL);
	}
	memcpy(x, s1, i);
	memcpy(x + i, s2, n);
	*(x + i + n) = '\0';
	return (x);
}

