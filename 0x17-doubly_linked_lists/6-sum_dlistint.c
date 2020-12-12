#include "lists.h"

/**
 * sum_dlistint - returns sum of all the data in a dlistint_t linked list
 * @head: pointer to head of list
 * Return: sum of data in list, 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	for (; head; head = head->next)
		sum += head->n;

	return (sum);
}
