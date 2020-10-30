#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to head of linked list_t list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;
	int i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
		{
			for (i = 0; h->str[i]; ++i)
				;
			printf("[%d] %s\n", i, h->str);
		}
		++n;
		h = h->next;
	}
	return (n);
}
