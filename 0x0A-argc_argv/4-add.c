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
printf("0 \n");
else
{
int sum;
int i;

sum = 0;

i = 1;


for (i = 1; i < argc; i++)
{
int a;

a = atoi(argv[i]);
sum+= a;

}

printf("%d\n", sum);
}
return (0);


}
