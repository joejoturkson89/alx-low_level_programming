#include "lists.h"
/**
 * free_listint - function that frees a linked list
 * @head: points to the first node of a linked list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
