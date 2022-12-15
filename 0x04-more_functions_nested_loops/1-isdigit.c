#include "main.h"

/**
 * _isdigit - to check for a digit
 * @c: integer input
 * Return: (1) if successful, otherwise (0)
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
