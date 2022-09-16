#include "main.h"
#include <stdio.h>

/**
 *  print_diagonal - prints diagonal
 *  @n: input parameter
 *
 *  Return: void
 */

void print_diagonal(int n)
{
	int x;
	
	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			int j;

			for (j = 0; j < x; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
