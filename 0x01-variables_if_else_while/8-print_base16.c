#include <stdio.h>
/**
 * main - A program that prints base16 numbers
 * Return: 0 (Success)
 */
int main(void)
{
	char i;
	int x;

	for (x = 0 ; x < 10 ; x++)
		putchar(x + '0');
	for (i = 'a' ; i <= 'f' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
