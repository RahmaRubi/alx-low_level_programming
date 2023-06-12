#include<stdio.h>
#include<string.h>

int main (int argc, char *argv[])
{
	if(argc)
	{
	printf("%d\n", argc - 1);
	(void)argv;
	}

	return(0);
}

