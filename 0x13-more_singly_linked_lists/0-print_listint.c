#include "lists.h"
/**
 * print_listint - function that prints all nodes of a linked list
 * @h: points to the first node of the list
 * Return: return the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_of_node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num_of_node++;
		h = h->next;
	}
	return (num_of_node);
}
