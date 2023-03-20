#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int intial;
for (intial = 'a' ; intial < 'z' + 1 ; intial++)
{
if ((intial == 'e') || (intial == 'q'))
{
continue;
}
else
putchar(intial);
}
putchar('\n');
return (0);
}
