#include <stdio.h>
/**
 * main - A program that prints the combination of three digits
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0' ; a < '9' ; a++)
	{
		for (b = a + 1 ; b <= '9' ; b++)
		{
			for (c = b + 1 ; c <= '9' ; c++)
			{
				if ((b != c) != a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a == '7' && b == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
