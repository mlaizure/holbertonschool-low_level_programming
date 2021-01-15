#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add to or update
 * @key: the key
 * @value: value associated with they key
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *current;
	unsigned long int key_idx;

	if (!ht || !key || !strcmp(key, "") || !value)
		return (0);

	key_idx = key_index((unsigned char *)key, ht->size);

	current = ht->array[key_idx];
	while (current)
	{
		if (!strcmp(key, current->key))
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->next = ht->array[key_idx];
	ht->array[key_idx] = new;
	return (1);
}
