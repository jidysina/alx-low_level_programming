#include <stdio.h>
/**
 * main - entry point
 *Return: always (0) successful
 */
int main(void)
{
	int i;
	int j = (',');
	int k = (' ');

	for (i = 0; i <= 9; i++)
		putchar((i % 10) + '0');
	if (i == 9)
		putchar(j);
			putchar(k);
			putchar('\n');
	return (0);
}
