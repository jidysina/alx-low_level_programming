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

	for (count = 0; count <= 9; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
	_putchar('\n');
	}
}
