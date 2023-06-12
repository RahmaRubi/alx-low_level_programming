#include <stdio.h>
/**
 * main - function that prints it's name
 * @argc: argument that counts the number of arguments
 * @argv: argument that stores arguments in an array of char
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);


}
