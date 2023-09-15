#include "main.h"

/**
 * _isdigit - checks for digit
 * @C: function parameter
 *
 * Return: 1 or 0
 */

int _isdigit(int C)
{
	if (C >= 48 && C <= 57)
		return (1);
	else
		return (0);
}
