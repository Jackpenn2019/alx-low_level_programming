#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input parameter
 *
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_actual_sqrt(n, 0));
}

/**
 * _actual_sqrt - returns the square root
 * @x: input parameter
 * @y: second parameter
 *
 * Return: int
 */

int _actual_sqrt(int x, int y)
{
	if ((y * y) > x)
		return (-1);
	else if ((y * y) == x)
		return (y);
	return (_actual_sqrt(x, y + 1));
}
