#include "lists.h"
/**
 * free_list - frees a single linked list
 * @head: first node of the linked list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
