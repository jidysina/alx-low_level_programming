#include "main.h"

/**
 * print_diagonal - draws diagonal lines on the terminal
 * @n: number of times to print diagonal line
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i;
	int s;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (s = 0; s < i; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else if (n <= 0)
		_putchar('\n');
}

