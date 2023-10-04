#include "main.h"

/**
 * _strlen - checks length of a string
 * @s: input
 *
 * Return: length
 */

int _strlen(char *s)
{
	int num = 0;

	while (*(s + num) != '\0')
		num++;
	return (num);
}
