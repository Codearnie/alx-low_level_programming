#include "main.h"
/**
 * puts2 - a function that prints only one character of two
 * @str: pointer to string
 * Return: 0 (Success)
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
