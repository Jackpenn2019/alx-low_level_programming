#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int x;
	unsigned int y;

	if (strlen(str) % 2 != 0)
	{
		x = (strlen(str) / 2) + 1;
	}
	else 
	{
		x = strlen(str) / 2;
	}
	for (y = x; y <= strlen(str); y++)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
