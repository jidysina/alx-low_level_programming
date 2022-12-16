#include "main.h"

/**
 * more_numbers - prints 0 t0 14 10x
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int count;
	int i;
	long int j;

	for (count = 0; count <= 9; count++)
	{
		for (i = 0; i <= 9; i++)
		{
			_putchar(i + '0');
		}
		for (j = 10; j <= 14; j++)
		{
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
	_putchar('\n');
	}
}
