#include "main.h"

/**
 *  print_line - prints a line
 *  @n: number of times
 *
 *  Return: void
 */

void print_line(int n)
{
	int x;

	for (x = 1; x <= n; x++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar(95);
	}
	_putchar('\n');
}
