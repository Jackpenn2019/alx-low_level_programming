#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: character for initialization
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}

