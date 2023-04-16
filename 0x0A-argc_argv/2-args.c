#include <stdio.h>
#include <stdli.h>
#include "main.h"
/**
 * main - main function
 * @argc: count arguments
 * @argv: arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
int i;
i = 0;

for ( i =0; i<argc; i++)
printf("%s\n", argv[i]);
return (0);


}
