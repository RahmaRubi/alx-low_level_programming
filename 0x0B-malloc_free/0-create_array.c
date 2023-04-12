#include<stdlib.h>
#include"main.h"
/**
 * create_array - a function uses the
 * dynmic memory allocation to store some array
 * @size: first paramter
 * @c: second paaramter
 * Return: a ponter of array of char
 */

char *create_array(unsigned int size, char c)
{

char *str;
unsigned int i;
str = malloc((sizeof(char) * size));
if (size == 0 || str == NULL)
return (NULL);
else
for (i = 0; i < size; i++)
{
str[i] = c;

}
return (str);



}
