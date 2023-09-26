#include "main.h"

/**
 * _memcpy - copy memory
 * @dest: memory where stored
 * @src: memory where copied
 * *@n: input value
 *
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
