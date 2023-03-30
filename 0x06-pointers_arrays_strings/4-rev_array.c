#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - a function for reversing an array
 * @a: array to be reversed 
 * @n: number of elements in the array 
 * Return: nothing just using printf or putchar
 */
void reverse_array(int *a, int n)
{
int i;

for (i = n-1; i>=0 ;i--)
printf("%d ", a[i]);



}

