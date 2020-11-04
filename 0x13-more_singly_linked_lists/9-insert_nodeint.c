#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to beginning of list
 * @idx: index of the list where the new node should be added
 * @n: int member of listint_t list element
 *
 * Return: address of the new node or NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp = *head;
	unsigned int i;

	if (idx != 0)
		for (i = 0; temp && i < idx - 1; ++i)
			temp = temp->next;

	if (!temp && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;

	if (idx != 0)
	{
		new->next = temp->next;
		temp->next = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}

	return (new);
}
