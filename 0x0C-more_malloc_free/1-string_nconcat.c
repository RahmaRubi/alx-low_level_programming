#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* string_nconcat - concat function
* @s1: first
* @s2: second
* @n: number of letters concatnated
* Return: pointer or null
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	 char *p;
	unsigned int i, x, a;

	x = 1;
	if (s1 != NULL)
		x += strlen(s1);
	if (s2 != NULL)
		x += (n > strlen(s2) ? strlen(s2) : n);
	if (s2)
		a = (n > strlen(s2) ? strlen(s2) : n);
	p = malloc(x);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1 && i < strlen(s1); i++)
			p[i] = s1[i];
		if (s1 != NULL)
			x = strlen(s1);
		else
			x = 0;
		for (; s2 && i - x < a; i++)
			p[i] = s2[i - x];
		p[i] = '\0';
		return (p);
	}
}
