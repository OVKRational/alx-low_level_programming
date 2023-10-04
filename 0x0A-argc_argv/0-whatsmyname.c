#include "main.h"
#include <stdio.h>

/**
 * main - print the nam of the program
 * @argc: number input
 * @argv: input
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
