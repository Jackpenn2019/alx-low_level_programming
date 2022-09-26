#include "main.h"

/**
 * _memcpy - copies n bytes from memory
 * area src to memory area dest
 * @dest: to memory area
 * @src: from memory area
 * @n: number of bytes to copy
 *
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n--)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
