#include "lists.h"

/**
 * free_listint2 - frees a linstint_t list
 * @head: pointer to pointer to beginning of list
 *
 * Return: none
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (!head)
		return;
	else
		current = *head;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
