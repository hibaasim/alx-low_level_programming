#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of a list
 * @head: pointer to head note pointer
 * @n: value of element
 *
 * Return: address of new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end, *tmp;

	new_end = malloc(sizeof(listint_t));
	if (new_end == NULL)
		return (NULL);

	new_end->n = n;
	new_end->next = NULL;
	if ((*head) == NULL)
		*head = new_end;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_end;
	}
	return (new_end);
}
