#include <stdio.h>
/**
 * main - prints mun of arguments passed into it
 * @argc: argument count
 * @argv: argument
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
