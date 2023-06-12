#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char *argv[])
{

int i, j, x, sum;

sum = 0;
for (i = 1; i < argc; i++)
{
	j = 0;
	while(argv[i][j])
	{
		if (!isdigit(argv[i][j]))
		{
			printf("Error\n");
			return (1);
		}
		j++;
	}
	x = atoi(argv[i]);
	sum += x;

}
printf("%d\n", sum);
return (0);
}
