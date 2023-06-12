#include<stdio.h>
#include<string.h>

/**
 * main - the main function, mystro one
 * @argc: counter arogumenter
 * @argv: array of arguments
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	if (argc)
	{
	printf("%d\n", argc - 1);
	(void)argv;
	}

	return (0);
}

