#include <stdio.h>
/**
 * main - entry point of function
 * Return: always (0) successful
 */
int main(void)
{
	int cha;
	int ch;

	for (cha = 'a'; cha <= 'z'; cha++)
		putchar(cha);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
			putchar('\n');
	return (0);
}
