#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that create array
 * @size: input size
 * @c: input char
 *
 * Description: creat array of size and asign char c
 * Return: 0 or 1
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int j;

	str - malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		str[j] = c;
	return (str);
}
