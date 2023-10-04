#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: input
 * @argv: input
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
