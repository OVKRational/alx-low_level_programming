#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that duplicate to use space
 * @str: input
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *ovk;
	int j, r = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;
	ovk = malloc(sizeof(char) * (j + 1));

	if (ovk == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		ovk[r] = str[r];
	return (ovk);
}
