#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node ata certain index
 * @head: pointer to head node pointer
 * @index: index of node to be deleted
 *
 * Return: 1 for success -1 for fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *temp;

	if (*head == NULL)
		return (-1);
	tmp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}
	temp = tmp->next;
	tmp->next = temp->next;
	free(temp);
	return (1);
}
