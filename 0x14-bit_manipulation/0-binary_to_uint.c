#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string containing binary number
 *
 * Return: Integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decval = 1;
	unsigned int size;
	int index;
	unsigned int total = 0;

	size = strlen(b);

	for (index = (size - 1); index >= 0; index --)
	{
		if (b[index] == '1')
		{
			total += decval;
			decval *= 2;
		}
	}
	return (total);
}
