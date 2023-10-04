#include "main.h"

/**
 * _puts - function that print a string, followed by new line
 * @str: input string
 *
 * Return: void
 */

void _puts(char *str)
{
	int j = 0;

	while (str[j])
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
