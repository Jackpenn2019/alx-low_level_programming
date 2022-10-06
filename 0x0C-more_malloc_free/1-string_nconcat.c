#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: size of characters characters
 *
 * Return: pointer to resultant string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		len2 = n;

	result = malloc(sizeof(char) * (len1 + len2 + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for(j = 0; j < len2; j++, i++)
		result[i] = s2[j];

	result[i] = '\0';

	return (result);
}
