#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the first node
 * @str: input string
 *
 * Return: pointer to first element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	char *dupl_str;
	int len;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	dupl_str = strdup(str);
	if (dupl_str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	ptr->str = dupl_str;
	ptr->len = len;
	ptr->next = *head;

	*head = ptr;

	return (*head);
}
