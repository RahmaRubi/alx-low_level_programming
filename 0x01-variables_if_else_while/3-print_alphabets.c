#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int intial;
int second;
for (intial = 'a'; intial < 'z' + 1; intial++)

putchar(intial);

for (second = 'A'; second < 'Z' + 1; second++)

putchar(second);

putchar('\n');
return (0);
}
