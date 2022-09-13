#include "main.h"

/**
 *  print_alphabet_x10 - prints 10 times
 *  the alphabet, in lowercase followed
 *  by a new line
 *
 *  Return - always void
 */

void print_alphabet_x10(void)
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		char j;
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}

}
