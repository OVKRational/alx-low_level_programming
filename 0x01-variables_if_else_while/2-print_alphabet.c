#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0(success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter);

	putchar(letter);

	putchar('\n');

	return (0);
}
