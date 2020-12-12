#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to head of list
 * @index: index of the node to get starting from 0
 * Return: nth node of list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; head && i < index; ++i)
		head = head->next;
	if (i == index)
		return (head);
	else
		return (NULL);
}
