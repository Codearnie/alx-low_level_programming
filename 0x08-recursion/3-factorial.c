#include "main.h"
/**
  * factorial - prints the factorial of a num
  * @n: function parameter
  * Return: Function n.
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
