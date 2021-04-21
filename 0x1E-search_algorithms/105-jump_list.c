#include "search_algos.h"

/**
 * jump_list - searches for value in sorted singly linked list w/ jump search
 * @list: pointer to head of list
 * @size: number of nodes in list
 * @value: value to search for
 * Return: pointer to first node where value is located or NULL on failure
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t prev = 0, step = sqrt(size);
	listint_t *head = list;

	if (!list)
		return (NULL);

	while (list)
	{
		prev = list->index;
		while (list->index < size - 1 && list->index < step)
			list = list->next;
		printf("Value checked at index [%d] = [%d]\n",
		       (int)list->index, list->n);
		if (list->n >= value || list->index == size - 1)
			break;
		step += sqrt(size);
	}
	printf("Value found between indexes [%d] and [%d]\n",
	       (int)prev, (int)list->index);
	list = head;
	while (list->index < prev)
		list = list->next;
	while (list)
	{
		printf("Value checked at index [%d] = [%d]\n",
		       (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}
