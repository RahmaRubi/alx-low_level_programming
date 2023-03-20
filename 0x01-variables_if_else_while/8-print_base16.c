#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int intial;
int letter;
for (intial = '0' ; intial <= '9' ; intial++)

putchar(intial);


for (letter = 'a' ; letter < 'f' + 1 ; letter++)
putchar(letter);

putchar('\n');
return (0);
}

