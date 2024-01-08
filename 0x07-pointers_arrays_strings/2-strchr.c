#include "main.h"
/**
 * _strchr - function to locate char in string
 * @s: string to be observed
 * @c: char to be located
 * Return: pointer to the occurence if found or else NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
