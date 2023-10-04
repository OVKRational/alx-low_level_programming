#include "main.h"

/**
 * _strchr - function to locate a character in a string
 * @s: input string
 * @c: input character
 *
 * Return: 1
 */

char *_strchr(char *s, char c)
{
	unsigned int j = 0;

	for (; *(s + j) != '\0'; j++)
		if (*(s + j) == c)
			return (s + j);
	if (*(s + j) == c)
		return (s + j);
	return ('\0');
}
