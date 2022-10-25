#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the loaction of first node
 * @str: input string
 *
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;
	int len;
	char *dupl_str;
	
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	dupl_str = strdup(str);
	if (dupl_str == NULL)
	{
		free(temp);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	temp->str = dupl_str;
	temp->len = len;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;

	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}

	return (*head);
}
		




