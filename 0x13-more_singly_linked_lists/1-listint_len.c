#include "lists.h"

/**
 * listint_len - gives the length of the list
 * @h: pointer to list
 *
 * Return: list length
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
