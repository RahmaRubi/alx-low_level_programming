#include<stdio.h>
#include"main.h"

/**
* _strlen_recursion - a function getting the length of a string
* _strlen_recursion
* @s: string variable
* Return: return 0
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
	return (0);
{
return (1 + _strlen_recursion(s + 1));
}


}
