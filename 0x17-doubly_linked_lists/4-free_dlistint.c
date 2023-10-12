#include "lists.h"
/**
 * free_dlistint - function that frees a list
 * @head: pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		free(tmp);
		tmp = tmp->next;
	}
}
