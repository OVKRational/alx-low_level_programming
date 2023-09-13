#include "main.h"

/**
 * _abs - print the absolute vale of integer
 * @c: the number to be computed
 *
 * Return: 1 or 0
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
