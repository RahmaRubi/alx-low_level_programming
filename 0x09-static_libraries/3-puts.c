#include "main.h"
#include <stdio.h>

/**
 * _puts - print string
 * @str: input string
 *
 * Return: none
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
