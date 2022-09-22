#include "main.h"
/**
 * _strcat: concatenates two strings
 * @dest: input parameter 1
 * @src: input parameter 2
 *
 * Return: pointer to a variable
 * of char type
 */

char *_strcat(char *dest, char *src)
{
	dest = strcat(dest, src);

	return (dest);
}
