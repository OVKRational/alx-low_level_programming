#include "main.h"

/**
 * _atoi - program that code string to integer
 * @s: input parameter
 *
 * Return: 0
 */

int _atoi(char *s)
{
	unsigned int num = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + num) != '\0')
	{
		if (size > 0 && (*(s + num) < '0' || *(s + num) > '9'))
			break;
		if (*(s + num) == '-')
			pn *= -1;

		if ((*(s + num) >= '0') && (*(s + num) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		num++;
	}
	for (i = num - size; i < num; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}
