#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table you want to look for
 * @key: key you want to look for
 * Return: value associated with the key, or NULL if key can't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int key_idx;

	if (!ht || !key || !strcmp(key, ""))
		return (NULL);

	key_idx = key_index((unsigned char *)key, ht->size);

	current = ht->array[key_idx];
	while (current)
	{
		if (!strcmp(key, current->key))
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
