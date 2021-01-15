#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 * Return: none
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current;
	short int t = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; ++i)
	{
		current = ht->array[i];
		while (current)
		{
			if (t)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			t = 1;
		}
	}
	printf("}\n");
}
