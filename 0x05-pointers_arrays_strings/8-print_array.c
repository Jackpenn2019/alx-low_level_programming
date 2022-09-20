#include <stdio.h>

/**
 * print_array - prints n elements of an array of
 * integers, followed by a new line
 * @a: parameter
 * @n: second parameter
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x == (n - 1))
		{
			printf("%d\n", a[x]);
		}
		else
		{
			printf("%d, ", a[x]);
		}
	}
}
