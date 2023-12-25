#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the table
 *
 * Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned int i = 0, c = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (; i < (ht->size); i++)
	{
		current = ht->array[i];
		while (current)
		{
			printf("%s'%s': '%s'", c == 0 ? "" : ", ", current->key,
			current->value), c++;
			current = current->next;
		}
	}
	printf("}\n");
}
