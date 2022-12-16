#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of times to print the line
 * Return: Always 0.
 */

void print_line(int n)
{
	int j = 0;

	if (n > 0)
	{
		while (j <= n)
		{
			_putchar('_');
			j++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
