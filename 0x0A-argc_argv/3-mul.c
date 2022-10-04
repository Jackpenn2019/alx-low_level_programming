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
	if (argc < 3 || argc > 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		int result;
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (0);
}
