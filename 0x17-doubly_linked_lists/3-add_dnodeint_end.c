#include "lists.h"
/**
 * add_dnodeint_end - function that adds node at the end
 * of a doubly linked list
 *
 * @head: address to the head of the list
 * @n: new value for thr new node
 * Return: address of the new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new;

	tmp = *head;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->prev = NULL;
	new->n = n;
	if ((*head) == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}

	new->prev = tmp;
	tmp->next = new;
	return (new);
}
