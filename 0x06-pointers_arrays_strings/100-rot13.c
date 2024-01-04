#include "main.h"
#include <stdio.h>
/**
 * rot13 - a function that encodes a string using rot13
 * @s: string pointer
 * Return: *s (Success)
 */

char *rot13(char *s)
{
	int x, y;
	char res[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char resrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[x] == res[y])
			{
				s[x] = resrot[y];
				break;
			}
		}
	}
	return (s);
}
