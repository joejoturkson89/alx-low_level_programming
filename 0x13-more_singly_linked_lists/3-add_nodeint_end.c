#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a  linked list
 * @head: points to the first node of a linked list
 * @n: data to add to the new created node
 * Return: pointer to new node or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_node;
	return (*head);
}
