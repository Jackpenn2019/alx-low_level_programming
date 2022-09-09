#include <stdio.h>

/**
 *  main - prints the size of various types on the computer it is compiled and run on
 *  Return: 0 if program exits successfully, otherwise non zero
 */
int main(void)
{
	char x;
	int y;
	long int z;
	long long int a;
	float b;

	printf("Size of a char: %lu Byte(s)\n",(unsigned long)sizeof(x));
	printf("Size of an int: %lu Byte(s)\n",(unsigned long)sizeof(y));
	printf("Size of a long int: %lu Byte(s)\n",(unsigned long)sizeof(z));
	printf("Size of a long long int: %lu Byte(s)\n",(unsigned long)sizeof(a));
	printf("Size of a float: %lu Byte(s)\n",(unsigned long)sizeof(b));
	return (0);
}
