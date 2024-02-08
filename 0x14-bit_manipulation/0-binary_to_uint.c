#include "main.h"
/**
 * binary_to_uint - conversion from binary numb to unsigned int
 * @b: string with binary numb
 * Return: converted bin numb
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int deci = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		deci = 2 * deci + (b[i] - '0');
	}
	return (deci);
}
