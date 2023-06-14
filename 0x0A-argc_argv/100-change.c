#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - coins number
 * @argc: counter paramter
 * @argv: array of pointer
 * Return: returns 1 or zero
 */

int main(int argc, char *argv[])
{
int x, c, i;
int y[5] = {25, 10, 5, 2, 1};

c = 0;
if (argc != 2)
{
	printf("Error\n");
	return (1);
}
else
{
	x = atoi(argv[1]);
	if (x > 0)
	{
		for (i = 0; i < 5; i++)
		{
			c += x / y[i];
			x = x % y[i];
		}
		printf("%d\n", c);
	}

	else
		printf("0\n");


}
return (0);
}
