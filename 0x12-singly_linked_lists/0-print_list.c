#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints list elements
 * @h: head of list
 *
 * Return: no of list elments
 */
size_t print_list(const list_t *h)
{
	size_t i;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
