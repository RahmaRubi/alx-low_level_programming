#include "main.h"
#include <string.h>
/**
 * _strncat - a function used to append a string to another one
 * @dest: the first string we want to append src to
 * @src: the second string we would append
 * @n: number of letters appended
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	len = strlen(dest);

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[len + i] = src[i];

	}
	dest[len + i] = '\0';
	return (dest);

}
