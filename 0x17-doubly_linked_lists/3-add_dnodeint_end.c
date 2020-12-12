#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to head of list
 * @n: data for new node
 * Return: address of new element of NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}

	last = *head;
	while (last->next)
		last = last->next;

	new->prev = last;
	last->next = new;
	return (new);
}
