#include <stdio.h>
#include "lists.h"

/**
 * list_len - counts length of the list
 * @h: pointer to head
 *
 * Return: length of the list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
