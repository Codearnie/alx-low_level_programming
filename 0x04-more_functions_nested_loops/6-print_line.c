#include "main.h"
/**
 * print_line - Prints a straight line
 * @n: The number of lines
 * Return: 0 (Success)
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
