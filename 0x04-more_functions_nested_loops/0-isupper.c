#include "main.h"
/**
 * _isupper - Checks for lowercase characters
 * @c: The character being checked
 * Return: 1 for uppercase char or 0 for anything else
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
		return (0);
}
