#include "main.h"

/**
 * _strspn - function that get length
 * @s: input parameter
 * @accept: bytes accepted
 *
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int a;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		a = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				a = 0;
				break;
			}
		}
		if (a == 1)
			break;
	}
	return (i);
}
