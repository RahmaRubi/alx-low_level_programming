#include "main.h"
#include <stdlib>
#include <stdio>
#include <string.h>

/**
 * _puts_recursion(char *s) - print function 
 * @s: the function's paramter 
 * return: nothing 
 */

void _puts_recursion(char *s)
{
if (*s)
{
putchar(*s);
_puts_recursion(s+1);
}
else
{
putchar('\n');
return;
}

}
