#include "main.h"
/**
 * _isdigit - Checks for a digit
 * @c: The character being checked
 * Return: 1 if c is digit or 0 for anything else
 */

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	else
		return (0);
}
