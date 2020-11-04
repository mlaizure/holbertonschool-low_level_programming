#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer to beginning of the list
 * @n: int member of listint_t element
 *
 * Return: address of new element or NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (*head);
	}

	while (last->next)
		last = last->next;
	last->next = new;

	return (last);
}
