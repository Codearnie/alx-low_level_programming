#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: input string
 * Return: 0 (Success)
 */

void puts_half(char *str)
{
	int i, j, res = 0;

	for (i = 0; str[i] != '\0'; i++)
		res++;

	j = (res / 2);

	if ((res % 2) == 1)
		j = ((res + 1) / 2);

	for (i = j; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}

