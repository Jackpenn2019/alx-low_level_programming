#include "main.h"

/**
 * _strdup - returns pointer to newly allocated
 * space in memory
 * @str: pointer to received string
 *
 * Return: pointer to copy of string
 */

char *_strdup(char *str)
{
	char *ptr;
	int len = 0;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	while ((ptr[i] = str[i]) != '\0')
		i++;

	return (ptr);
}

