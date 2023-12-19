#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to be treated
 * Return: The value of the last digit of number
 */

int print_last_digit(int n)
{
	int pld;

	pld = n % 10;
	if (pld < 0)
	{
		pld = pld * -1;
	}
	_putchar(pld + '0');
	return (pld);
}
