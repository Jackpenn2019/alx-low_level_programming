#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: always integer
 */

int _strcmp(char *s1, char *s2)
{
	int result = 0;
	int i = 0;

	while (result == 0)
	{
		if (*(s1 + i) == '\0' || *(s2 + i) == '\0')
		{
			break;
		}
		result = *(s1 + i) - *(s2 + i);

		i++;
	}
	return (result);

}
