#include "main.h"
/**
 * _strlen - a function returning the length of a string
 * @s: string
 * Return: 0 (Success)
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
	{
		length++;
	}
	return (length);
}
