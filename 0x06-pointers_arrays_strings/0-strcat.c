#include "main.h"
#include <string.h>
/**
 * _strcat - a function used to append a string to another one
 * @dest: the first string we want to append src to
 * @src: the second string we would append
 * Return: returns dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j, len;

	len = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];

	}
	dest[len + i] = '\0';
	return (dest);

}
