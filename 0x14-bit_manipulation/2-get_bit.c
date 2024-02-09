#include "main.h"
/**
 * get_bit - returns value of a bit at an index as a decimal numb
 * @n: numb to observe
 * @index: bit index
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;
	return (val);
}
