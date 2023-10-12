#include "lists.h"
/**
 * sum_dlistint - function that sums up the values
 * of a doubly linked list
 *
 * @head: address to the head of list to get the sum
 * Return: return the sum value
 */
int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *tmp;
	int sum = 0;

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
