#include "lists.h"

/**
 * free_list - WHY DON'T YOU FLYYYY FREEEEE LIIIIST (frees a list_t list)
 * @head: pointer to the beginning of a list_t list
 *
 * Return: none
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
