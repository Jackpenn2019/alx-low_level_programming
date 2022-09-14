#include "main.h"

/**
 * print_last_digit - last digit of a number
 * @n: number passed
 *
 * Return: Always integer
 */

int print_last_digit(int n)
{
	int x;

	x = n % 10;

	if (x < 0)
	{
		x = -1*x;
	}

	_putchar(x+'0');

	return (x);
}


