#include <ctype.h>
#include "main.h"

/**
 *  _islower - checks for lowercase character
 *
 *  Return - 1 if lowercase
 *           0 otherwise
 */

int _islower(int c)
{
	unsigned char x;

	if (islower(c))
	{
		x = 1;
	}
	else
	{
		x = 0;
	}
	return x;
}
