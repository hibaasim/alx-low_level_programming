#include "lists.h"

/**
 * print_dlistint - prints all elements of a list
 * @h: list to be printed
 *
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
