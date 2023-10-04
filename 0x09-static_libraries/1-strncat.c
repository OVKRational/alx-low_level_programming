#include "main.h"

/**
 * _strncat - program to code two strings
 * @dest: input destination
 * @src: input source
 * @n: input byte
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int num1 = 0;
	int num2 = 0;

	while (*(dest + num1) != '\0')
	{
		num1++;
	}

	while (num2 < n)
	{
		*(dest + num1) = *(src + num2);
		if (*(src + num2) == '\0')
			break;
		num1++;
		num2++;
	}
	return (dest);
}
