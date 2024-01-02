#include "main.h"
/**
 * *_strcpy - a function that copies the string pointed to by src
 * @dest: char type of string to copy to
 * @src: Char type of string to copy from
 * Return: pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
