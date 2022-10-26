#include "lists.h"

/**
 * add_nodeint - add node at the beginning of list
 * @head: pointer to first node on the list
 * @n: integer to be added
 *
 * Return: Pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (head == NULL)
		*head = ptr;

	ptr->next = *head;
	*head = ptr;

	return (*head);
}
