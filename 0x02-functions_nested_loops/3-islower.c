#include "main.h"
/**
 * _islower - check if alphabet is lowercase
 * @c: input character
 * Return: (1) if successful, else, (0)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
