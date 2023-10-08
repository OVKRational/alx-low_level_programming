#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates n bytes of a string to another
 * @s1: string input
 * @s2: string input to concatenate
 * @n: number of bytes from s1 to s2
 *
 * Return: pointer to the string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, ovkl = 0, ovk2 = 0;

	while (s1 && s1[ovk1])
		ovk1++;
	while (s2 && s2[ovk2])
		ovk2++;

	if (n < ovk2)
		s = malloc(sizeof(char) * (ovk1 + n + 1));
	else
		s = malloc(sizeof(char) * (ovk1 + ovk2 + 1));

	if (!s)
		return (NULL);

	while (i < ovk1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < ovk2 && i < (ovk1 + n))
		s[i++] = s2[j++];

	while (n >= ovk2 && i < (ovk1 + ovk2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
