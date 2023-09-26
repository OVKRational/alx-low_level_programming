#include "main.h"

/**
 * _strpbrk - entry point
 * @s: input value
 * @accept: input value
 *
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (0);
		}
	s++;
	}
	return ('\0');
}
