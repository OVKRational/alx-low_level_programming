#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocate memory using malloc
 * @b: input sign of memory
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
