#include "lists.h"

/**
 * print_listint - display all ,the elements of the list.
 * @h: head of list.
 *
 * Return: numero de node.
 */


size_t print_listint(const listint_t *h)

{
	size_t nodess = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodess++;
	}

	return (nodess);
}
