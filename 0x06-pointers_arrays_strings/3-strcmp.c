#include "main.h"
#include <string.h>

/**
 * _strcmp - a function that compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: returnes an integer value according to the comparison
 */

int _strcmp(char *s1, char *s2)
{
	int i, c;

	c = 0, i = 0;

	if (s1[i] != s2[2])
	return (s1[i] - s2[i]);
	else
	{
	if (strlen(s1) == strlen(s2))
		{

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			c++;
	}
	if (c == strlen(s1))
		return (0);

	}
}}
