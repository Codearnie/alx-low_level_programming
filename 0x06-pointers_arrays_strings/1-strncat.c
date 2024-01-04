#include "main.h"
/**
 * _strncat - a function that concatenate two strings
 * at most, using n bytes from src
 * @dest: an input value
 * @src: an input value
 * @n: an input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (dest[x] != '\0')
		x++;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
