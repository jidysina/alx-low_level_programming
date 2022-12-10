#include <stdio.h>
/**
 * main - entry point
 * Return: always (0) successful
 */
int main(void)
{
	int i;
	int ch;

	for (i = 0; i <= 9; i++)
		putchar('0' + i);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
			putchar('\n');
	return (0);
}
