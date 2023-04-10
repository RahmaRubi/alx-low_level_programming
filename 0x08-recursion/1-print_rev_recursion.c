#include "main.h"
#include <stdio.h>

/*
 *
 * _print_rev_recursion - prints a reversed string
 *
 * @s: dereferncing
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
s++;
_print_rev_recursion(s);
_putchar(*s);

}


