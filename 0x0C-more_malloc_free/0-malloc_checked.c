#include "main.h"

/**
 * malloc_checked - function that allocate memory using malloc
 * @b: input sign of memory
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
