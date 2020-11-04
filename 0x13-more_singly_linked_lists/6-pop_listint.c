#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list and returns
 * the head node's data
 * @head: pointer to pointer to the beginning of the listint_t list
 *
 * Return: head node's data or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n;

	if (!*head)
		return (0);

	n = temp->n;
	*head = temp->next;
	free(temp);

	return (n);
}
