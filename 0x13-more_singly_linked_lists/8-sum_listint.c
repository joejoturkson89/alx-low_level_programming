#include "lists.h"
/**
 * sum_listint - function that calculates
 * the sum of all data in a linked list
 * @head: points to the first node in a linked list
 * Return: return sum of elements of a linked list
 */
int sum_listint(listint_t *head)
{
	int sum_data = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum_data += temp->n;
		temp = temp->next;
	}

	return (sum_data);
}
