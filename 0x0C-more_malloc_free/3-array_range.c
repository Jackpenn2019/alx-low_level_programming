#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: minimum range
 * @max: maximum range
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;
	int j = min;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * ((max - min) + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= (max + 1); i++, j++)
		ptr[i] = j;

	return (ptr);
}
         

