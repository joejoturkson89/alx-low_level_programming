#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts
 * a new node at a given position
 * @head: points to the first node of a list
 * @idx: index of the list where the new node wil be added
 * @n: integer element
 * Return: return address of the new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new_node;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (j = 0; j < idx - 1 && h != NULL; j++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = h->next;
		h->next = new_node;
	}

	return (new_node);
}
