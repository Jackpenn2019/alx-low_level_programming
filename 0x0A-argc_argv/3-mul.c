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
	int result, m, n;

	if (argc < 3 || argc > 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	m = atoi(argv[1]);
	n = atoi(argv[2]);
	result = m * n;

	printf("%d\n", result);

	return (0);
}
