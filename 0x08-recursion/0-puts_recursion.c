#include "main.h"
#include <stdio.h>
/*
 * _puts_recursion(char *s)
 * @s: dereferncing
 * Return: nothing
 */
void _puts_recursion(char *s)
{
if (*s == '\n')
{
	_putchar('\n');
	return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}


