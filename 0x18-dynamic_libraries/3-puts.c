#include "main.h"
#include <stdio.h>
/**
 * _puts - Entry point to check for puts
 * @str: parameter to input
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
