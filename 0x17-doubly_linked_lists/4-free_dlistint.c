#include "lists.h"

/**
 * free_dlistint - frees a node
 * @head: node to be freed
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		if (head->next == NULL)
			tmp = head->prev;
		if (head->prev == NULL)
			tmp = head->next;
		free(head);
		head = tmp;
	}
}
