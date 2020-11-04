#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node of a listint_t list at a given
 * index
 * @head: pointer to pointer to beginning of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *next;
	unsigned int i;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; temp && i < index - 1; ++i)
		temp = temp->next;

	if (!temp || !temp->next)
		return (-1);

	next = temp->next->next;
	free(temp->next);
	temp->next = next;

	return (1);
}
