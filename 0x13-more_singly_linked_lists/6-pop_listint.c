#include "lists.h"
/**
 * pop_listint - function that deletes the head of a linked list
 * @head: points to the first node of a list
 * Return: data of deleted element or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_data;

	if (!head || !*head)
		return (0);

	head_data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (head_data);
}
