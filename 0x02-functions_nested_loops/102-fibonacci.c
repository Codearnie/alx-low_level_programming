#include <stdio.h>
/**
 * main -Prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0 (Success)
 */

int main(void)
{
	long int i, j, k, ch;

	j = 1;
	k = 2;
	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		} else
		{
			printf("%ld\n", j);
		}
		ch = j + k;
		j = k;
		k = ch;
	}
	return (0);
}
