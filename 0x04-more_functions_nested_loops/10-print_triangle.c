#include "main.h"
/**
 * print_triangle - Prints out a triangle
 * @size: The size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int line, space, x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 1; line <= size; line++)
		{
			for (x = size - line; x >= 1; x--)
			{
				_putchar(' ');
			}
			for (space = 1; space <= line; space++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
