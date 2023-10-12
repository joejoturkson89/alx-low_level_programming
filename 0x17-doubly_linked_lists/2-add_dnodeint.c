#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the top
 * @head: address to the head of a list
 * @n: number of nodes
 * Return: return address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if ((*head) == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		(*head)->prev = new;
		new->next = *head;
		*head = new;
		return (new);
	}
}
