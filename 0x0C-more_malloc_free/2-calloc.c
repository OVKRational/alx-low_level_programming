#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area
 * @b: char copy
 * @n: number of time to copy b
 *
 * Return: memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of element in array
 * @size: size of each element
 *
 * Return: allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
