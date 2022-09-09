#include <stdio.h>
#include <stdlib.h>
/**
 *  main - prints and that piece of art
 *  is useful" - Dora Korpar, 2015-10-19
 *  Return: return 1
 */
int main(void)
{
	char ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, ch, sizeof(ch));
	exit(1);
}
