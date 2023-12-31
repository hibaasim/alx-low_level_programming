#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print elements of a list
 * @h: list to be printed
 *
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
