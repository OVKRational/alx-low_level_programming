#include "main.h"

/**
 * _strcpy - function that copy string
 * including the terminating null byte, to the
 * buffer dest
 * @dest: input destination
 * @src: input source
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int num = 0;

	while (num >= 0)
	{
		*(dest + num) = *(src + num);
		if (*(src + num) == '\0')
			break;
		num++;
	}
	return (dest);
}
