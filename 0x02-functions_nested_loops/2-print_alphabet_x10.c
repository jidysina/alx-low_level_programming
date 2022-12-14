#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: (0) successful
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char s;

	for (count = 0; count <= 9; count++)
	{
		for (s = 'a'; s <= 'z'; s++)
		_putchar(s);
	_putchar('\n');
	}
}
