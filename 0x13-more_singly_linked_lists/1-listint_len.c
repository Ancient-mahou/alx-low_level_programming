#include "lists.h"

/**
 * listint_len - returns the numbee in nodess
 *
 * @h: headsss of a list in nodess
 *
 * Return: numbers of nodess.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodess = 0;

	while (h != NULL)
	{
		h = h->next;
		nodess++;
	}
	return (nodess);
}
