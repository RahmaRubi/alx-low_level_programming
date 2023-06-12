#include <stdio.h>
#include <string.h>
/**
 * main - a function prints the arguments one by one following by a line
 * @argc: counter paramter
 * @argv: array of arguments
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);

}
return (0);

}
