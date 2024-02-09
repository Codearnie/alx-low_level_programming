#include "main.h"
/**
 * get_endianness - does a check if a machine is little or big endian
 * Return: if big then 0, else 1 if little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) & i;

	return (*c);
}
