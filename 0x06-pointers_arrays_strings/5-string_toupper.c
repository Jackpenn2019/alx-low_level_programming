#include "main.h"

/**
 * string_toupper - changes all lowercase
 * letters of a string to uppercase
 * @input: input parameter
 *
 * Return: pointer
 */

char *string_toupper(char *input)
{
	int length = strlen(input);
	int x = 0;

	for (x = 0; x < length; x++)
	{
		input[x] = toupper(input[x]);
	}

	return (input);
}
