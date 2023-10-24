#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at given position
 * @head: pointer to head node pointer
 * @idx: position to insert node in
 * @n: value of element
 *
 * Return: address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *rep;

	new = malloc(sizeof(listint_t));
	if (new == NULL || *head == NULL)
		return (NULL);

	new->n = n;
	rep = *head;
	if (idx == 0)
	{
		new->next = rep;
		*head = new;
		return (new);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (rep == NULL || rep->next == NULL)
		{
			return (NULL);
		}
		rep = rep->next;
	}
	new->next = rep->next;
	rep->next = new;
	return (new);
}
