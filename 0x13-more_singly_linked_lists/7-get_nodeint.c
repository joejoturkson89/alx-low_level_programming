#include "lists.h"
/**
 * get_nodeint_at_index - function that returns a node
 * at a certain index in a list
 * @head: points to the first node in the linked list
 * @index: the index of the node to return
 * Return: return pointer to the indexed node or NULL
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t k = 0;
	listint_t *temp = head;

	while (temp && k < index)
	{
		temp = temp->next;
		k++;
	}

	return (temp ? temp : NULL);
}
