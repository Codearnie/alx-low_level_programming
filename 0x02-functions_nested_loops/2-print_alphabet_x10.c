#include "main.h"

/**
 * print_alphabet_x10 - A function that prints the alphabet x10
 * Return: void
 */

void print_alphabet_x10(void)
{
	char al;
	int n;

	n = 0;
	while (n < 10)
	{
		for (al = 'a' ; al <= 'z' ; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
		n++;
	}
}
