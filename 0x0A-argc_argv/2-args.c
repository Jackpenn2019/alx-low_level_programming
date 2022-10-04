#include "main.h"

/**
 * main - main method
 * @argc: first argument
 * @argv: second argument
 *
 * Return: integer
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
