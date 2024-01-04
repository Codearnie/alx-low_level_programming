#include "main.h"
/**
 * _strcmp - a function that compares two string values
 * @s1: an input value
 * @s2: an input value
 * Return: 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}
	return (0);
}
