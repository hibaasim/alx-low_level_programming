#include "lists.h"
#include <string.h>

/**
 * add_node - adds node at beginning of list
 * @head: previously first node
 * @str: string of node
 *
 * Return: address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
