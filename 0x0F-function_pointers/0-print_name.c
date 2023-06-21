#include "function_pointers.h"
/**
 * print_name - function with callback
 * @name: first parameter which is pointer
 * @f: paramter function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
if (name!=NULL)
	f(name);
}
