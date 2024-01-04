#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: the pointer
 * Return: n (Success)
 */

char *string_toupper(char *n)
{
	int x = 0;

	while (n[x] != '\0')
	{
		if (n[x] >= 'a' && n[x] <= 'z')
		{
			n[x] = n[x] - 32;
		}
		x++;
	}
	return (n);
}
