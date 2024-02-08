#include "main.h"
/**
 * print_binary - prints out binary equivalent of a decimal numb
 * @n: the numb to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, sum = 0;
	unsigned long int tem;

	for (i = 63; i >= 0; i--)
	{
		tem = n >> i;
		if (tem & 1)
		{
			_putchar('1');
			sum++;
		}
		else if (sum)
			_putchar('0');
	}
	if (!sum)
		_putchar('0');
}
