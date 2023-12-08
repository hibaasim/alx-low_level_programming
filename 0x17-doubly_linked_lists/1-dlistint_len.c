#include "lists.h"

/**
 * dlistint_len - returns number of list elements
 * @h: list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
