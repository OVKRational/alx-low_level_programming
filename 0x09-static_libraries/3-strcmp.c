#include "main.h"

/**
 * _strcmp - function that compare strings
 * @s1: input string 1
 * @s2: input string 2
 *
 * Return: 1 or 0
 */

int _strcmp(char *s1, char *s2)
{
	int j = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + j) == '\0') && (*(s2 + j) == '\0'))
			break;
		op = *(s1 + j) - *(s2 + j);
		j++;
	}
	return (op);
}
