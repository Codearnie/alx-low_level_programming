#include "main.h"
/**
 * print_times_table - Prints the n times table from the input
 * @n: The value of the times table to be computed
 */

void print_times_table(int n)
{
	int num, t, res;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (t = 1; t <= n; t++)
			{
				_putchar(',');
				_putchar(' ');
				res = num * t;
				if (res <= 99)
					_putchar(' ');
				if (res <= 9)
					_putchar(' ');
				if (res >= 100)
				{
					_putchar((res / 100) + '0');
					_putchar(((res / 10)) % 10 + '0');
				}
				else if (res <= 99 && res >= 10)
				{
					_putchar((res / 10) + '0');
				}
				_putchar((res % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
