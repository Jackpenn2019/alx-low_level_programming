#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: input parameter 1
 * @size: size of memory
 *
 * Return: pointer of memory location
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (sizeof(int) * size); i++)
		ptr[i] = 0;

	return (ptr);
}
