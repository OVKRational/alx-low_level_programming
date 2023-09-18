#include "main.h"

/**
 * swap_int - swaps value of two ints
 * @a: pointer 1
 * @b: pointer 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
