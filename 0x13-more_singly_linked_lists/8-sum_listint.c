#include "lists.h"

/**
 * sum_listint - sums all the data
 * @head: pointer to head node
 *
 * Return: the sum or 0 if empty list
 */
int sum_listint(listint_t *head)
{

	if (head == NULL)
		return (0);
	return (head->n + sum_listint(head->next));
}
