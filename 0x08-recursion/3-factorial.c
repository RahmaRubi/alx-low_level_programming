#include<stdio.h>
#include"main.h"

/*
 * factorial - a recursive function getting the factorial
 * @n: paramter
 * Return: 0 or -1 or the final factorial
 */

int factorial(int n)
{
if (n < 0)
	return (-1);
else if (n == 0)
	return (1);
else
	return ((n) * factorial(n - 1));
}
