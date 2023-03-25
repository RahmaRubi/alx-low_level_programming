#include "main.h"
/**
 * more_numbers - print from 0 to 9
 * Return: nothing
 */
void more_numbers(void)
{
	int i;
	int j;
	int a;

for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 14; j++)
	{        a = j;
		if (j > 9)
		{
			_putchar('1');
			a = a % 10;
		}
		_putchar(a + '0');
	}

_putchar('\n');
}
}
