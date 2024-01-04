#include "main.h"
/**
 * reverse_array - a function that reverses array contents
 * @a: the array
 * @n: num of elements in array
 * Return: (void)
 */

void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
