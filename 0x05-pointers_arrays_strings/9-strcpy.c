#include "main.h"

/**
 * *_strcpy - copy stringat the end of another string including \0
 * @dest: pointer 1
 * @src: pointer 2
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
