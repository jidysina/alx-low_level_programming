#include <stdio.h>
/**
 * main - entry point
 * Return: always (0) successful
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = i + 2; k <= 9; k++)
			{
				if (i != j && j == k)
					continue;
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
				}
				if (!(i == 7 && j == 8 && k == 9))
				{						
					putchar(',');
					putchar(' ');
				}
			if (i == 7 && j == 8 && k == 9)
				break;
			}
		}
	}
	putchar('\n');
	return (0);
}
