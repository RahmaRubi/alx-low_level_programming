#include "main.h"
#include <stdlib.h>
/**
 * malloc checked - a function exit 98 if fails and a pointer if succeded
 * @b: unsigned paramter
 * Return: apointer in success
 */



void *malloc_checked(unsigned int b)
{
int *x;
x = malloc(b);
if (x == NULL)
exit(98);
else
return (x);


}
