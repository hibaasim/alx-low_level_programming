#include "lists.h"

/**
 * add_nodeint - adds node at the beginning of a list
 * @head: pionter to head pointer
 * @n: value of element
 *
 * Return: address to new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
