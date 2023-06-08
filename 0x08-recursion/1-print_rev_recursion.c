#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _print_rev_recursion - print rev
 * @s: f input
 *
 * Return: none
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
