#include <stdio.h>

/**
 *  main - rints the alphabet in lowercase, followed by a new line
 *  Return: return 0
 */

int main(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
	if ((i != 'q') && (i != 'e'))
	{
		putchar(i);
	}
}
putchar('\n');
return (0);
}
