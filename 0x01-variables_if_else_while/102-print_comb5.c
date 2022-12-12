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

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 8; i++)
		{	
			for (i = 0; i <= 9; i++)
			{	
				for (k = i + 1; k <= 9; k++)
				{
					if (i == 9 && j == 8)
						break;

					if (i == 9 && k == 9)
						break;
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(i + '0');
						putchar(k + '0');
					}
				}
				if (!(i == 9 && j == 8 && k == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
