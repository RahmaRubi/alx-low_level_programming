#include <stdio.h>
int main(int argc, char *argv)
{
int i, x, sum;
sum = 0;
for (i = 0; i < argc; i++)
{
	x = 0;
	x = atoi(argv[i]);
	sum+=x;

}
printf("%d/n", sum);
return (0);
}
