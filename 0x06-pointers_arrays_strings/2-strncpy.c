#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: an input value
 * @src: an input value
 * @n: an input value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
