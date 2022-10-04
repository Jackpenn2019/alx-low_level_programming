#include "main.h"

/**
 * is_palindrome - checks if palindrome
 * @s: input string
 *
 * Return: integer
 */

int is_palindrome(char *s)
{
	int n = strlen(s);

	if (n == 0)
		return (1);
	return (isPalRec(s, 0, n - 1));
}

/**
 * isPalRec - checks if palindrome
 * @s: input string
 * @m: second input
 * @n: third input
 *
 * Return: integer
 */

int isPalRec(char *s, int m, int n)
{
	if (m == n)
	{
		return (1);
	}
	 else if (s[m] != s[n])
	 {
	 	 return (0);
	 }
	if (m < n + 1)
	{
		return (isPalRec(s, m + 1, n - 1));
	}
		return (1);
}
