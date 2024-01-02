#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that generates random valid passwords
 * Return: 0 (Success)
 */

int main(void)
{
	char c;
	int sum = 0;

	srand(time(NULL));
	
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);

	return (0);
}
