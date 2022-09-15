#include "main.h"

/**
 *  more_numbers - print from 0 to 14
 *  10 times
 *
 *  Return: void
 */

void more_numbers(void)
{
	int x;

	for (x = 1; x <= 10; x++)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
