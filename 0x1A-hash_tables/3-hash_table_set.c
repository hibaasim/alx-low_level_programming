#include "hash_tables.h"

/**
 * hash_table_set - adds element to the table
 * @ht: table
 * @key: the key
 * @value: value associated with key
 *
 * Return: 1 if successul, otherwise 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	hash_node_t *current;
	unsigned long int i;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	current = ht->array[i];
	while (current)
	{
		if (strcmp(key, current->key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}
	new = new_node(ht, key, value, i);
	if (new == NULL)
		return (0);
	return (1);
}

/**
 * new_node - makes new node
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: address to the new node
*/
hash_node_t *new_node(hash_table_t *ht, const char *key, const char *value, unsigned long int i)
{
	hash_node_t *new;
	unsigned long int n = i;

	if (ht == NULL || key == NULL || value == NULL)
		return (NULL);
	if (strcmp(key, "") == 0)
		return (NULL);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	new->next = ht->array[n];
	ht->array[n] = new;
	return (new);

}
