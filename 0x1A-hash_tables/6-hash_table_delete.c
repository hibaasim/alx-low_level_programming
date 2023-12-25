#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 *
 * Return: Nothing
*/
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *tmp, *curr;
    unsigned long int i;

    if (ht == NULL)
        return;
    for (i = 0; i < ht->size; i++)
    {
        curr = ht->array[i];
        while (curr)
        {
            tmp = curr;
            curr = tmp->next;
            free(tmp->key);
            free(tmp->value);
            free(tmp);
        }
    }
    free(ht->array);
    free(ht);
}
