#include "main.h"
/**
 * print_diagonal - Prints a diagonal line
 * @n: The number of lines
 * Return: 0 (Success)
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
