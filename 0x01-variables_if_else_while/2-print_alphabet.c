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
putchar(intial);
}
putchar('\n');
return (0);
}

