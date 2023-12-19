#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @c: The number being computed
 * Return: Absolute value of the number or 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		int absoluteVal;

		absoluteVal = c * -1;
		return (absoluteVal);
	}
	return (c);
}
