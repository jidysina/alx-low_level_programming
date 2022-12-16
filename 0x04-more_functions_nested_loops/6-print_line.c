#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of times to print the line
 * Return: Always 0.
 */

void print_line(int n)
{
	int j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else if (n <= 0)
		_putchar('\n');
}
