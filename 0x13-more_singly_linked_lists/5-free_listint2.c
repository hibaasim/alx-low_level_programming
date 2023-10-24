#include "lists.h"

/**
 * free_listint2 - frees list and sets head to null
 * @head: pointer to head pointer
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *tmpo;

	tmp = *head;
	while (tmp != NULL)
	{
		tmpo = tmp->next;
		free(tmp);
		tmp = tmpo;
	}
	*head = NULL;
}
