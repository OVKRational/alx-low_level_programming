#include "main.h"

/**
 * _memset - program fills with constant byte
 * @s: starting memory area
 * @b: bytes
 * @n: filled bytes
 *
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		*(s + j) = b;

	return (s);
}
