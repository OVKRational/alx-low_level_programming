#include "main.h"

/**
 * _strpbrk - function that search for a string
 * @s: input 1
 * @accept: input 2
 *
 * Return: 0 or 1
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + 1) == *(accept + j))
				return (s + 1);
		}
	}
	return ('\0');
}
