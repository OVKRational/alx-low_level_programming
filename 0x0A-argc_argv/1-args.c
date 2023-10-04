#include "main.h"
#include <stdio.h>

/**
 * main - print the number
 * @argc: input
 * @argv: input
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
