#include "lists.h"
/**
 * list_len - list the number of nodes in a linked list
 * @h: pointer to the first node
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}
