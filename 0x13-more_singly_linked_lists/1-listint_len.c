#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: points to the first node of the linked list
 * Return: return number of nodes in a list
 */
size_t listint_len(const listint_t *h)
{
	size_t num_of_node = 0;

	while (h)
	{
		num_of_node++;
		h = h->next;
	}
	return (num_of_node);
}
