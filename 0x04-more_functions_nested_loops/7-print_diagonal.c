#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: length of line
 * Return: nothing
 */

void print_diagonal(int n)
{
	int x, y;

	for (y = 1; y <= n; y++)
	{
		for (x = 1; x < y; x++)
			_putchar(32);
		_putchar(92);
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}
