#include "main.h"

/**
 * _strdup - returns pointer to newly allocated
 * space in memory
 * @str: pointer to received string
 */

char *_strdup(char *str)
{
	char *ptr;
	int len = strlen(str);
	int i;

	ptr = malloc(sizeof(char) * len);

	if (ptr == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}
	
	return (ptr);

	free(ptr);
}

