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
	int result;

	if (s1 == s2)
	{
		result = 0;
	}
	else if (s2 > s1)
	{
		result = -15;
	}
	else 
	{
		result = 15;
	}

	return (result);
}
