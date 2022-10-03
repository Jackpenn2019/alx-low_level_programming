#include "main.h"

/**
 * s_prime_number - returns 1 if the input integer is
 * a prime number, otherwise return 0
 * @n: input parameter
 *
 * Return: integer
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (_actual_prime(n, (n / 2)));
}

/**
 * _actual_prime - checks if a number is prime
 * @x: input parameter 1
 * @y: input parameter 2
 *
 * Return: integer
 */

int _actual_prime(int x, int y)
{

	if (y == 1)
		return (1);
	else 
	{
		if ((x % y) == 0)
			return (0);
		else 
			return (_actual_prime(x, y - 1));
	}
}
