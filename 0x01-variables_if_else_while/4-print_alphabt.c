#include <stdio.h>
/**
 * main - entry point
 * Return: always (0) successful
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'e' && ch != 'q')
		putchar(ch);
			putchar('\n');
	return (0);
}
