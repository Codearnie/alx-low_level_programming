#include "main.h"
/**
 * clear_bit - sets bit value to 0
 * @n: pointer to the numb to change
 * @index: index of bit to clear
 * Return: 1 Success, else -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
