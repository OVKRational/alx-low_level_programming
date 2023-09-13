#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'Z' ; i++)
		-putchar(i);
	_putchar('\n');
}
