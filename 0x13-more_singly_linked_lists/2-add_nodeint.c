#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to pointer to the head of the list
 * @n: integer member of listint_t element
 *
 * Return: address of the new element of NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	new->next = *head;
	*head = new;

	return (*head);
}
