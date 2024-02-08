#include "main.h"
/** 
 * set_bit - sets a bit at a perculier index to 1
 * @n: pinter to numb to change
 * @index: index of the bit to be changed to 1
 * Return: 1 Success, else -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
