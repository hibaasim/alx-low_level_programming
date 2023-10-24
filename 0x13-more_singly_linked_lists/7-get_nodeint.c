#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to head node
 * @index: index of wanted node
 *
 * Return: nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/*listint_t *ls;*/
	unsigned int i = 0;

	/*ls = head;*/
	for (; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	/*ls = head;*/
	return (head);
}
