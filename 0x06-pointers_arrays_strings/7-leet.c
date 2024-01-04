#include "main.h"
/**
 * leet - a function that encodes string to 1337
 * @n: an input value
 * Return: n (Success)
 */

char *leet(char *n)
{
	int x, y;
	char res[] = "aAeEoOtTlL";
	char res2[] = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (n[x] == res[y])
				n[x] = res2[y];
		}
	}
	return (n);
}
