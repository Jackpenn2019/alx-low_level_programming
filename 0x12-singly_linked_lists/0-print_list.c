#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to an element of type list_t
 *
 * Return: the number of nodes in h
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		size++;
		h = h->next;
	}

	return (size);
}
