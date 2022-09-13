#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: parameter passed
 *
 * Return: 1 is c is a letter otherwise 0
 */

int _isalpha(int c)
{
	int x;

	if (isalpha(c))
	{
		x = 1;
	}
	else
	{
		x = 0;
	}

	return (x);
}
