#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Return: (0) successful
 */
int main(void)
{
	char s[] = "_putchar";
	int i = 0;

	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
