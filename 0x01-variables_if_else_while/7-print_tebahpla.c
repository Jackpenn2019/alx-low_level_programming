#include <stdio.h>

/**
 *  main - rints the alphabet in lowercase, followed by a new line
 *  Return: return 0
 */

int main(void)
{
char i;

for (i = 'z'; i >= 'a'; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
