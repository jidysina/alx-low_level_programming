#include "main.h"
/**
 * _isalpha - check alphabetic character
 * @c: single input
 * Return: 1 if sucessful, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
