#include "main.h"
#include <ctype.h>

/**
 *  _isdigit - that checks for a digit
 *  @c: parameter entered
 *
 *  Return: always integer
 */

int _isdigit(int c)
{
	int x;

	if (isdigit(c))
	{
		x = 1;
	}
	else
	{
		x = 0;
	}
	return (x);
}
