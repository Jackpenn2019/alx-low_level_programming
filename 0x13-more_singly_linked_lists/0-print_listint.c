#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to first node on the list
 *
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
