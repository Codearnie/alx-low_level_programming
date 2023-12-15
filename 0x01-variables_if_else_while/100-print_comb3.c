#include <stdio.h>
/**
 * main - A program that prints different number combinations
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int x;

	for (i = '0' ; i < '9' ; i++)
	{
		for (x = i + 1 ; x <= '9' ; x++)
		{
			if (x != i)
			{
				putchar(i);
				putchar(x);
				if (i == '8' && x == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
