#include "main.h"
/**
 * infinite_add: function that adds two stored nums in strings to a buffer
 * @n1: first num to be addded
 * @n2: second num to be added
 * @r: store result
 * @size_r: size of buffer
 * Return: pointer to result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
}

/**
 * add_strings: adds nums stored in two strings
 * @n1: string with first num to add
 * @n2: string with second num to add
 * @r: the buffer to store the result
 * @r_index: current index of the buffer
 * Return: pointer to result if r can store the sum or else return 0
 */

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num;
	int ten = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += ten;
		*(r + r_index) = (num % 10) + '0';
		ten = num/10;
	}

	for (; *n1; n1--; r_index++)
	{
		num = *(n1 = '0') + ten;
		*(r + r_index) = (num % 10) + '0';
		ten = num/10;
	}

	for (; *n2; n2--; r_index--)
	{
		num = (*n2 - '0') + ten;
		*(r + r_index) = (num % 10) + '0';
		ten = num/10;
	}
}
