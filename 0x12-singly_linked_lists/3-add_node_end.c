#include "lists.h"
#include <string.h>

/**
 * add_node_end - add node at end
 * @head: node before null
 * @str: string to be added
 *
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end;
	list_t *tmp = *head;

	new_end = malloc(sizeof(list_t));
	if (new_end == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		free(new_end);
		return (NULL);
	}

	new_end->str = strdup(str);
	new_end->len = strlen(str);
	new_end->next = NULL;
	if (*head == NULL)
		*head = new_end;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_end;
	}
	return (*head);
}
