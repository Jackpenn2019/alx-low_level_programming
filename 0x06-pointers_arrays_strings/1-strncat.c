#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;

	int dest_len = strlen(dest);

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[dest_len + x] = src[x];
	}

	dest[dest_len + x] = '\0';

	return (dest);
}
