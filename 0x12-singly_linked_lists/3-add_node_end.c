#include "lists.h"

/**
 * add_node_end - adds a new nodeo at the end of a list_t list
 * @head: pointer to the pointer to the beginning of the list_t list
 * @str: string in the new list_t node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last = *head;
	unsigned int i;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	if (!str)
		new->str = NULL;
	else
	{
		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
	}

	for (i = 0; new->str[i]; ++i)
		;
	new->len = i;

	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (last->next)
		last = last->next;
	last->next = new;

	return (*head);
}
