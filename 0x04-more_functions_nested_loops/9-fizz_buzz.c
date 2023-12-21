#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of fizzbuzz code
 * Fizz for multiples of 3, Buzz for multiples of 5
 * Return: 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 15 == 0)
			printf("FizzBuzz");
		else if (x % 3 == 0)
			printf("Fizz");
		else if (x % 5 == 0)
			printf("Buzz");
		else
			printf("%i", x);
		if (x < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
