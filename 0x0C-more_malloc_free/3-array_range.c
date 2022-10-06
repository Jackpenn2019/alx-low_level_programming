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
	int *ptr;
	int i, len;

	if (min > max)
		return (NULL);

	for (len = 0; len < (max - min); len++);

	ptr = malloc(sizeof(int) * (len + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		ptr[i] = min++;
	}

	return (ptr);
}


















         

