#include "main.h"
/**
 * _strpbrk - observes a string for any of a set of bytes
 * @s: string to be observed
 * @accept: set of bytes to be observed for
 * Return: pointer to the matched byte if found or else NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
