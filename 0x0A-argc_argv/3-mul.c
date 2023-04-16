#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - main function
 * @argc: count arguments
 * @argv: arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
(void) argc;

if (argv[1] == NULL || argv[2] == NULL)
printf("Error\n");
else
{
int a;

int b;
a = atoi(argv[1]);

b = atoi(argv[2]);

printf("%d\n", a *b);
}
return (0);


}
