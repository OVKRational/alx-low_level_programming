#include "mainn.h"

/**
 * print_numbers - prints number from 0 to 1
 *
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i < 9 ; i++)
		_putchar(i + '0');
	_putchar('\n');
}
