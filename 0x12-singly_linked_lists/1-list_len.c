#include "lists.h"

/**
 * A function that returns the number of elements in a linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
