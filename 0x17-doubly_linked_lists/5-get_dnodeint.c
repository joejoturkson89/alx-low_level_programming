#include "lists.h"
/**
 * get_dnodeint_at_index - function that inserts node at index
 * @head: address to the head of the list
 * @index: index of the list to access
 * Return: return address to the new inserted node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	tmp = head;
	if (head == NULL)
		return (NULL);
	while (tmp != NULL && i != index)
	{
		i++;
		tmp = tmp->next;
	}
	if (index == i)
		return (tmp);
	else
		return (NULL);
}
