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

	rep = *head;
	if (rep == NULL)
	{
		free(rep);
		return (NULL);
	}
	for (i = 0; i < (idx - 1); i++)
		rep = rep->next;
	new->n = n;
	new->next = rep->next;
	rep->next = new;
	return (new);
}
