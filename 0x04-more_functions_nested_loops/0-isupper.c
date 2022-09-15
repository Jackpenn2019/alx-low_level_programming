#include "main.h"
#include <ctype.h>

/**
 *  _isupper - checks for
 *  upper case character
 *  @c: parameter passed
 *
 *  x: variable to store result
 *
 *  Return: always integer
 */
int _isupper(int c)
{
	int x;

	if (isupper(c))
	{
		x = 1;
	}
	else
	{
		x = 0;
	}
	return (x);
}
