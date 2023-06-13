#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* str_concat - concat function
* @s1: first
* @s2: second
* Return: pointer or null
*/

char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int i, x;

	x = 1;
	if (s1 != NULL)
		x += strlen(s1);
	if (s2 != NULL)
		x += strlen(s2);
	p = malloc(x);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < strlen(s1); i++)
			p[i] = s1[i];
		if (s1 != NULL)
		x = strlen(s1);
		else
			x = 0;
		for (;  s2 && i - x < strlen(s2); i++)
			p[i] = s2[i - x];
		p[i] = '\0';
		return (p);
	}



}
