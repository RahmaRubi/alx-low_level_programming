#include "main.h"

/**
 * _strncpy - copy spacific number of string
 * @dest: first input
 * @src: 2ed input
 * @n: 3th input
 *
 * Return: char type
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; *(src + i) != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
	{
		*(dest + j) = *(src + j);
		if (j < n && j > i)
		{
			*(dest + j) = '\0';
		}
	}
	return (dest);
}
