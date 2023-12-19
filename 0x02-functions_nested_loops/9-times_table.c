#include "main.h"
/**
 * times_table - Prints out the 9 times table from 0
 * Return: empty
 */

void times_table(void)
{
	int a;
	int b;
	int c;
	int x;
	int y;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 9 ; b++)
		{
			c = a * b;
			if (c > 9)
			{
				x = c % 10;
				y = (c - x) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(y + '0');
				_putchar(x + '0');
			}
			else
			{
				if (b != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(c + '0');
			}
		}
		_putchar('\n');
	}
}
