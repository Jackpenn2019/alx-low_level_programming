#include "main.h"

/**
 * reverse_array - reverses the content
 * of an array of integers
 * @a: input array
 * @n: number of elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x;

	for (x = n - 1; x >= 0; x--)
	{
		if (x == 0)
			printf("%d\n", a[x]);
		else
			printf("%d, ", a[x]);
	}
	printf("\n");
}
