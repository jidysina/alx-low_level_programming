#include <stdio.h>
/**
 * main - entry point
 *Return: always (0) successful
 */
int main(void)
{
	int i = 0;
	int x;

	while (i < 10)
		i++;
	putchar('0' + i);
	for (x = i + 1; x < 10; x++)
		putchar('0' + x);
			putchar(',');
			putchar(' ');
				putchar('\n');
	return (0);
}
