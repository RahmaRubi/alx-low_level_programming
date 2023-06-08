#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>

/**
 * _puts_recursion - print string
 * @s: f input
 *
 * Return: none
 */

void _puts_recursion(char *s)
{
if (*s)
{
putchar(*s);
_puts_recursion(s + 1);
}
else
{
putchar('\n');
return;
}

}
