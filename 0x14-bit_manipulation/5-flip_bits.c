#include "main.h"
/**
 * flip_bits - counts the numb of bits to alter to get from one numb ti another
 * @n: First numb.
 * @m: Second numb.
 * Return: numb of bits to alter
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, c = 0;
	unsigned long int tem;
	unsigned long int j = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		tem = j >> i;
		if (tem & 1)
			c++;
	}
	return (c);
}
