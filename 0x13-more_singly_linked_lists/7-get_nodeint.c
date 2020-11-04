#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to beginning of the list
 * @index: index of the node
 *
 * Return: nth node of the list or NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = head;

	if (!head)
		return (NULL);

	for (i = 0; temp && i < index; ++i)
		temp = temp->next;

	return (temp);
}
