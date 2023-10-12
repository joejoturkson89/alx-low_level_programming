#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the
 * node at a given index of a linked list
 *
 * @head: head of the doubly linked list
 * @index: index of the new node
 * Return: return 1 if success or -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1, *h2;
	unsigned int dex;

	h1 = *head;

	if (h1 != NULL)
		while (h1->prev != NULL)
			h1 = h1->prev;
	dex = 0;

	while (h1 != NULL)
	{
		if (dex == index)
		{
			if (dex == 0)
			{
				*head = h1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = h1->next;
				if (h1->next != NULL)
					h1->next->prev = h2;
			}
			free(h1);
			return (1);
		}
		h2 = h1;
		h1 = h1->next;
		dex++;
	}
	return (-1);
}
