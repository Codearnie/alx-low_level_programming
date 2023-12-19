#include "main.h"
/**
 * _isalpha - Checking alphabet characters
 * @c: The character being checked
 * Return: 1 for alphabetic char or 0 for any other result
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
