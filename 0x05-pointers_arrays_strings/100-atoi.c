#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be computed *
 * Return: computed integar
 */

int _atoi(char *s)
{
	int i = 0, j = 0, n = 0, m = 0, len = 0, num = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && m == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (j % 2)
				num = -num;
			n = n * 10 + num;
			m = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			m = 0;
		}
		i++;
	}

	if (m == 0)
		return (0);

	return (n);
}
