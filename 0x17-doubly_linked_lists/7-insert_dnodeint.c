#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head of list
 * @idx: index of the list where the new node should be added (starts at 0)
 * @n: data to insert in new node
 * Return: address of the new node or NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *addr, *temp = *h;
	unsigned int i;

	if (idx == 0)
	{
		addr = add_dnodeint(h, n);
		return (addr);
	}
	if (!temp)
		return (NULL);

	for (i = 0; temp && i < idx; ++i)
		temp = temp->next;
	if (i != idx)
		return (NULL);
	if (!temp)
	{
		addr = add_dnodeint_end(h, n);
		return (addr);
	}

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	temp->prev->next = new;
	new->next = temp;
	new->prev = temp->prev;
	temp->prev = new;
	return (new);
}
