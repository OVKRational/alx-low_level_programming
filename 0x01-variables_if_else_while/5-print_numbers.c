#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print numbers
 *
 * Return: Always 0(success)
 */

int main(void)
{
	char num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	putchar('\n');

	return (0);
}
