#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the pointer to the beginning of a list_t list
 * @str: string in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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

	new->next = *head;
	*head = new;

	return (*head);
}
