#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big end, 1 if little end
 */
int get_endianness(void)
{
	unsigned int j;
	char *a;

	j = 1;
	a = (char *) &j;

	return ((int)*a);
}
