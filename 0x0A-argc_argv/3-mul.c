#include <stdio.h>
#include <stdlib.h>
/**
* main - multypliing function
* @argc: counter argument
* @argv: array of argument
* Return: returns 0
*/

int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n",  x * y);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
