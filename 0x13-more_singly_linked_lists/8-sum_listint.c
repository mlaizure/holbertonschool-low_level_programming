#include "lists.h"

/**
 * sum_listint - returns sum of all the data of a listint_t linked list
 * @head: pointer to beginning of list
 *
 * Return: sum of all the data of the list, 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
