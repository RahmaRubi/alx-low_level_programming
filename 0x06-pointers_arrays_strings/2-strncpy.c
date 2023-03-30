#include "main.h"
#include <string.h>
/**
 * _strncpy - a function used to append a string to another one
 * @dest: the first string we want to append src to
 * @src: the second string we would append
 * @n: intger variable
 * Return: returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;


	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];

	}
	dest[i] = '\0';
	return (dest);

}
