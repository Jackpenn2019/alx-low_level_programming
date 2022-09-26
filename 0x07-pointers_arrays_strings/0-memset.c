#include "main.h"

/**
 * _memset: fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @s: input parameter 1
 * @b: input parameter 2
 * @n: input parameter 3
 *
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	for (x = 0; x < n; x++)
	{
		*(s + x) = b;
	}
	return (s);
}
